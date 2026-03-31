#include <iostream>
using namespace std;


int n, pilihan;


void tampilkanMenu() {
    cout << "\n========== MENU UTAMA ==========" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "9. Keluar" << endl;
    cout << "--------------------------------" << endl;
    cout << "Masukkan pilihan Anda: ";
}


void inputAngka() {
    cout << "Masukkan bilangan yang ingin dicek: ";
    cin >> n;
}


bool cekPrima(int angka) {
    if (angka <= 1) return false;
    int i = 2;
    
    bool prima = true;
    while (i * i <= angka) {
        if (angka % i == 0) {
            prima = false;
            break;
        }
        i++;
    }
    return prima;
}







        
