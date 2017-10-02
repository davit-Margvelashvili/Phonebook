//
// Created by david on 10/1/17.
//

#include "Contact.h"

using namespace std;


Contact::Contact() {
    fullName = new string;

    mobileNumber = new string;
    homeNumber = new string;
    workNumber = new string;

    additionalInfo = new string;
}

Contact::Contact(string fName, string lName) {
    fullName = new string(fName + " " + lName);

    mobileNumber = new string;
    homeNumber = new string;
    workNumber = new string;

    additionalInfo = new string;
}

Contact::~Contact() {

    delete fullName;

    delete mobileNumber;
    delete homeNumber;
    delete workNumber;

    delete additionalInfo;

}

vector<string> Contact::Show() {
    vector<string> contactInfo;

    contactInfo.push_back("Name:             " + *fullName);
    contactInfo.push_back("Mobile Number:    " + *mobileNumber);
    contactInfo.push_back("Home Number:      " + *homeNumber);
    contactInfo.push_back("Work Number:      " + *workNumber);
    contactInfo.push_back("Additional Info:  " + *additionalInfo);

    return contactInfo;
}
