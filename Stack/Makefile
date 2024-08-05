CFLAGS = -Wall -Wno-implicit-function-declaration

all: final

final: main.o stack.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) -o final main.o stack.o

main.o: main.c 
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

stack.o: stack.c 
	@echo "Compiling graph.c"
	gcc $(CFLAGS) -c stack.c 

clean:
	@echo "Cleaning compiled files"
	@rm -f *.o final

