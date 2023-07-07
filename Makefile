all: compile link

compile:
	g++ -c main.cpp -IC:\Users\User\Documents\libraries\SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit\SFML-2.5.1\include -DSFML_STATIC

link: 
	g++ main.o -o kar -LC:\Users\User\Documents\libraries\SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit\SFML-2.5.1\lib -lsfml-graphics-s -lsfml-window-s -lsfml-audio-s -lsfml-network-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -lopenal32 -lflac -lvorbisenc -lvorbisfile -lvorbis -logg

clean:
	del -f main.o