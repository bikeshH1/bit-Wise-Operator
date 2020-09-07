all:
	gcc -Wall -o bits major1.h major1.c rotate.c endian.c parity.c clz.c -std=c11
run:
	./bits
clean:
	rm bits