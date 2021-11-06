CC=gcc
AR=ar
FLAGS= -g -Wall
LM = -lm
RCS = -rcs
SHARED = -shared
C = -c
O = -o

all: mains maindloop maindrec loopd recursived recursives loops

loopd:libclassloops.so 
recursived:libclassrec.so
recursives:libclassrec.a
loops:libclassloops.a 


libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) $(RCS) libclassloops.a basicClassification.o advancedClassificationLoop.o
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) $(RCS) libclassrec.a basicClassification.o advancedClassificationRecursion.o
libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(CC) $(SHARED) $(O) libclassloops.so basicClassification.o advancedClassificationLoop.o
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) $(SHARED) $(O) libclassrec.so basicClassification.o advancedClassificationRecursion.o

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) $(C) basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) $(C) advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) $(C) advancedClassificationRecursion.c


mains: main.o libclassrec.a
	$(CC) $(FLAGS) $(O) mains main.o libclassrec.a $(LM)
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) $(O) maindloop main.o ./libclassloops.so $(LM)
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) $(O) maindrec main.o ./libclassrec.so $(LM)

main.o: main.c NumClass.h
	$(CC) $(FLAGS) $(C) main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
