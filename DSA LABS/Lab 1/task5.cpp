// Task 5: Same specification as Task 4 (largest/smallest values and their indices)
// - Read 8 integers
// - Track the largest and smallest values seen so far, and where they occurred
// - If a value repeats, report only its FIRST occurrence (so we only update
//   on strictly greater / strictly smaller, never on equal)

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int numbers[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Start by assuming the first element is both the largest and smallest.
    int largest = numbers[0], largestIndex = 0;
    int smallest = numbers[0], smallestIndex = 0;

    // Compare every remaining element against the current largest/smallest.
    // Using strict '>' and '<' (not >= / <=) ensures that if a value repeats
    // later in the array, the earlier (first) occurrence's index is kept.
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
            largestIndex = i;
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
            smallestIndex = i;
        }
    }

    cout << "Largest value = " << largest << " at index " << largestIndex << "\n";
    cout << "Smallest value = " << smallest << " at index " << smallestIndex << "\n";

    return 0;
}
