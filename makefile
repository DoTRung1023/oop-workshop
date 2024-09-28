main: main.cpp Invoice.cpp
	@g++ -std=c++11 main.cpp Invoice.cpp -o main 
	@./main

invoice: invoice.cpp main.cpp
	@g++ -std=c++11 main.cpp invoice.cpp -o main 
	@./main

clear:
	@rm -f main