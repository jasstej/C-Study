#include <iostream>
using namespace std;

int main() {
  int num[5];
  int target;
  cout << "Enter the array: ";
  for (int i = 0; i < 5; i++) {
    cin >> num[i];
  }
  cout << "Enter the target: ";
  cin >> target;

  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (num[i] + num[j] == target) {
        cout << "The indices of the two numbers that add up to the target are: " << i << " and " << j << endl;
        
      }
    }
  }
  return 0;
}