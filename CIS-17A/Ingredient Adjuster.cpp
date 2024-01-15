//Author: Joash Gem Marcos
#include <iostream>
using namespace std;

const float SUGAR = 1.5;
const float BUTTER = 1.0;
const float FLOUR = 2.75;
const float COOKIES_PER_RECIPE = 48;

int main() {
	int amount; //Variable to hold user input
	float sugarAmount, butterAmount, flourAmount; //Variable to hold output/results

	cout << "How many cookies do you need?" << endl;
	cin >> amount;

	//Calculating process for each ingredient
	sugarAmount = amount / COOKIES_PER_RECIPE * SUGAR;
	butterAmount = amount / COOKIES_PER_RECIPE * BUTTER;
	flourAmount = amount / COOKIES_PER_RECIPE * FLOUR;

	//Output 
	//Extra spaces for formatting reasons
	cout << "\nFor " << amount << " cookies, you will need:\n" << sugarAmount << " cups of sugar\n"
		<< butterAmount << " cups of butter\n" << flourAmount << " cups of flour" << endl;
}