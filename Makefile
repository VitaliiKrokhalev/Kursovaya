kurs: src/kurs.o src/main.o
	gcc -o kurs  src/kurs.o src/main.o  -lm

src/kurs.o: src/kurs.c
	gcc -c -o src/kurs.o src/kurs.c

src/main.o: src/main.c
	gcc -c -o src/main.o src/main.c
