#include <iostream>
using namespace std;

void transformArray(int* arr, int size) {
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        *ptr= -1;
    }
}

void printArray(int* arr, int size) {
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {2, 5, 566, 3};
    int size = sizeof(array) / sizeof(array[0]);

    transformArray(array, size);
    printArray(array, size);

    return 0;
}
