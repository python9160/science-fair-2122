main: main.cpp
	gcc main.cpp algorithms/*.cpp -o main -lstdc++

run: main
	./main