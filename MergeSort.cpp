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
        // COMMIT 3: Memberikan batasan pada array
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    // COMMIT 4: Menambahkan fungsi input nilai array
    cout << "\n-----------------------------" << endl;
    cout << "\nInputkan Isi element array" << endl;
    cout << "\n-----------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

// COMMIT 5: Membuat kerangka fungsi mergeSort
void mergeSort(int low, int high)
{
    if (low >= high) // step 1
    {
        return; // step 1.a
    }
    // COMMIT 6: Mengimplementasikan proses pembagian array di mergeSort
    int mid = (low + high) / 2; // step 2

    // step 3 - fungsi rekursi
    mergeSort(low, mid);      // step 3.a
    mergeSort(mid + 1, high); // step 3.b
    
}