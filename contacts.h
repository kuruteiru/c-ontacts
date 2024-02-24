#ifndef CONTACTS_H
#define CONTACTS_H

struct ContactStruct{ char firstName[30], lastName[50], phoneNumber[10]; }; 
typedef struct ContactStruct Contact;

void PrintContact(Contact *contact);
void PrintAllContacts(Contact *contacs[], int length);
void RemoveContact(Contact *contact);
void AddContact(Contact *contacs[], int length);
void FindContact(Contact *contacs[], int length);

#endif //CONTACTS_H