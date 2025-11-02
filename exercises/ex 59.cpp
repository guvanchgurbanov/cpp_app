//
// Created by Guga on 26-Oct-25.
//#include <iostream>

using namespace std;

int main() {
    int ox,oy;
    cout << " A nokat girzir ";
    cin >> ox;
    cout << " B nokat girzir ";
    cin >> oy;

    if ( ox == 0  && oy == 0 ) {
        cout << " Jogaby " << 0;
    }else if ( ox != 0 && oy == 0 ){
        cout << " Jogaby " << 1;
    }else if ( ox == 0 && oy != 0 ){
        cout << " Jogaby " << 2;
    }else {
        cout << " Jogaby " << 3;
    }

    return 0;
}
