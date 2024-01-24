CC = gcc
AR = ar

MAIN_OBJECT = main.o
OBJECTS_LOOP = basicClassification.o advancedClassificationLoop.o
OBJECTS_REC = basicClassification.o advancedClassificationRecursion.o
OBJECTS = basicClassification.o advancedClassificationLoop.o advancedClassificationRecursion.o
DEPS = NumClass.h
CFLAGS =-Wall

LIB_LOOP_S = libclassloops.a
LIB_REC_S = libclassrec.a
LIB_LOOP_D = libclassloops.so
LIB_REC_D = libclassrec.so

# Declare them as non-files
.PHONY: all clean

# All makes
all: mains maindloop maindrec clean

loops: $(LIB_LOOP_S)
recursives: $(LIP_REC_S)
recursived: $(LIB_REC_D)
loopd: $(LIB_LOOP_D)

# Programs
mains: $(MAIN_OBJECT) $(LIB_REC_S)
	$(CC) -o $@ $< $(CFLAGS) ./$(LIB_REC_S) -lm -L.

maindloop: $(MAIN_OBJECT) $(LIB_LOOP_D)
	$(CC) -o $@ $< $(CFLAGS) ./$(LIB_LOOP_D) -lm -L.

maindrec: $(MAIN_OBJECT) $(LIB_REC_D)
	$(CC) -o $@ $< $(CFLAGS) ./$(LIB_REC_D) -lm -L.

# Creates all the object files including main.o
%.o: %.c $(DEPS)
	$(CC) -c $^ $(CFLAGS) -fPIC 

# Make libraries:
$(LIB_LOOP_S): $(OBJECTS_LOOP)
	$(AR) rcs $@ $^
	ranlib $@

$(LIB_REC_S): $(OBJECTS_REC)
	$(AR) rcs $@ $^
	ranlib $@

$(LIB_LOOP_D): $(OBJECTS_LOOP)
	$(CC) -shared $^ -Wall -o $@

$(LIB_REC_D): $(OBJECTS_REC)
	$(CC) -shared $^ -Wall -o $@

clean: 
	rm -f *.o *.a *.so
