#include <iostream>

using namespace std;

int main()
{
    int a, t, r ;
    float LuasSegitiga, LuasLingkaran;
    float Phi = 3.14;

    cout << "============================" << endl;
    cout << "APLIKASI PENGHITUNG SEGITIGA" << endl;
    cout << "============================" << endl;

    cout << " Masukan Alas Segitiga : ";
    cin >> a;
    cout << " Input Tinggi Segitiga : ";
    cin >> t;
    cout << endl;

    cout << "=============================" << endl;
    cout << "APLIKASI PENGHITUNG LINGKARAN" << endl;
    cout << "=============================" << endl;

    LuasSegitiga = 0.5 * a * t;
    cout << "Luas Segitiga = " << LuasSegitiga << endl;

    float luaslingkaran, phi = 3.14;
    cout << "Masukan Jari-jari : ";
    cin >> r;

    LuasLingkaran = Phi * r * r;

    cout << "Luas Lingkaran = " << LuasLingkaran << endl;

    return 0;
}
