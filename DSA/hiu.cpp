#include <iostream>
using namespace std;

void separateZerosAndOnes(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        // Move the left pointer until we find a 1
        while (arr[left] == 0 && left < right) {
            left++;
        }

        // Move the right pointer until we find a 0
        while (arr[right] == 1 && left < right) {
            right--;
        }

        // Swap elements if left is less than right
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    separateZerosAndOnes(arr, size);

    cout << "Array after separating zeros and ones: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
