all:
	g++ -o fucktonConverterLinux-DEV main.cpp fucktons.cpp
run:
	./fucktonConverterLinux-DEV
build-dev:
	g++ -o fucktonConverterLinux-DEV main.cpp fucktons.cpp
build-release:
	g++ -static -o fucktonConverterLinux main.cpp fucktons.cpp
	x86_64-w64-mingw32-g++ -g -static -o fucktonConverter.exe main.cpp fucktons.cpp
clean:
	rm fucktonConverterLinux fucktonConverterLinux-DEV *.exe fucktonConverter

