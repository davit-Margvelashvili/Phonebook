//
// Created by david on 10/1/17.
//

#ifndef HOMEWORK_3_PHONEBOOK_H
#define HOMEWORK_3_PHONEBOOK_H

#include <iostream>
#include <vector>
#include "Contact.h"

class PhoneBook {

private:
    std::vector<Contact> Book; //??????????

public:
    PhoneBook();

    void Add(Contact&);
    void Remove(Contact);
    std::vector<Contact> Search(std::string, std::string);

    std::vector<Contact> ShowAllContacts();

    void WriteInFile();
    void ReadFromFile();


};


#endif //HOMEWORK_3_PHONEBOOK_H
