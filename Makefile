kurs: src/kurs.o src/kurs2.o src/main.o
	gcc -o kurs  src/kurs.o src/kurs2.o src/main.o  -lm

src/kurs.o: src/kurs.c
	gcc -c -o src/kurs.o src/kurs.c

src/kurs2.o: src/kurs2.c
	gcc -c -o src/kurs2.o src/kurs2.c
	

src/main.o: src/main.c
	gcc -c -o src/main.o src/main.c
