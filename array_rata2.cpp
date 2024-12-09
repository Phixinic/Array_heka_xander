#include <iostream>

using namespace std;

int main() {
    int angka[5];
    int jumlah = 0;
    double rata_rata;

    cout << "Masukkan 5 angka: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> angka[i];
        jumlah += angka[i];
    }

    rata_rata = (double)jumlah / 5;

    cout << "Rata-rata dari 5 angka adalah: " << rata_rata << endl;

    return 0;
}
