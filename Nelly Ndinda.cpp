#include <iostream>
#include <string>
using namespace std;

class roommate {
public: 
    string name;
    int age;
    string hobby;
    string gender;
    string skincolor;
    string job;
};
int main() {
    roommate roommate1;
    
    roommate1.name = "Cynthia Mueni";
    roommate1.age = 26;
    roommate1.hobby = "cooking,horse riding, dancing";
    roommate1.gender = "Female";
    roommate1.skincolor = "lightskin";
    cout<< "Name: " <<roommate1.name << endl;
    cout << "Age: " <<roommate1.age << endl;
    cout << "Hobby: " << roommate1.hobby << endl;
    cout << "gender:" << roommate1.gender << endl;
    cout << "skincolor:" << roommate1.skincolor << endl;     
    cout << endl;
     
     return 0;
};