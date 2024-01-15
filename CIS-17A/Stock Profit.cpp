//Author: Joash Gem Marcos
#include <iostream>
using namespace std;
/******************************************

         Function Prototypes Below

*******************************************/
//Funtion: stockProfit
//Definition: Gathers the 5 variables from the arguments into an equation. It returns a double value representing profit/loss
double stockProfit(double sharesNumber, double sharesSale, double commissionSale, double sharesPurchase, double commissionPurchase) {
    return ((sharesNumber * sharesSale) - commissionPurchase) - ((sharesNumber * sharesPurchase) + commissionPurchase);
}
/******************************************

            Main Program Below

*******************************************/
int main() {
    //Variables
    double NS, SP, SC, PP, PC; //NS = Number of Shares
                               //SP = Sale Price Per Share
                               //SC = Sale Commission Paid
                               //PP = Purchase Price Per Share
                               //PC = Purchase Commission Paid
                               
    //Input
    cout << "Enter Number of Shares: ";
    cin >> NS;

    cout << "Enter Sale Price Per Share: ";
    cin >> SP;

    cout << "Enter Sale Commission Paid: ";
    cin >> SC;

    cout << "Enter Purchase Price Per Share: ";
    cin >> PP;

    cout << "Enter Purchase Commission Paid: ";
    cin >> PC;

    //Output
    cout << "Total: " << stockProfit(NS, SP, SC, PP, PC);
}