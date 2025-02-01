# target: <dependencies>
App: main.o add.o printSum.o
	gcc main.o add.o printSum.o -o App
	@echo "main.o binary created"

main.o:  main.c
	gcc -I./ -c main.c -o main.o
	@echo "main.o is generated"

add.o:  add.c
	gcc -I./ -c add.c -o add.o
	@echo "Add.o is generated"

printSum.o:  printSum.c
	gcc -I./ -c printSum.c -o printSum.o
	@echo "printSum.o is generated"

clean:
	rm -rf *.o App
	@echo "Removed binaries"
