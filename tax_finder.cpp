#include <iostream>
using namespace std;

int main(){
    int sales = 95000;
    int state_tax = 4;
    int county_tax = 2;

    double total_tax = state_tax + county_tax;

    double tax = (total_tax/100)*sales;
    int balance = sales-tax;

    cout << "Total sales = " << sales << endl
         << "Total tax paid = " << tax << endl
         << "Balance after tax = " << balance;
}