cd ..
g++ date.cpp -c -o date.o
g++ example\main.cpp -c -o example\main.o
g++ -o example\main.exe example\main.o date.o
del /Q example\main.o
del /Q date.o
