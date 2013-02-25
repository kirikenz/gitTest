#Doing this just because it's quick and dirty for now.
g++ -c node.cpp
g++ -c bst.cpp
g++ -c main.cpp
g++ node.o bst.o main.o -o bstprog
