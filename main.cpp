#include <iostream>
using namespace std;
int main() {

    double sales =95000;
    cout <<"Sales:$" <<sales<< endl;

    const double stateTaxRate =.04;
    double stateTax=sales * stateTaxRate;
    cout<<"State Tax:$"<<stateTax<<endl;

    double countyTaxRate =.02;
    double countytax=sales * countyTaxRate;
    cout<<"County Tax:$"<<countytax<<endl;

    double totalTax= stateTax+ countytax;
    cout<<"Total Tax:$"<<totalTax;

    return 0;
}