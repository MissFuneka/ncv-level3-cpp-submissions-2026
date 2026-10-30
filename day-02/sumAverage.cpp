//program allows us to enter 5 numbers between 1 and 50
#include<iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;
    double avg;
    int counter;

    cout<<"===Enter 5 numbers between 1 and 50==="<<endl;

    for(counter=1 ;counter <= 5; counter++)
    {
        //prompt user to enter numbers
        cout<<"Enter the number "<< counter<<" ";
        cin>>num;
        if(num >=1 && num<=50)
        {
         sum = sum + num;
        }
        else
        {
           cout<<"Enter numbers between 1 and 50"<<endl;
           counter--;
        }
    }



    cout<<""<<endl;
    cout<<"The final sum is "<<sum<<endl;
    cout<<""<<endl;
    //calculate the average of the numbers.
    avg= sum /(counter-1);
    cout<<"The average is "<< avg;

    cout<<""<<endl;
    return 0;
}
