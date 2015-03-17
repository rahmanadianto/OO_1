all : main clean

main : main.cpp Arab.o Romawi.o Boolean.o ArabExp.o RomawiExp.o Aritmatik.o Ekspresi.o history.o Kalkulator.o Setting.o
	g++ main.cpp Arab.o Romawi.o Boolean.o ArabExp.o RomawiExp.o Aritmatik.o Ekspresi.o history.o Kalkulator.o Setting.o -o main

Arab.o : calculate_package/Arab.cpp
	g++ -c calculate_package/Arab.cpp -std=c++11

Romawi.o : calculate_package/Romawi.cpp
	g++ -c calculate_package/Romawi.cpp

Boolean.o : calculate_package/Boolean.cpp
	g++ -c calculate_package/Boolean.cpp

ArabExp.o : calculate_package/ArabExp.cpp
	g++ -c calculate_package/ArabExp.cpp

RomawiExp.o : calculate_package/RomawiExp.cpp
	g++ -c calculate_package/RomawiExp.cpp

Aritmatik.o : calculate_package/Aritmatik.cpp
	g++ -c calculate_package/Aritmatik.cpp

Ekspresi.o : calculate_package/Ekspresi.cpp
	g++ -c calculate_package/Ekspresi.cpp

history.o : memory_package/history.cpp
	g++ -c memory_package/history.cpp

Kalkulator.o : controller_package/Kalkulator.cpp
	g++ -c controller_package/Kalkulator.cpp

Setting.o : controller_package/Setting.cpp
	g++ -c controller_package/Setting.cpp

clean:
	rm *o 
