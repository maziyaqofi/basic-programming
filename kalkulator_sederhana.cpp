#include <iostream>

using namespace std;

int main()
{
    //Membuat kalkulator sederhana
    //Maziya Ats Tsaqofi
    // 18 November 2023

    float angka1;
    float angka2;

    cout << "masukan angka1: ";
    cin >> angka1;

    cout << "masukan angka2: ";
    cin >> angka2;

    cout << "Hasil Penjumlahan " << angka1 << "+" <<angka2 << "=" << angka1 + angka2 <<endl;
    cout << "Hasil Pengurangan " << angka1 << "-" <<angka2 << "=" << angka1 - angka2 <<endl;
    cout << "Hasil Perkalian " << angka1 << "*" <<angka2 << "=" << angka1 * angka2 <<endl;
    cout << "Hasil Pembagian " << angka1 << "/" <<angka2 << "=" << angka1 / angka2 <<endl;

    return 0;
}
