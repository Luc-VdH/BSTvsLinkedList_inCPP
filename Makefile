default:
	g++ -c LinkedList.cpp
	g++ -c BST.cpp
	g++ -c main.cpp
	g++ -o run LinkedList.o BST.o main.o
	./run