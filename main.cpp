#include <iostream>
#include <vector>
#include "PhoneBook.h"
#include "Contact.h"

using namespace std;


int main() {

    Contact contact1("David", "Margvelashvili");
    contact1.HomeNumber("290000");
    contact1.MobileNumber("597292828");
    contact1.WorkNumber("+995032222222");
    contact1.AdditionalInfo("David is a highly qualified professional");

//    Contact contact2("Jemal", "Bagashvili");
//    contact2.HomeNumber("892233");
//
//    Contact contact3("Jemal", "Bagashvili");
//    contact2.HomeNumber("892222233");




   for(auto info : contact1.Show())
       cout << info << endl;

    return 0;
}