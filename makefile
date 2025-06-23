CC = gcc
CFLAGS = -Wall
OBJS = major.o endian.o clz.o rotate.o parity.o

bitwisemenu: $(OBJS)
	$(CC) $(CFLAGS) -o bitwisemenu $(OBJS)

major.o: major.c major1.h
	$(CC) $(CFLAGS) -c major.c

endian.o: endian.c major1.h
	$(CC) $(CFLAGS) -c endian.c

clz.o: clz.c major1.h
	$(CC) $(CFLAGS) -c clz.c

rotate.o: rotate.c major1.h
	$(CC) $(CFLAGS) -c rotate.c

parity.o: parity.c major1.h
	$(CC) $(CFLAGS) -c parity.c

//command to  compile: gcc -Wall -o bitwisemenu major.c endian.c clz.c rotate.c parity.c
//command to run: ./bitwisemenus
