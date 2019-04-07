FLAGS_LINUX = -lX11 -lpthread -ldl
OUTPUT_LINUX = program

# FLAGS_WINDOWS = -lole32 -limm32 -lwinmm -lgdi32 -lsetupapi -loleaut32 -lversion
# OUTPUT_WINDOWS = program.exe

all:
	g++ -c ./dep/pieas_draw/pieas_draw.cpp -o ./dep/pieas_draw/build/pieas_draw.o -I./dep/pieas_draw -I./dep/SDL/include
	g++ -c program.cpp -o build/program.o -I./dep/pieas_draw
	g++ build/program.o dep/pieas_draw/build/pieas_draw.o ./dep/SDL/lib/libSDL2.a -o build/program -lX11 -lpthread -ldl
