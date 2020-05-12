dziekanat.bin: doktorant.o functions.o student.o main.o
	g++ obj/doktorant.o obj/functions.o obj/student.o obj/main.o -o bin/dziekanat.bin

doktorant.o:
	g++ -c src/doktorant.cpp -o obj/doktorant.o

functions.o: 
	g++ -c src/functions.cpp -o obj/functions.o

student.o: 
	g++ -c src/student.cpp -o obj/student.o

main.o: 
	g++ -c src/main.cpp -o obj/main.o

clear:
	rm obj/*
