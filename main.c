#include <stdio.h>
#include <ctype.h>
#include "contacts.h"

int main() {
    Contact c0 = {"lasagn", "bolognsky", "123456789"};
    Contact c1 = {"matyas", "kliment", "222222222"};
    Contact c2 = {"jiri", "baran", "000888999"};

    Contact *contacts[10] = { NULL };
    contacts[0] = &c0;
    contacts[1] = &c1;
    contacts[2] = &c2;

    int length = sizeof(contacts) / sizeof(contacts[0]);
    printf("%d", length);

    char selectedItem; 
    char *menuItems[] = { "Add", "Print", "Search", "Exit" };   

    while(1) {
        printf("C-ontacts menu\n");

        for (int i = 0; i < sizeof(menuItems) / sizeof(menuItems[0]); i++)
            printf("%c: %s\n", tolower(menuItems[i][0]), menuItems[i]);

        printf("select: ");
        scanf(" %c", &selectedItem);
        
        printf("\e[1;1H\e[2J");

        switch(selectedItem) {
            case 'a':
                //AddContact();
                break; 
            case 'p':
                PrintAllContacts(contacts, length);
                
                char con; 
                printf("select: ");
                scanf(" %c", &con);
        
                break; 
            case 's':
                printf("search\n");
                //FindContact();
                break; 
            case 'e':
                printf("exit");
                return 0;
             default:
                 printf("select an item from the menu, moron");
                 break;
        }
    }

    return 0;
}