#include <stdio.h>
#include "contacts.h"

void PrintContact(Contact *contact) {
    if (contact == NULL) return;
    printf("first name: %s\n", contact->firstName);
    printf("last name: %s\n", contact->lastName);
    printf("phone number: %s\n", contact->phoneNumber);
}

void PrintAllContacts(Contact *contacs[], int length) {
    for (int i = 0; i < length; i++) {
        if (contacs[i] == NULL) continue;
        PrintContact(contacs[i]);
        printf("\n");
    }
}

void RemoveContact(Contact *contact) {

}

void AddContact(Contact *contacs[], int length) {

}

void FindContact(Contact *contacs[], int length) {

}