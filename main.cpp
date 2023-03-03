#include <iostream>

using namespace std;

int main()
{
    int jumlah, jam, total, menu;
    string nama [10],tanggal [10];
    int lama [10], i,j;


    cout << "==================" << endl;
    cout << "PROGRAM RENTAL PS3" << endl;
    cout << "==================" << endl;

    cout << "Masukkan Jumlah Perental :" << endl;
    cin >> jumlah;
    for(i=0; i<jumlah; i++){
    cout << endl;
    cout << "Masukkan Nama : ";
    cin >> nama[i];
    cout << "Masukkan Lama Rental : ";
    cin >> lama[i];
    cout << "Masukkan Tanggal Rental (dd/mm/yy) : ";
    cin >> tanggal[i];
    cout << endl;

    cout << "#1 Lihat daftar perental" <<endl;
    cout << "#2 Keluar" <<endl;
    cout << "Pilih menu (1 atau 2) : ";
    cin >> menu;
    if(menu == 1) {
        for (j=0; j<jumlah; j++) {
            cout << "Nama Perental : "<<nama[j]<<endl;
            cout << "Lama Perental : "<<lama[j]<<" jam"<<endl;
            cout << "Tanggal Rental : "<<tanggal[j]<<endl;
            total= 10000*lama[j];
            cout << "Biaya Rental :"<<total<<endl;
            cout << "----------------------------------"<<endl;
        }
    }
    else if(menu == 2) {
        exit(0);
    }
    else
        cout << "Menu tidak ada! Mohon pilih menu dengan benar";

    }

    return 0;
}
