#include <iostream>
using namespace std;

class shop
{
    int itemid[10];
    int itemprice[10];
    int counter;

public:
    void incounter(void) { counter = 0; }
    void setPrice(void);
    void getPrice(void);
    void getPriceById(void);
};

void shop::setPrice()
{
    int n;
    cout << "Enter the number of products to be added: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter ID for product " << counter + 1 << ":";
        cin >> itemid[counter];
        cout << "Enter price for product ID " << itemid[counter] << ":";
        cin >> itemprice[counter];
        counter++;
    }
}

void shop::getPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of product with ID " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

void shop::getPriceById()
{
    int id;
    cout << "Enter the product ID to find its price: ";
    cin >> id;

    for (int i = 0; i < counter; i++)
    {
        if (itemid[i] == id)
        {
            cout << "The price of product with ID " << id << " is " << itemprice[i] << endl;
            return;
        }
    }
    cout << "Product with ID " << id << " not found." << endl;
}

int main()
{
    shop invent;
    invent.setPrice();
    invent.incounter();
    invent.getPrice();

    char choice;
    do
    {
        invent.getPriceById();
        cout << "Do you want to check another product? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
