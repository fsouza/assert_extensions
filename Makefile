clean:
	@rm -f *.out

test: clean
	@cc -ansi -Wall *.c
	@./a.out
