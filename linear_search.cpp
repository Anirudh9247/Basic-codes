#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int k) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == k) return true;
    }
    return false;
}

int main() {
    int size, k;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cin >> k;

    cout << (isPresent(arr, size, k) ? "true" : "false") << endl;
    return 0;
}
