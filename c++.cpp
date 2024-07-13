#include <iostream>
using namespace std;

int main() {
    const int size = 5; // Ukuran array
    int arr[size] = {1, 2, 3, 4, 5}; // Inisialisasi array
    int *ptr = arr; // Pointer yang menunjuk ke awal array

    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // Membalikkan array
    for (int i = 0; i < size / 2; ++i) {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + size - 1 - i);
        *(ptr + size - 1 - i) = temp;
    }

    cout << "Array setelah dibalik: ";
    for (int i = 0; i < size; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
    