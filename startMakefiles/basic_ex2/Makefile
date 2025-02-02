# Target: <dependencies>
#	<rules for creating the target>

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
program: main.o add.o printSum.o
	$(CC) $(SRC_DIR)/main.o $(SRC_DIR)/add.o $(SRC_DIR)/printSum.o -o $(TAR_NAME)
	@echo "Application created"

# target=main.o(generate relocatable from main.c)
main.o: main.c
	$(CC) ${INCLUDE} ${CFLAGS} $(SRC_DIR)/main.c
	@echo "main.o is generated"

# target=add.o(generate relocatable from add.c)
add.o: add.c
	$(CC) ${INCLUDE} ${CFLAGS} $(SRC_DIR)/add.c
	@echo "add.o is generated"

# target=printVar.o(generate relocatable from printVar.c)
printVar.o: printVar.c
	$(CC) ${INCLUDE} ${CFLAGS} $(SRC_DIR)/printVar.c
	@echo "printVar.o is generated"

# target = install app binary
install: $(TAR_NAME)
	cp -f $(CUR_DIR)/$(TAR_NAME) $(INSTALL_PATH)/$(TAR_NAME)
	@echo "Application installed Successfully at $(INSTALL_PATH)"

# Rule to clean up generated files
clean:
	rm -f $(SRC_DIR)/*.o $(CUR_DIR)/$(TAR_NAME) $(INSTALL_PATH)/$(TAR_NAME)
	@echo "Removed binaries"
