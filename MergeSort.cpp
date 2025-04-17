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

    // COMMIT 7: Mengimplementasikan proses penggabungan array di mergeSort
    int i = low;     // index untuk bagian kiri
    int j = mid + 1; // index untuk bagian kanan
    int k = low;     // index untuk array sementara

    while (i <= mid && j <= high) // bandingkan elemen kiri dan kanan
    {
        if (arr[i] <= arr[j]) // jika elemen kiri lebih kecil
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++; // lanjutkan ke elemen berikutnya
    }

    // COMMIT 8: Menggabungkan sisa elemen array yang belum terurut
    while (j <= high) // jika masih ada elemen di bagian kanan
    {
        B[k] = arr[j]; // salin elemen kanan
        j++;
        k++;
    }

    while (i <= mid) // jika masih ada elemen di bagian kiri
    {
        B[k] = arr[i]; // salin elemen kiri
        i++;
        k++;
    }
}