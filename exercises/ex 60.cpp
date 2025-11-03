//
// Created by Guga on 01-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int ox,oy;
    cout << " X kardinatany giriz: ";
    cin >> ox;
    cout << " Y kordinatany giriz: ";
    cin >> oy;

    if (ox > 0 && oy > 0) {
        cout <<"1-njy caryek! " ;
    } else if (ox > 0 && oy < 0) {
        cout <<"4-nji caryek! ";
    }else if (ox <0 && oy > 0) {
        cout <<"2-nji caryek! ";
    }else if(ox <0 && oy <0){
        cout <<"3-nji caryek! ";
    }

    return 0;
}