//
// Created by Guga on 02-Oct-25.
//    #include <iostream>
    using namespace std;
int main() {

    int a,b;
    cout << "1nji sany giriz: " ;
    cin >> a;
    cout << "2nji sany giriz: ";
    cin >> b;


    if (a != b) {
        int sum = a + b;
        a = sum;
        b = sum;
    } else {
        a = 0;
        b = 0;
    }
    cout << a << " , " << b << endl;

    return 0 ;

}