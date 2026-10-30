#include <iostream>
#include <iomanip>
 using namespace std;

 int main()
 {
    //
    string message;
    string name;
    char gender;
    cout<<"Enter your name ";
    cin>>name;

    cout<<"Enter your gender ";
    cin>>gender;
    cout<<""<<endl;

    switch(gender)
    {
        case 'F':
        case 'f':
        cout<<name<<"";
        message= "You are female";
        break;
        case 'M':
        case 'm':
        cout<<name<<"";
        message = "You are male";
        break;

        // default is not compulsory
        default:
        message = "Invalid code";
        break;
  }
    cout<<""<<endl;
    cout << message;
    return 0;
 }
