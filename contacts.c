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

    int index = -1;
    for (int i = 0; i < length; i++) {
        if (contacts[i] != NULL) continue;
        index = i;
        break;
    }
    if (index == -1) return;

    Contact *contact = (Contact*) malloc(sizeof(Contact));
    if (contact == NULL) return;
    
    printf("add contact\nfirst name: ");
    if (fgets(contact->firstName, sizeof(contact->firstName), stdin) == NULL) {
        printf("Error reading input");
        return;
    }

    size_t len = strlen(contact->firstName);
    printf("len %d", len);
    if (len > 0 && contact->firstName[len - 1] == '\n') {
        contact->firstName[len - 1] = '\0';
    }

    printf("\nlast name: ");
    if (fgets(contact->lastName, sizeof(contact->lastName), stdin) == NULL) {
        printf("Error reading input");
        return;
    }

    len = strlen(contact->lastName);
    if (len > 0 && contact->lastName[len - 1] == '\n') {
        contact->lastName[len - 1] = '\0';
    }

    printf("\nphone number: ");
    if (fgets(contact->phoneNumber, sizeof(contact->phoneNumber), stdin) == NULL) {
        printf("Error reading input");
        return;
    }

    len = strlen(contact->phoneNumber);
    if (len > 0 && contact->phoneNumber[len - 1] == '\n') {
        contact->phoneNumber[len - 1] = '\0';
    }

    // printf("name: %s", contact->firstName);
    // printf("name: %s", contact->lastName);
    // printf("name: %s", contact->phoneNumber);

    contacts[index] = contact;
}

void findContact(Contact *contacts[], size_t length) {

}