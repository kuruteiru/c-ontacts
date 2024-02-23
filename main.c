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
    printf("C-ontacts menu\n");

    char *menuItems[] = { "Add", "Print", "Search", "Exit" };   
    for (int i = 0; i < sizeof(menuItems) / sizeof(menuItems[0]); i++)
        printf("%c: %s\n", tolower(menuItems[i][0]), menuItems[i]);

    printf("select: ");
    int selectedItem = getchar();
    
    printf("selected item: %c\n", selectedItem);
    
    switch(selectedItem) {
        case 'a': printf("add"); break; 
        case 'p': printf("print"); break; 
        case 's': printf("search"); break; 
        case 'e': printf("exit"); break; 
        default: printf("select an item from the menu, moron");
    }
    
    return 0;
}