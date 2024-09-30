explode: main.o lab.o
        $(CC) -o $@ $?

lab1.o: lab1.C
        $(CC) -c $?
	
main.o: main.c
        $(CC) -c $?
