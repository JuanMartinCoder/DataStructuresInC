CFLAGS = -Wall -Wno-implicit-function-declaration

all: final

final: main.o linkedlist.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) -o final main.o linkedlist.o

main.o: main.c 
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

linkedlist.o: linkedlist.c 
	@echo "Compiling graph.c"
	gcc $(CFLAGS) -c linkedlist.c 

clean:
	@echo "Cleaning compiled files"
	@rm -f *.o final

