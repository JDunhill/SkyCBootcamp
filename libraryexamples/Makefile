BINS=librarytest libexample3.so runtime_librarytest
all: $(BINS)

libexample3.o: libexample3.c example3.h
	gcc -c libexample3.c

libexample3.so: libexample3.c example3.h
	gcc -fPIC -shared -o $@ libexample3.c -lc

librarytest: librarytest.c libexample3.o
	gcc -o $@ $^

runtime_librarytest: librarytest.c
	gcc -o $@ $^ -L. -lexample3

clean: 
	rm *.o *.so librarytest runtime_librarytest