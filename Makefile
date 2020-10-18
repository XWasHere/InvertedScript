HDF = src/*.cpp
interpreter: src/*
	g++ src/chunk.cpp -c -o build/obj/chunk.o
	g++ src/debug.cpp -c -o build/obj/debug.o
	g++ src/memory.cpp -c -o build/obj/memory.o
	g++ src/value.cpp -c -o build/obj/value.o
	g++ src/vm.cpp -c -o build/obj/vm.o
	g++ src/compiler.cpp -c -o build/obj/compiler.o
	g++ src/scanner.cpp -c -o build/obj/scanner.o
	g++ src/main.cpp -c -o build/obj/main.o
	g++ build/obj/*.o -o InvertedScript.exe
