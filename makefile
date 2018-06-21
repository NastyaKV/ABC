default: bin/alph

bin/alph: build/main.o build/isLetter.o build/PrintMas.o build/Sort.o
	g++ -Wall -Werror build/main.o build/isLetter.o build/PrintMas.o build/Sort.o -o bin/alph

build/main.o: src/main.c
	g++ -Wall -Werror -c src/main.c -o build/main.o

build/isLetter.o: src/isLetter.c
	g++ -Wall -Werror -c src/isLetter.c -o build/isLetter.o

build/PrintMas.o: src/PrintMas.c
	g++ -Wall -Werror -c src/PrintMas.c -o build/PrintMas.o

build/Sort.o: src/Sort.c
	g++ -Wall -Werror -c src/Sort.c -o build/Sort.o

.PHONY : clean
clean:
	rm -rf build/*.o
