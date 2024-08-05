CFLAGS = -Wall -Wno-implicit-function-declaration

all: final

final: main.o queue.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) -o final main.o queue.o

main.o: main.c 
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

queue.o: queue.c 
	@echo "Compiling graph.c"
	gcc $(CFLAGS) -c queue.c 

clean:
	@echo "Cleaning compiled files"
	@rm -f *.o final

