
OBJ = server.o server_main.o

server : $(OBJ)
	cc -o server $(OBJ)

server.o : server.h server.c

.PHONY : clean
clean :
	rm *.o

