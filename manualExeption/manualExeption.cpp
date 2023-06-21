#include <iostream>
using namespace std;

int main(){
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // lempar value untuk di eksekusi oleh catch
        cout << "Pernyataan todak di eksekusi" << endl;
    }
    catch (int a) {
        //jika throw int
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        //selain int
        cout << "Default pengecualian dieksekusi" << endl;
    }
    return 0;
}