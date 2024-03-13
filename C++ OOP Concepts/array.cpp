// Arrays Example
#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; } // initcounter is for initializing the counter to 0 for every object created
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void) // setprice is for asking the user to set the price of the item
{
    cout << "Enter the id of your item number " << counter + 1 << endl; // counter + 1 starts the item number from 1
    cin >> itemid[counter];
    cout << "Enter the price of your item" << endl;
    cin >> itemprice[counter];
    counter++; // counter is incremented to store the next item's id and price in the next index of the array
               // if it is not incremented then the next item's id and price will be stored in the same index of the array
}

void shop::displayprice(void) // displayprice is for displaying the price of the item
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{

    shop dukaan;
    dukaan.initcounter(); // counter is initialized to 0
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}