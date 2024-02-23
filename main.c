#include <stdio.h>
#include <ctype.h>
#include "contacts.h"

//enum menuItemsEnum {
//     Add,
//     Print,
//     Search,
//     Exit,
//};

int main(int argc, char **argv) {
   Contact *contacts[10];
   
    while(1) {
        printf("C-ontacts menu\n");

        char *menuItems[] = { "Add", "Print", "Search", "Exit" };   
        for (int i = 0; i < sizeof(menuItems) / sizeof(menuItems[0]); i++)
            printf("%c: %s\n", tolower(menuItems[i][0]), menuItems[i]);

        printf("select: ");
        int selectedItem = getchar();
        
        printf("selected item: %c\n", selectedItem);
        
        switch(selectedItem) {
            case 'a':
                //AddContact();
                break; 
            case 'p':
                printf("print");
                //PrintContacts();
                break; 
            case 's':
                printf("search");
                //FindContact();
                break; 
            case 'e':
                printf("exit");
                return 0;
                break; 
            default:
                printf("select an item from the menu, moron");
                break;
        }
    }

    return 0;
}