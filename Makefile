PROG = plakatowanie
CC=g++
CPPFLAGS=-c -Wall
OBJS= plakat.o main.o building.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
main.o : main.cpp
	$(CC) $(CPPFLAGS) main.cpp
plakat.o : plakat.hpp plakat.cpp
	$(CC) $(CPPFLAGS) plakat.cpp
building.o: building.hpp building.cpp
	$(CC) $(CPPFLAGS) building.cpp
clean:
	rm -f $(PROG) $(OBJS)
