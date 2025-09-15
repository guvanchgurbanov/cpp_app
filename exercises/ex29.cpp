//
// Created by Guga on 14-Sep-25.
#include <iostream>

using namespace std;

int main() {
    cout << "Gonuburchlygyn taraplaryny giriz: " << endl;
    int a,b ;
    cin >> a >> b;

    cout << "Kwadratyn tarapyny giriz: " << endl;
    int c;
    cin >> c;

    int gonuburclygynMeydany = a * b;
    int inedordulinMeydany = c * c;

    if (gonuburclygynMeydany < inedordulinMeydany) {
        cout << "Bu inedordul gunuburclyga syganogahou!!! Name kellan agyryamy?" << endl;
    } else {
        cout << "Ulanylman galan bolegi: " << gonuburclygynMeydany % inedordulinMeydany  << endl;
    }


    return 0;
}