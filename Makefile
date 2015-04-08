CC=gcc
object= demo.o MD5_lib.o MD5.o #$(wildcard *.o)
all : $(object)
	echo $(object)
	$(CC) -o demo $(object)
$(object) : %.o:%.c
	$(CC)  -c $< -o $@ 
clean:
	-rm demo $(object)
