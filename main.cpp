#include <iostream>

using namespace std;

int main() {
    string street;
    cout <<"street";
    getline (cin,street);

    string city;
     cout<< "City: ";
    getline(cin,city);


    string state;
    cout<<"State:";
    getline(cin,state);


    string postalCode;
    cout<<"Postal Code: ";
    getline(cin,postalCode);

    cout<<street<< endl
        << city << "," <<state<< "," <<postalCode <<endl;

    return 0;

}