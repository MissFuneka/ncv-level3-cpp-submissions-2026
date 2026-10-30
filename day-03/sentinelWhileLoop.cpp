/* Program that uses a sentinel to terminate a program*/
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num;
    int counter = 1;
    int sum =0;
    double aver ;

    cout<<"Please enter number or -1 to terminate"<<endl;
    cout<<"Enter a number  "<<counter<<":";
    cin >>num;

    while(num != -1)
    {

    counter =counter +1;
    sum =sum +num;
    cout<<"Enter a number  "<<counter<<":";
    cin>> num;

    }

    cout<<fixed<<setprecision(2);
    aver = sum/static_cast<double>(counter-1);


    cout<<" "<<endl;
    cout<<(counter-1)<<" numbers were entered"<<endl;
    cout<<" "<<endl;
    cout<<"The final sum "<< sum<<endl;
    cout<<" "<<endl;
    cout<<"The averageis  "<< aver;
    cout<<" "<<endl;

    return 0;

}

