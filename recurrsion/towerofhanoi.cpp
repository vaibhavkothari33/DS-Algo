#include <iostream>
using namespace std;

// Function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary, using destination as the auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move the n-1 disks from auxiliary to destination, using source as the auxiliary
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n; // Number of disks

    // Take input for the number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Call the Tower of Hanoi function
    towerOfHanoi(n, 'A', 'C', 'B'); // A = Source, C = Destination, B = Auxiliary

    return 0;
}
