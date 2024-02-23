#ifndef CONTACTS_H
#define CONTACTS_H

struct ContactStruct{ char firstname[30], lastname[50], phonenumber[10] }; 
typedef struct ContactStruct Contact;

void PrintContact(Contact *contact);
void PrintAllContacts(Contact *contac);
void RemoveContact(Contact *contact);
void AddContact(Contact *contacs[], int length);
void FindContact(Contact *contacs[], int length);

#endif //CONTACTS_H