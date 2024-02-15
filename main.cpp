#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key, flag = 0;
    cout << "Enter the element to search: ";
    cin >> key;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] == key) {
            cout << key << " found at index " << i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << key << " not found in the array" << endl;
    }
    return 0;
}