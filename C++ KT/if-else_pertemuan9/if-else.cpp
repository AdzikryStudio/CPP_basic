#include <iostream>

using namespace std;

int main() {
    // Pengkodisian = if or else
    int a;

    cout << "Masukkan angka: ";
    cin >> a;

    // if statement = true 
    // condition = boolean
    if (a == 500) {
        cout << "Nilai yang anda masukkan benar" << endl;
    } else if (a == 900) { // Menggunakan else if untuk kondisi lain
        cout << "Nilai yang anda masukkan salah" << endl;
    } else {
        cout << "Nilai yang anda masukkan tidak dikenali" << endl; // Menangani kasus lain
    }

    cout << "Silahkan tutup" << endl;
    return 0;
}
