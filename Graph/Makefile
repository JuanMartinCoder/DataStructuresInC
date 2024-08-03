CFLAGS = -Wall -Wno-implicit-function-declaration

all: final

final: main.o graph.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) -o final main.o graph.o

main.o: main.c 
	@echo "Compiling main.c"
	gcc $(CFLAGS) -c main.c

graph.o: graph.c 
	@echo "Compiling graph.c"
	gcc $(CFLAGS) -c graph.c 

clean:
	@echo "Cleaning compiled files"
	@rm -f *.o final
