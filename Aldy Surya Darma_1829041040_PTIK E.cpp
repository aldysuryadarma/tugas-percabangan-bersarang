#include <iostream>
#include <string>

using namespace std;

int main() {
    string status, asal;
    int belanja, totalbayar, diskonplus;
    
    cout << "Berapa Total Belanja Anda?" << endl;
    cin >> belanja;
    if (belanja > 1102019) {
        cout << "Anda Berhak Mendapatkan Diskon" << endl;
        cout << "Masukkan Alamat domisili anda : " << endl;
        cin >> asal;
        if (asal == "Makassar") {
            cout << "Status Anda?" << endl;
            cout << "1. Menikah Sudah Punya Anak" << endl;
            cout << "2. Menikah Belum Punya Anak " << endl;
            cout << "3. Belum Menikah tapi Memiliki Kartu Anggota" << endl;
            cout << "4. Tidak Punya Kartu Anggota" << endl;
            cout << "masukkan pilihan dengan angka :" << endl;
            cin >> status;
            if (status == "1") {
                totalbayar = belanja - belanja * 0.75;
                cout << "Yang Harus Anda Bayar" << endl;
                cout << totalbayar << endl;
                cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
            } else {
                if (status == "2") {
                    totalbayar = belanja - belanja * 0.5;
                    cout << "Yang Harus Anda Bayar" << endl;
                    cout << totalbayar << endl;
                    cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
                } else {
                    if (status == "3") {
                        totalbayar = belanja - belanja * 0.25;
                        cout << "Yang Harus Anda Bayar" << endl;
                        cout << totalbayar << endl;
                        cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
                    } else {
                        if (status == "4") {
                            totalbayar = belanja - belanja * 0.1;
                            cout << "Yang Harus Anda Bayar" << endl;
                            cout << totalbayar << endl;
                            cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
                        } else {
                            cout << "Tidak Ada Dalam Pilihan" << endl;
                        }
                    }
                }
            }
        } else {
            cout << "Status Anda?" << endl;
            cout << "1. Menikah Sudah Punya Anak" << endl;
            cout << "2. Menikah Belum Punya Anak " << endl;
            cout << "3. Belum Menikah tapi Memiliki Kartu Anggota" << endl;
            cout << "4. Tidak Punya Kartu Anggota" << endl;
            cout << "masukkan pilihan dengan angka :" << endl;
            cin >> status;
            if (status == "1") {
                totalbayar = belanja - belanja * 0.75;
                diskonplus = totalbayar - totalbayar * 0.1;
                cout << "Anda mendapatkan tambahan diskon sebesar 10%" << endl;
                cout << "Yang Harus Anda Bayar" << endl;
                cout << diskonplus << endl;
            } else {
                if (status == "2") {
                    totalbayar = belanja - belanja * 0.5;
                    diskonplus = totalbayar - totalbayar * 0.1;
                    cout << "Anda mendapatkan tambahan diskon sebesar 10%" << endl;
                    cout << "Yang Harus Anda Bayar" << endl;
                    cout << diskonplus << endl;
                } else {
                    if (status == "3") {
                        totalbayar = belanja - belanja * 0.25;
                        diskonplus = totalbayar - totalbayar * 0.1;
                        cout << "Anda mendapatkan tambahan diskon sebesar 10%" << endl;
                        cout << "Yang Harus Anda Bayar" << endl;
                        cout << diskonplus << endl;
                    } else {
                        if (status == "4") {
                            totalbayar = belanja - belanja * 0.1;
                            diskonplus = totalbayar - totalbayar * 0.1;
                            cout << "Anda mendapatkan tambahan diskon sebesar 10%" << endl;
                            cout << "Yang Harus Anda Bayar" << endl;
                            cout << diskonplus << endl;
                        } else {
                            cout << "Tidak Ada Dalam Pilihan" << endl;
                        }
                    }
                }
            }
        }
    } else {
        cout << "Anda Tidak Mendapatkan Diskon" << endl;
    }
    return 0;
}

