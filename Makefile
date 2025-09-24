main: main.c isOdd.c isOdd.h
	gcc -o main main.c isOdd.c

make clean:
	rm -f main