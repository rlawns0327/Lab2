arithmetic : main.o ./lib/arithmetic.o
	gcc -o arithmetic main.o ./lib/arithmetic.o -I./lib -L./lib

main.o : main.c
	gcc -c main.c -I./lib
	
./lib/arithmetic.o : ./lib/arithmetic.c
	gcc -c ./lib/arithmetic.c
	
clean : 
	rm -f arithmetic main.o ./lib/arithmetic.o
