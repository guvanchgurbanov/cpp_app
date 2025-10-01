    #include <iostream>
    using namespace std;
    int main() {

        int a,b;
        cout << "1nji sany giriz: " ;
        cin >> a;
        cout << "2nji sany giriz: ";
        cin >> b;


        if ( a > b ) {
            int temp = a;
            a = b;
            b = temp;
        }

        cout << a << ", " << b << endl;

        return 0 ;

}