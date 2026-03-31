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


bool cekFibonacci(int angka) {
    int a = 0;
    int b = 1;
    
  
    if (angka == a || angka == b) return true;
    
    int temp = 0;
    while (temp < angka) {
        temp = a + b;
        a = b;
        b = temp;
    }
    
    return (temp == angka);
}


void tampilkanHasil(string jenis, bool hasil) {
    if (hasil) {
        cout << "=> " << n << " ADALAH bilangan " << jenis << "." << endl;
    } 
    else {
        cout << "=> " << n << " BUKAN bilangan " << jenis << "." << endl;
    }
}

int main() {
  

        
