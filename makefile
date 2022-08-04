ABC.exe: main.o big3.o fact.o palindrome.o rev.o big2.o fibonacci.o sum.o sort.o
	gcc -o ABC.exe main.o big3.o fact.o palindrome.o rev.o big2.o fibonacci.o sum.o sort.o
main.o:main.c
	gcc -c main.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
rev.o:rev.c
	gcc -c rev.c
big2.o:big2.c
	gcc -c big2.c
fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
sum.o:sum.c
	gcc -c sum.c
sort.o:sort.c
	gcc -c sort.c

