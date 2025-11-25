#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;
int main()
{
    string item;
    double price;
    int Quantity;

	cout << "Enter item name: ";
	getline(cin, item); 
	cout << "Enter item price: ";
	cin >> price;
	cout << "Enter item quantity: ";
	cin >> Quantity;
	cout << fixed << setprecision(2);
	cout << endl;
	cout << "----------------Receipt-----------------" << endl;
	cout << "Item: " << item << endl; //ชื่อสินค้า
	cout << "Price: $" << price << endl;//ราคาสินค้า 
	cout << "Quantity: " << Quantity << endl;//	จำนวนสินค้า
	cout << "Total cost: $" << price * Quantity << endl; //ราคารวม
	cout << "----------------------------------------" << endl;
    return 0;

}
