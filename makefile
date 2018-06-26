default:checkdir bin/alph

test:bin/test.o


bin/test.o:build/test.o build/isLetter.o build/PrintMas.o build/Sort.o bin
	gcc -Wall -Werror build/test.o build/isLetter.o build/PrintMas.o build/Sort.o -o bin/test

bin/alph: build/main.o build/isLetter.o build/PrintMas.o build/Sort.o
	gcc -Wall -Werror build/main.o build/isLetter.o build/PrintMas.o build/Sort.o -o bin/alph

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/isLetter.o: src/isLetter.c
	gcc -Wall -Werror -c src/isLetter.c -o build/isLetter.o

build/PrintMas.o: src/PrintMas.c
	gcc -Wall -Werror -c src/PrintMas.c -o build/PrintMas.o

build/Sort.o: src/Sort.c
	gcc -Wall -Werror -c src/Sort.c -o build/Sort.o

build/test.o: test/main.c
	gcc -I thirdparty -I src -c test/main.c -o build/test.o

checkdir:
	@if [ -d bin  ];then echo ; else mkdir bin;fi
	@if [ -d build  ];then echo ; else mkdir build;fi

.PHONY : clean

clean:
	rm -rf build/*.o
