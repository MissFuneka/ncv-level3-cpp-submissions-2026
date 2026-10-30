#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//prototypes
void getNumbers (int num[], int sz);
void displayNumbers(int num[], int sz);
int evenNumber(int num[], int sz);
void showOdd(int num[],int sz);
void ascendingNumbers(int num[],int sz);
void showAscending(int num[],int sz);

//global variable
const int siz = 5;

int main()
{
    //initialise the arraay
    int num[siz];

    //fecth the values for the functions in the main
    getNumbers(num, siz);

    //Display even numbers and say how many they are
    cout<<"The number of even numbers: "<<evenNumber(num,siz)<<endl;

    //display the odds numbers
    showOdd(num,siz);
    cout<<""<<endl;

    //display sorting numbers
    ascendingNumbers(num,siz);
    showAscending(num,siz);

    return 0;
}

void getNumbers (int num[], int sz)
{
     for(int x = 0; x<sz; x++)
    {
        cout<<"Enter the number "<<x+1 <<":";

        cin>> num[x];
    }
    cout<<""<<endl;
}

void displayNumbers(int num[], int sz)
{
    for(int x = 0; x<sz; x++)
    {
       cout<<num[x]<<endl;
    }
}

int evenNumber(int num[], int sz)
{
    int counter =0;
    cout<<"The even numbers are: "<<endl;
    for(int x = 0; x < sz; x++)
    {

      if(num[x] % 2==0)
      {

        cout<<num[x]<<" ";
        counter = counter +1;
      }

    }
     cout<<""<<endl;
    return counter;

}

void showOdd(int num[],int sz)
{
    cout<<""<<endl;
     cout<<"The odd numbers are: "<<endl;
    for(int x = 0; x<sz; x++)
    {
        if(num[x]%2 !=0)
        {
        cout<<num[x]<<" ";
        }
     }
     cout<<endl;
}

void ascendingNumbers(int num[],int sz)
 {
    for(int x=0; x<sz; x++)
    {
        for( int y = 0; y<sz-1; y++)
        {
            if(num[y]>num[y+1])
            {
                int store = num[y];
                num[y] = num[y+1];
                num[y+1]= store;
            }
        }
    }
 }
 void showAscending(int num[],int sz)
{

    cout<<"The ascending numbers: "<<endl;
    for(int x = 0; x<sz; x++)
    {
        cout<<num[x]<<" ";

    }
     cout<<endl;
}



