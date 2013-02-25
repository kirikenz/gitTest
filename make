#Doing this just because it's quick and dirty for now.
g++ -g -c node.cpp
g++ -g -c bst.cpp
g++ -g -c main.cpp
g++ -g node.o bst.o main.o -o bstprog
