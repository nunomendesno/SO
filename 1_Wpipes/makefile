MYFLAGS=-g -Wall -c -lm -std=c99
EXECUTABLENAME=pi.out

all: pi.o 
	gcc pi.o -o $(EXECUTABLENAME)
	
1a.o: pi.c
	gcc $(MYFLAGS) pi.c
	
	
run: all
	$(EXECUTABLENAME) 


clean:
	-rm *.o
	-rm *.out
