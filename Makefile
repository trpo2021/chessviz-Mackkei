all: chess

chess: main.o libchessviz.a board_read.o
	gcc -g -Wall -Werror -o chess main.o libchessviz.o board_read.o
	
main.o: main.c
	gcc -g -Wall -Werror -o main.o main.c
	
board_read.o: board_read.c
	gcc -g -Wall -Werror -o board_read.o board_read.c
	
libchessviz.a: board.o board_print_plain.o move.o
	ar rcs libchessviz.a board.o board_print_plain.o move.o
	
board.o: board.c
	gcc -Wall -Werror -o board.o board.c
	
board_print_plain.o: board_print_plain.c
	gcc -Wall -Werror -o board_print_plain.o board_print_plain.c
	
move.o: move.c
	gcc -Wall -Werror -o move.o move.c
	

.PHONY: all install uninstall clean

clean:
	*.o
	*.o
