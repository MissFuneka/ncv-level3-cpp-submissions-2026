// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string gender ="";

    cout<<"Hello"<<endl;

    cout << "What is your name? ";
    getline(cin >> ws, name);
    cout << "What is your gender? ";
    getline(cin >> ws, gender);
    cout<<""<<endl;

    cout << name <<": ";
   // cout<<""<<endl;

    if (gender == "M" || gender == "m" )
        {

        cout <<"You are  Male" << endl;
        }
    else if (gender == "F"|| gender == "f" ) {

        cout <<"You are a lovely lady" << endl;
    }
    else
    {
     cout<<"Invalid Gender entered"<<endl;
    }
    return 0;
}
