
OBJ = client.o client_main.o

client : $(OBJ)
	cc -o client $(OBJ)

client.o : client.h client.c

.PHONY : clean
clean :
	rm *.o

