#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "contacts.h"

int readChar() {
    int character = getchar();

    if (character == EOF) {
        if (ferror(stdin)) printf("Error while reading input");
        else printf("End of input detected.\n");
        return 1;
    }

    while (getchar() != '\n') {
        // printf("char\n");
    }

    return character;
}

void readString(char *buffer, size_t size) {
    if (fgets(buffer, size, stdin) != NULL) {
        size_t length = strlen(buffer);
        if (length > 0 && buffer[length-1] == '\n') 
            buffer[length-1] = '\0';
        return;
    }
    printf("Error while reading input");
}

int main() {
    Contact *contacts[10];
    int length = sizeof(contacts) / sizeof(contacts[0]);
    for (size_t i = 0; i < length; i++) {
        contacts[i] = NULL;
    }

    Contact c0 = {"lasagn", "bolognsky", "123456789"};
    Contact c1 = {"matyas", "kliment", "222222222"};
    Contact c2 = {"jiri", "baran", "000888999"};

    contacts[0] = &c0;
    contacts[1] = &c1;
    contacts[2] = &c2;

    int selectedItem; 
    char *menuItems[] = { "add", "print", "search", "exit" };   

    while (1) {
        printf("\nC-ontacts menu\n");

        for (int i = 0; i < sizeof(menuItems) / sizeof(menuItems[0]); i++)
            printf("%c: %s\n", tolower(menuItems[i][0]), menuItems[i]);


        printf("select: ");
        selectedItem = readChar();
        
        printf("\e[1;1H\e[2J");

        char name[50];
        switch(selectedItem) {
            case 'a':
                printf("add\n");
                addContact(contacts, length);
                break; 
            case 'p':
                printAllContacts(contacts, length);
                printf("input anything to continue: ");
                readChar(); 
                break; 
            case 's':
                printf("search for: ");
                readString(name, sizeof(name));
                Contact *contact = findContact(contacts, length, name);
                if (contact == NULL) {
                    printf("contact has not been found");
                    break;
                }
                printf("contact found:\n");
                printContact(contact);
                break; 
            case 'e':
                printf("exit");
                return 0;
        }
    }

    return 0;
}