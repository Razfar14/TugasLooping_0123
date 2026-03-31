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
    
    // Angka 2 adalah bilangan prima terkecil, jadi kita mulai pengecekan dari 2
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
    
    // Cek jika angka adalah 0 atau 1, yang merupakan bilangan Fibonacci
    if (angka == a || angka == b) return true;
   
    // Menghasilkan bilangan Fibonacci hingga mencapai atau melewati angka yang dimasukkan
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
  
    while (true) {
        tampilkanMenu();
        cin >> pilihan;

        if (pilihan == 9) {
            cout << "Terima kasih! Program selesai." << endl;
            break; 
        }

        
        switch (pilihan) {
            case 1:
                inputAngka();
                tampilkanHasil("Prima", cekPrima(n));
                break;
            case 2:
                inputAngka();
                tampilkanHasil("Fibonacci", cekFibonacci(n));
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    }

    return 0;
}