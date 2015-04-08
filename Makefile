CC=gcc
all : demo.o MD5_lib.o MD5.o
	$(CC) -o demo MD5_lib.o demo.o MD5.o
demo.o : demo.c 
	$(CC)  -c demo.c
MD5_lib.o : MD5_lib.c MD5_lib.h
	$(CC)  -c  MD5_lib.c  -I.
MD5.o : MD5.c MD5.h
	$(CC)  -c MD5.c -I.  

