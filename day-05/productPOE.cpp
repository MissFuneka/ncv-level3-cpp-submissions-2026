#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

// Product class declaration
class Product
{
private:
    // characteristics of the class
    string proCode;
    int QuantityStock;
    string proName;
    double cost;

public:

    Product(); // Default constructor
    void setProduct(string code, string name,double pr, int quantity); //setter

    //getters
    double getcost();
    int getQuantityStock();
    string getproCode();
    string getproName();

};

Product::Product()
{
    // Default constructor, initialise everything to null
    proCode = "";
    proName = "";
    cost = 0.0;
    QuantityStock = 0;
}

// Setter method with validation
void Product::setProduct(string code, string name,
                         double pr, int quantity)
{
    proCode = code;

    // Validate product name - setter guarding the data
    if (name != "")
    {
        proName = name;
    }
    else
    {
        proName = "Unknown";
        cout << "Invalid product name!" << endl;
    }

    // Validate cost
    if (pr >= 0)
    {
        cost = pr;
    }
    else
    {
        cost = 0.0;
        cout << "Invalid cost! cost set to 0." << endl;
    }

    // Validate quantity
    if (quantity >= 0)
    {
        QuantityStock = quantity;
    }
    else
    {
        QuantityStock = 0;
        cout << "Invalid quantity! Quantity set to 0." << endl;
    }
}


string Product::getproCode()
{
    return proCode; // Getter for product code
}


string Product::getproName()
{
    return proName; // Getter for product name
}


double Product::getcost()
{
    return cost; // Getter for cost
}


int Product::getQuantityStock()
{
    return QuantityStock; // Getter for quantity in stock
}

// Function to display product details
void displayProduct(Product p)
{
    cout << "Product Code: " << p.getproCode() << endl;
    cout << "Product Name: " << p.getproName() << endl;
    cout << "Price: R" << fixed << setprecision(2)<< p.getcost() << endl;
    cout << "Quantity in Stock: "<< p.getQuantityStock() << endl;
    cout<<""<<endl;
}


// Main function
int main()
{
    // Create two objects using the default constructor
    Product product1;
    Product product2;

    // Assign information to the first product
    product1.setProduct("M201", "Memory stick ", 32.23, 95);

    // Assign information to the second product
    product2.setProduct("M102", "Mouse pad", 19.58, 50);

    // Display the two products
    cout << "PRODUCT 1:";
    displayProduct(product1);


    cout << "PRODUCT 2:";
    displayProduct(product2);

    _getch();
    return 0;
}
