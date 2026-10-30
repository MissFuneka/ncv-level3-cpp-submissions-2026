#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

// Class declaration
class Product
{
private:
    // Private data members
    string prodCode;
    string prodName;
    double cost;
    int quantityInStock;

public:

    Product(); // Default constructor
    void setProduct(string pcode, string pname,double prices, int qty); // Setter method


    string getProductCode(); // Getters
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};

Product::Product()
{

// Default constructor
    prodCode = "";
    prodName = "";
    cost = 0.0;
    quantityInStock = 0;
}

// Setter method with validation
void Product::setProduct(string pcode, string pname,double pric, int qty)
{
    prodCode = pcode;

    if (pname != "")
    {
        prodName = pname;
    }
    else
    {
        prodName = "Unknown";
        cout << "Invalid product name!" << endl;
    }


    if (pric >= 0)
    {
        cost = pric;
    }
    else
    {
        cost = 0;
        cout << "Price cannot be to 0" << endl;
    }

    // Validate quantity
    if (qty >= 0)
    {
        quantityInStock = qty;
    }
    else
    {
        quantityInStock = 0;
        cout << "Invalid quantity! Quantity set to 0." << endl;
    }
}

// Getter for product code
string Product::getProductCode()
{
    return prodCode;
}

// Getter for product name
string Product::getProductName()
{
    return prodName;
}

// Getter for price
double Product::getPrice()
{
    return cost;
}

// Getter for quantity in stock
int Product::getQuantityInStock()
{
    return quantityInStock;
}


void GetProductData(Product &p)
{
    //Get product chacteristics
    string code, name;
    double cost;
    int quantity;

    cout << "Enter product name: ";
    cin>>name;
    cout<<""<<endl;
    cout << "Enter product code: ";
    cin >> code;
     cout<<""<<endl;
    cout << "Enter product cost: R";
    cin >> cost;
    cout<<""<<endl;
    cout << "Enter quantity in stock: ";
    cin >> quantity;
    p.setProduct(code, name, cost, quantity);


}


void DisplayProduct(Product &p)
{
   // Display product data
    cout << "Product Code:" << p.getProductCode() << endl;
    cout << "Product Name:" << p.getProductName() << endl;

    cout << "Price:       R"<< fixed << setprecision(2)<< p.getPrice() << endl;

    cout << "Quantity in Stock: "<< p.getQuantityInStock() << endl;
}


void prodCompare(Product &p1, Product &p2)
{
    //get the product names
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    //compare the whole name
   if (name1== name2)
    {
        cout <<"ERROR:PRODUCTS CANNOT HAVE SAME NAME"<< endl;
    }
    // Compare the first characters
    else if (name1[0] == name2[0])
    {
        cout <<"Both product names start with the same character."<< endl;
    }
    else
    {
        cout << "The product names start with different characters."<< endl;
    }

    string code1 = p1.getProductCode();
    string code2 = p2.getProductCode();

    //compare the whole name
   if (code1== code2)
    {
        cout<<""<<endl;
        cout <<"ERROR:PRODUCTS CANNOT HAVE SAME CODE"<< endl;
        cout<<""<<endl;
    }
}

// Main function
int main()
{
    // Two Product objects
    Product product1;
    Product product2;

    // Get information for product 1
    cout << "ENTER PRODUCT 1" << endl;
    GetProductData(product1);
    cout<<""<<endl;

    // Get information for product 2
    cout << "ENTER PRODUCT 2 " << endl;
    GetProductData(product2);
    cout<<""<<endl;


    // Display Product 1
    cout << "PRODUCT 1 DETAILS:" << endl;
    DisplayProduct(product1);
    cout<<""<<endl;

    // Display Product 2
    cout << "PRODUCT 2 DETAILS:" << endl;
    DisplayProduct(product2);
    cout<<""<<endl;

    // Compare Product Names and Codes
    cout << "PRODUCT COMPARISON:"<< endl;
    prodCompare(product1, product2);
    cout<<""<<endl;

    return 0;
}
