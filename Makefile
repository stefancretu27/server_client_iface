#compiler
CC := g++
#compilation flags appliable everywhere
CPPFLAGS := -std=c++11 -g -Wall
#position independnet code
PIC_COMPILE = -fPIC -c
#source files
CLIENT_SOURCES = $(wildcard Client/*.cpp)
SERVER_SOURCES = $(wildcard Server/*.cpp)

all: sharedlib
	$(CC) $(CPPFLAGS) $(CLIENT_SOURCES) main.cpp -o server_client_iface.o -lserver_object -L.
	
sharedlib: server_object
	$(CC) -shared Server.o -o libserver_object.so
	
server_object:
	$(CC) $(CPPFLAGS) $(PIC_COMPILE) $(SERVER_SOURCES)
	
clean:
	rm *.o
