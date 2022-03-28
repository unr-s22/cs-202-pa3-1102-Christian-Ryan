moneys: main.cpp money.o account.o
	g++ -std=c++11 -o main.cpp money.o account.o

money.o: money.cpp money.h
	g++ -std=c++11 -c money.cpp money.h

account.o: account.cpp account.h
	g++ -std=c++11 -c account.cpp account.h

clean:
	rm *.o *.gch moneys