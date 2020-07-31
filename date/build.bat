g++ date.cpp -c -o date.o
g++ main.cpp -c -o main.o
g++ -o main.exe main.o date.o
del /Q main.o
del /Q date.o
main.exe