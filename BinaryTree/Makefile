CFLAGS = -Wall -Wno-implicit-function-declaration

all: final

final: main.o binarytree.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) -o final main.o binarytree.o

main.o: main.c 
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

binarytree.o: binarytree.c 
	@echo "Compiling graph.c"
	gcc $(CFLAGS) -c binarytree.c 

clean:
	@echo "Cleaning compiled files"
	@rm -f *.o final

