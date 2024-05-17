#ifndef CONTACTS_H
#define CONTACTS_H

struct ContactStruct{ char firstName[30], lastName[50], phoneNumber[10]; }; 
typedef struct ContactStruct Contact;

void printContact(Contact *contact);
void printAllContacts(Contact *contacts[], size_t length);
void removeContact(Contact *contact);
void addContact(Contact *contacts[], size_t length);
Contact* findContact(Contact *contacts[], size_t length, char *name);

#endif //CONTACTS_H