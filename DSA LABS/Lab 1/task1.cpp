// Task 1: Array declaration, update, and display
// - Declare an array of 5 integers
// - Change the third element (index 2) to 7
// - Display all values using a for loop

#include <iostream>
using namespace std;

int main() {
    // Declare and initialise the array with the given values.
    // Valid indices for this array are 0, 1, 2, 3, 4.
    int numbers[5] = {2, 4, 6, 8, 10};

    // The "third element" means the element at index 2 (since indexing starts at 0).
    // Original: {2, 4, 6, 8, 10} -> After update: {2, 4, 7, 8, 10}
    numbers[2] = 7;

    // Loop through the array from index 0 to 4 (i < 5) and print each value.
    // A space is added after each number to separate them on the same line.
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n"; // move to a new line after printing all values

    return 0;
}
