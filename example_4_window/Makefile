all:
	g++ -c program.cpp -o build/program.o -I./dep/SDL/include
	g++ build/program.o ./dep/SDL/build/.libs/libSDL2.a -o build/program -lX11 -lpthread -ldl
