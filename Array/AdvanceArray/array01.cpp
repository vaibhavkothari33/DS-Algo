#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Initial array of 5 elements
    vector<int> arr = {10, 20, 30, 40, 50};

    cout << "Initial Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 2: Adding an element at the first position
    int firstElement;
    cout << "Enter the element you want to add at the first position: ";
    cin >> firstElement;
    arr.insert(arr.begin(), firstElement);

    cout << "Array after adding element at the first position: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 3: Adding an element at the last position
    int lastElement;
    cout << "Enter the element you want to add at the last position: ";
    cin >> lastElement;
    arr.push_back(lastElement);

    cout << "Array after adding element at the last position: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 4: Adding an element at a random position
    int randomElement, position;
    cout << "Enter the element you want to add at a random position: ";
    cin >> randomElement;
    cout << "Enter the position (between 1 and " << arr.size() << "): ";
    cin >> position;

    if (position >= 1 && position <= arr.size()) {
        arr.insert(arr.begin() + position - 1, randomElement);

        cout << "Array after adding element at position " << position << ": ";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid position!" << endl;
    }

    return 0;
}
