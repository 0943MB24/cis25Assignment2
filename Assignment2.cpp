#include <iostream>
#include <string>
using namespace std;

int main() {
	string itemName;
	int quantity;
	float cost;

	std::cout << "Enter Item Name: ";
	std::getline(std::cin, itemName);
	std::cout << "Enter Quantity: ";
	std::cin >> quantity;
	std::cout << "Enter cost: ";
	std::cin >> cost;

	std::cout << "\nTotal cost for " << itemName << ": $" << (quantity * cost);
	cout << ("\n");
	return 0;
}