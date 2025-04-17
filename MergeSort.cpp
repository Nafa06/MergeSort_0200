// COMMIT 1: Membuat variabel dan menyiapkan array
#include <iostream>
using namespace std;

// create main array & temporary array
int arr[20], B[20];
// n is array input size
int n;

// COMMIT 2: Membuat fungsi input
void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;
    }
}