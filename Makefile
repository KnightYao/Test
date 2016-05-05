find:main.o find.o
	gcc main.o find.o -o find

main.o:main.c
	gcc -c main.c

find.o:find.c
	gcc -c find.c

clean:
	rm main.o find.o
