// Program claculates the area of a circle
#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    int length;
    int breadth;


    // Calculate the area and perimeter?(circumference) of the circle
    cout<<"Circle: "<<endl;
    int raduis;
    cout << "Enter the raduis of the circle: ";
    cin>>raduis;

    const double pi = 3.14159265358979;
    double raduis_squared = pow(raduis,2);
    double area2 = pi* raduis_squared;
    double circumference = 2*pi*raduis;
    cout<<"The area of circle: "<<fixed<<setprecision(2)<< area2<<endl;
    cout<<"The circumference: " <<fixed<<setprecision(3)<< circumference<<endl;
    cout<<""<<endl;

    cout<<"Lets calculate the price of fencing your yard(Rectangular or square shape)"<<endl;
    cout<<""<<endl;
    cout<<"Calculate the dimensions of your yard: "<<endl;
    cout <<"Enter the length: ";
    cin>> length;
    cout <<"Enter the breadth: ";
    cin>> breadth;

    // Calculate the cost of a yard
    const float price = 23.4;
    int perimeter = 2*length + 2* breadth;
    float cost = price * perimeter;

    cout<<""<<endl;
    cout <<"The cost to fencing your yard is: R"<<cost<<endl;
    cout<<""<<endl;
    return 0;
}
