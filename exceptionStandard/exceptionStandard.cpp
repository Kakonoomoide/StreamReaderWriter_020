#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main(){
    cout << "Awal Program" << endl;
    try {
        array<int, 3> data = { 3,5,7 };/*array dan datanya*/
        cout << data.at(5) << endl; /*enampilkan array*/
    }
    catch (exception& e) {
        cout << e.what() << endl;/*menampilkan eror dari try*/
    }
    cout << "Baris program terakhir" << endl;
    return 0;
}