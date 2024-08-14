#include <iostream>
using namespace std;

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {26,58,93,97,56};
    int size = sizeof(array) / sizeof(array[0]);

    printArray(array, size);

    return 0;
}
