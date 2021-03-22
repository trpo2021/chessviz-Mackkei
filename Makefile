all: bin/chess

bin/chess: obj/src/chessviz/main.o obj/src/libchessviz/libchessviz.a obj/src/chessviz/board_read.o
	gcc -Wall -Werror -o bin/chess obj/src/chessviz/main.o obj/src/libchessviz/libchessviz.a obj/src/chessviz/board_read.o
	
obj/src/chessviz/main.o: src/chessviz/main.c
	gcc -I src -Wall -Werror -c -o obj/src/chessviz/main.o src/chessviz/main.c
	
obj/src/chessviz/board_read.o: src/chessviz/board_read.c
	gcc -I src -Wall -Werror -c -o obj/src/chessviz/board_read.o src/chessviz/board_read.c
	
obj/src/libchessviz/libchessviz.a: obj/src/libchessviz/board.o obj/src/libchessviz/board_print_plain.o obj/src/libchessviz/move.o
	ar rcs obj/src/libchessviz/libchessviz.a obj/src/libchessviz/board.o obj/src/libchessviz/board_print_plain.o obj/src/libchessviz/move.o
	
obj/src/libchessviz/board.o: src/libchessviz/board.c
	gcc -I src -Wall -Werror -c -o obj/src/libchessviz/board.o src/libchessviz/board.c
	
obj/src/libchessviz/board_print_plain.o: src/libchessviz/board_print_plain.c
	gcc -I src -Wall -Werror -c -o obj/src/libchessviz/board_print_plain.o src/libchessviz/board_print_plain.c
	
obj/src/libchessviz/move.o: src/libchessviz/move.c
	gcc -I src -Wall -Werror -c -o obj/src/libchessviz/move.o src/libchessviz/move.c
	

.PHONY: all install uninstall clean

clean:
	rm obj/src/*/*.o
	rm bin/chess
