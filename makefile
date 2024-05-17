clean:
	rm $(wildcard *.o) $(wildcard *.exe)
	@echo "removed .o and .exe files"

contacts: main.c contacts.c
	gcc $^ -o $@
	@echo "$^ compiled into $@"