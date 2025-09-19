 #include <iostream>

using namespace std;
int main() {
    int n ;
    cout << "1- 2+ 3* 4/ aralykda san girzir:" ;
    cin >> n ;

    if  (n < 1 || n > 4) {
        cout << "Nadogry Girish" << endl;
        return  1 ;
    }
    int a,b;
    cout << "birinji sifir girzir:";
    cin >>a ;

    cout << "ikinji sifir girzir:";
    cin >>b;

    int Jogaby ;

    switch (n) {
        case 1:
            Jogaby = a+b ;
            break;

        case 2:
            Jogaby = a-b;
            break;

        case 3:
            Jogaby= a*b;
            break;

        case 4:
            Jogaby= a/b;
            break;



    }
    cout << "Jogaby: "<<Jogaby << endl;

    return 0 ;
}