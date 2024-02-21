#ifndef CONTACTS_H
#define CONTACTS_H

struct contactStruct
{
    char firstName[30];
    char lastName[50];
    char phoneNumber[10];
};

typedef struct contactStruct contact;

void PrintContact();
void PrintAllContacts();
void AddContact();
void RemoveContact();
void FindContact();

#endif //CONTACTS_H