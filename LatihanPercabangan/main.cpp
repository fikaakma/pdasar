#include <iostream>

using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan Nilai Siswa : "; cin >> nilai;

    // menggunakan percabangan if/esle/if

    //Untuk nilai 0-50
    if ((nilai >= 0) &&(nilai<=60)) {
    cout << "Nilai Siswa E" << endl;
    }

      //Untuk nilai 51-60
    if ((nilai >= 61) &&(nilai<=70)) {
    cout << "Nilai Siswa D" << endl;
    }

     //Untuk nilai 61-70
    if ((nilai >= 71) &&(nilai<=80)) {
    cout << "Nilai Siswa C" << endl;
    }

     //Untuk nilai 71-80
    if ((nilai >= 81) &&(nilai<=90)) {
    cout << "Nilai Siswa B" << endl;
    }

     //Untuk nilai 81-100
    if ((nilai >= 91) &&(nilai<=100)) {
    cout << "Nilai Siswa A" << endl;
    }

    //Inputan salah
    else{
        cout << "Inputan anda salah";
    }

    return 0;
}
