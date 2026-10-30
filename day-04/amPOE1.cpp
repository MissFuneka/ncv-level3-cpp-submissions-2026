/*this program prompts user for two numbers. Takes the
two numbers does +,-,*,/ operations on them*/
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<iomanip>


using namespace std;

void getValue(int &value1, int &value2);
void displaySum(int num1,int num2);
void displayDiff(int num1,int num2);
void displayProd(int num1,int num2);
float displayQuoti(int num1,int num2);


int main()
{
    //initialise the variables
    int number1 = 0;
    int number2 = 0;

    // call the getValue function
    getValue(number1, number2);

    // calling all operation functions
    displaySum(number1,number2);
    displayDiff(number1,number2);
    displayProd(number1,number2);
    cout<<fixed<<setprecision(2);
    displayQuoti(number1,number2);
    //cout<<" The sum is  ";
    return 0;
}

void getValue(int &num1, int &num2)
{
    cout << "Enter the first number: ";
    cin>> num1;
    cout << "Enter the second number: ";
    cin>> num2;
     cout<<""<<endl;
}

void displaySum(int num1,int num2)
{
    cout<<"The sum is: " <<num1 + num2<<endl;

}
void displayDiff(int num1,int num2)
{
    cout<<"The difference is: " <<num1 - num2<<endl;
}
void displayProd(int num1,int num2)
{
    cout<<"The product is: " <<num1 * num2<<endl;
}

float displayQuoti(int num1,int num2)
{
    cout<<"The quotient is: " <<static_cast<float>(num1)/ num2<<endl;
}



