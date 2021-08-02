String: main.o Tester.o StringLengthTask.o
	g++ -std=c++11 -o String main.o Tester.o StringLengthTask.o
main.o: main.cc
	g++ -std=c++11 -c -o main.o main.cc
Tester.o: Tester.cc
	g++ -std=c++11 -c -o Tester.o Tester.cc
StringLengthTask.o: StringLengthTask.cc
	g++ -std=c++11 -c -o StringLengthTask.o StringLengthTask.cc
