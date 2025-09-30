myprog: myprog.c libmylib.a
	gcc prog.c -L -lmylib -o proggy

show.o: show.c mylib.h
	gcc -c show.c -o show.o

sum.o: sum.c mylib.h
	gcc -c sum.c -o sum.o

libmylib.a: show.o sum.o
	ar rs libmylib.a show.o sum.o

clean:
	rm sum.o show.o proggy

