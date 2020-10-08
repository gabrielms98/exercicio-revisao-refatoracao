run: main.o Empregado.o Engenheiro.o Vendedor.o
	g++ main.o Empregado.o Engenheiro.o Vendedor.o -std=c++14

Vendedor.o: Vendedor.hpp Vendedor.cpp
	g++ -c Vendedor.cpp -std=c++14

Engenheiro.o: Engenheiro.hpp Engenheiro.cpp
	g++ -c Engenheiro.cpp -std=c++14

Empregado.o: Empregado.hpp Empregado.cpp 
	g++ -c Empregado.cpp -std=c++14

main.o: main.cpp
	g++ -c main.cpp -std=c++14
