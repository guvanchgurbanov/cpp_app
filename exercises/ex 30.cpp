//
// Created by Guga on 17-Sep-25.
//using namespace std;

int main() {
    int year;
    cout << "Enter Year";
    cin >> year;

    int era = year % 100 == 0 ? year / 100 : year / 100 + 1 ;

    cout << " era:" << era << endl;
    return 0 ;
}