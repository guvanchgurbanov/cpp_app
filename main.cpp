    #include <iostream>
    using namespace std;
    int main() {

        int a,b;
        cout << "1nji sany giriz: " ;
        cin >> a;
        cout << "2nji sany giriz: ";
        cin >> b;

        max = a;

        if (b > a) {
            b = max;
        } else {
            a = 0;
            b = 0;
        }
        cout << a << " , " << b << endl;

        return 0 ;

}