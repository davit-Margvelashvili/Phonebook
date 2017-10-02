//
// Created by david on 10/1/17.
//

#ifndef HOMEWORK_3_CONTACT_H
#define HOMEWORK_3_CONTACT_H

#include <iostream>
#include <vector>

class Contact {

private:
    std::string* fullName;

    std::string* mobileNumber;
    std::string* homeNumber;
    std::string* workNumber;

    std::string* additionalInfo;


public:
    Contact();
    Contact(std::string, std::string);
    ~Contact();

// Setters
    inline void Name(std::string fName, std::string lName) {*fullName = (fName + " " + lName);}

    inline void MobileNumber(std::string mNumber) {*mobileNumber = mNumber;}
    inline void HomeNumber(std::string hNumber) {*homeNumber = hNumber;}
    inline void WorkNumber(std::string wNumber) {*workNumber = wNumber;}
    inline void AdditionalInfo(std::string info) {*additionalInfo = info;}

// Getters
    inline std::string Name() {return *fullName;}
    inline std::string MobileNumber() {return *mobileNumber;}
    inline std::string HomeNumber() {return *homeNumber;}
    inline std::string WorkNumber() {return *workNumber;}
    inline std::string AdditionalInfo() {return *additionalInfo;}

    std::vector<std::string> Show();

};


#endif //HOMEWORK_3_CONTACT_H
