// Task 2: Read integers into an array and compute their total
// - Use one loop to read five integers
// - Use a second loop to add them to a running total
// - Display the total
// Assumption: the user always enters exactly 5 valid integers whose sum fits in an int.

#include <iostream>
using namespace std;

int main() {
    int numbers[5];   // array to hold the 5 input values
    int total = 0;    // running sum, must start at 0 so the first addition is correct

    // First loop: read exactly 5 integers from the user into the array.
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Second loop: walk through the array again and accumulate the sum.
    // Keeping this separate from the input loop matches the task's requirement
    // of "one loop to read... and a second loop to add".
    for (int i = 0; i < 5; i++) {
        total += numbers[i];

        // Trace line (uncomment while testing to see i, numbers[i], and the
        // running total after each addition, as required for the first test case):
        // cout << "i=" << i << " numbers[i]=" << numbers[i] << " total=" << total << "\n";
    }

    cout << "Total = " << total << "\n";

    return 0;
}
