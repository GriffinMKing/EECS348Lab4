main: main.c isOdd.c isEven.c
	gcc -o main main.c isOdd.c isEven.c

clean:
	rm -f main
