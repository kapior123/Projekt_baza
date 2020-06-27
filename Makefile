dziekanat.bin: mkdir doktorant.o  functions.o nauczyciel.o student.o main.o 
	g++ -I src/osoba.h obj/doktorant.o obj/nauczyciel.o obj/functions.o obj/student.o obj/main.o -o bin/dziekanat.bin

functions.o: doktorant.o student.o 
	g++ -c src/functions.cpp -o obj/functions.o

doktorant.o:
	g++ -c src/doktorant.cpp -o obj/doktorant.o

nauczyciel.o:
	g++ -c src/nauczyciel.cpp -o obj/nauczyciel.o

student.o: 
	g++ -c src/student.cpp -o obj/student.o

main.o: 
	g++ -c src/main.cpp -o obj/main.o

mkdir:
	mkdir -p obj bin

clear:
	rm obj/*
