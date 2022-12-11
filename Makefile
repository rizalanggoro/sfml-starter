all: compile link run

compile:
	g++ -c main.cpp -I "D:\sdk\SFML-gcc\include" 

link: 
	g++ main.o -o main -L "D:\sdk\SFML-gcc\lib" -lsfml-graphics -lsfml-window -lsfml-system

clean: 
	rm -f main *.o

run: 
	.\main.exe

# clear:
# 	clear