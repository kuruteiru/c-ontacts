clean:
	rm $(wildcard *.o) $(wildcard *.exe)
	@echo "removed .o and .exe files"

contacts: src/main.c src/contacts.c
	gcc -g $^ -o build/$@
	@echo "$^ compiled into $@"