Sol: iterativeFibonacci.o recursiveFibonacci.o iterativeFindMax.o recursiveFindMax.o Main.o
	gcc iterativeFibonacci.o recursiveFibonacci.o iterativeFindMax.o recursiveFindMax.o Main.c -o Sol

iterativeFibonacci.o: iterativeFibonacci.c
	gcc -Wall -std=c99 -c iterativeFibonacci.c

recursiveFibonacci.o: recursiveFibonacci.c
	gcc -Wall -std=c99 -c recursiveFibonacci.c

iterativeFindMax.o: iterativeFindMax.c
	gcc -Wall -std=c99 -c iterativeFindMax.c

recursiveFindMax.o: recursiveFindMax.c
	gcc -Wall -std=c99 -c recursiveFindMax.c

Main.o: Main.c
	gcc -Wall -std=c99 -c Main.c

clean:
	rm -f *.o Sol

