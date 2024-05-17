#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contacts.h"

void printContact(Contact *contact) {
    if (contact == NULL) return;
    printf("first name: %s\n", contact->firstName);
    printf("last name: %s\n", contact->lastName);
    printf("phone number: %s\n", contact->phoneNumber);
}

void printAllContacts(Contact *contacts[], size_t length) {
    for (int i = 0; i < length; i++) {
        if (contacts[i] == NULL) continue;
        printContact(contacts[i]);
        printf("\n");
    }
}

void removeContact(Contact *contact) {

}

void addContact(Contact *contacts[], int length) {
    if (contacts == NULL) return;

    printf("len %d\n", length);

    int *index = NULL;
    for (int i = 0; i < length; i++) {
        printf("check space\n");
        if (contacts[i] != NULL) continue;
        printf("found space\n");
        index = i;
        break;
    }
    printf("check if is space\n");
    if (index == NULL) return;

    Contact *contact = (Contact*) malloc(sizeof(Contact));
    if (contact == NULL) return;
    
    printf("add contact\nname: ");
    if (fgets(contact->firstName, sizeof(contact->firstName), stdin) != NULL) {
        perror("Error reading input");
        return;
    }
}

void findContact(Contact *contacts[], size_t length) {

}