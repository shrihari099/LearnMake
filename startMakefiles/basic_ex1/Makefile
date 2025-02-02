# Target: <dependencies>
# This rule specifies how to build the final executable 'App' from object files.
App: main.o add.o printSum.o
	gcc -I./ main.o add.o printSum.o -o App
	@echo "main.o binary created"

# Rule to compile 'main.c' into 'main.o'
main.o: main.c
	gcc -I./ -c main.c -o main.o
	@echo "main.o is generated"

# Rule to compile 'add.c' into 'add.o' (commented out)
#add.o: add.c
#	gcc -I./ -c add.c -o add.o
#	@echo "Add.o is generated"

# Rule to compile 'printSum.c' into 'printSum.o' (commented out)
#printSum.o: printSum.c
#	gcc -I./ -c printSum.c -o printSum.o
#	@echo "printSum.o is generated"

# Rule to clean up generated files
clean:
	rm -rf *.o App
	@echo "Removed binaries"
