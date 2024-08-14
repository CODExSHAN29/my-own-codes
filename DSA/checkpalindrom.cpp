#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    
    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    if (isPalindrome(array1, size1)) {
        cout << "array1 is a palindrome" << endl;
    } else {
        cout << "array1 is not a palindrome" << endl;
    }

    if (isPalindrome(array2, size2)) {
        cout << "array2 is a palindrome" << endl;
    } else {
        cout << "array2 is not a palindrome" << endl;
    }

    return 0;
}
