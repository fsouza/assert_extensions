clean:
	@rm -f *.out

test: clean
	@cc *.c
	@./a.out
