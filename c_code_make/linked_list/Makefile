# which complier
CC=gcc

# compiler flags
CFLAGS = -c -g -O2

# include files
INCLUDE= -I.

# where to install
INSTALL_PATH=.

# name of the application
TAR_NAME=program

# path of the source files
SRC_DIR=.

# path to current directory
CUR_DIR=.

# target=program(creating the application)
program:  linkedList_singly.o main.o print_singlyLL.o
	$(CC) $(SRC_DIR)/linkedList_singly.o  $(SRC_DIR)/main.o $(SRC_DIR)/print_singlyLL.o -o $(TAR_NAME)
	@echo "Application created"

# target=linkedList_singly.o(generate relocatable from linkedList_singly.c)
linkedList_singly.o: linkedList_singly.c
	$(CC) ${INCLUDE} ${CFLAGS} -o linkedList_singly.o $(SRC_DIR)/linkedList_singly.c
	@echo "LL1.o is generated"

# target=main.o(generate relocatable from main.c)
main.o: main.c
	$(CC) ${INCLUDE} ${CFLAGS} -o main.o $(SRC_DIR)/main.c
	@echo "LL1.o is generated"

# target=print_singlyLL.o(generate relocatable from print_singlyLL.c)
print_singlyLL.o: print_singlyLL.c
	$(CC) ${INCLUDE} ${CFLAGS} -o print_singlyLL.o $(SRC_DIR)/print_singlyLL.c
	@echo "LL1.o is generated"

# target = install app binary
install: $(TAR_NAME)
	cp -f $(CUR_DIR)/$(TAR_NAME) $(INSTALL_PATH)/$(TAR_NAME)
	@echo "Application installed Successfully at $(INSTALL_PATH)"

# Rule to clean up generated files
clean:
	rm -f $(TAR_NAME) linkedList_singly.o $(TAR_NAME) main.o  $(TAR_NAME) print_singlyLL.o 
	@echo "cleaned up!!"
