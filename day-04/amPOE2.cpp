/* the program randomises 2 numbers and does operations on the them
via operations functions but calling them using switch function in the main */



#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
#include<iomanip>


using namespace std;

//prototypes
int calcSum(int num1,int num2);
int calcSubtract(int num1,int num2);
int calcMultiply(int num1,int num2);
float calcDivision(int num1,int num2);


int main()
{
    //initialising the values
    int val1 = 0;
    int val2 = 0;

    //randomized two numbers adn display them
    srand(time(0));
    val1 = rand() % 50 +1;
    val2 = rand() % 50 +1;

    cout<<"The first number is: "<< val1<<endl;
    cout<<"The second number is "<<val2<<endl;
    cout<<""<<endl;


    // declare the char you will use in the switch
    char choice;
    cout<<"Choose the operation: +, -, *, /, "<<endl;
    cin>>choice;


    switch(choice)
    {
    case '+':
        cout<<"You chose addition"<<endl;
        cout<<"The sum is "<<calcSum(val1,val2)<<endl;
        break;
    case '*':
        cout<<"You chose multiplication "<<endl;
        cout<<"The product "<<calcMultiply(val1,val2)<<endl;
        break;
    case '-':
        cout<<"You chose subtraction "<<endl;
        cout<<"The difference is "<<calcSubtract(val1,val2)<<endl;
        break;
    case'/':
        cout<<"You chose division"<<endl;
        cout<<"The quotient is "<<fixed<<setprecision(2)<<calcDivision(val1,val2)<<endl;
        break;
    default: cout<<"Invalid choice";
    }

    return 0;
}


int calcSum(int num1,int num2)
{   //returns addition of two numbers
    return num1 + num2;

}
int calcSubtract(int num1,int num2)
{
    //returns subtraction of two numbers
    return num1 - num2;
}
int calcMultiply(int num1,int num2)
{
     //returns product of two numbers
     return num1 * num2;
}

float calcDivision(int num1,int num2)
{
    //returns division of two numbers
    return static_cast<float>(num1)/ num2;
}



