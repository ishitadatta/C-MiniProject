a.out: file1.o file2.o
	gcc file1.o file2.o
file1.o: file1.c header.h
	gcc -c file1.c
file2.o: file2.c header.h
	gcc -c file2.c
