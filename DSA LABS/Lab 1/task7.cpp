// Task 7: Move the first occurrence of each distinct value to the front
// - Read 10 integers
// - Without using a second array, rearrange so the first occurrence of each
//   distinct value appears at the front, in its original order
// - Display these unique values and how many there are
// Example: {4, 2, 4, 7, 2, 9, 7, 1, 9, 1} -> front becomes {4, 2, 7, 9, 1}, count = 5
// Note: the array's physical size stays 10; only the first 'count' positions
// represent the meaningful result afterward.

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // writeIndex marks the boundary of the "unique values found so far" region:
    // numbers[0 .. writeIndex-1] always holds only first-occurrence values,
    // in the order they were first seen.
    int writeIndex = 0;

    for (int i = 0; i < SIZE; i++) {
        bool seenBefore = false;

        // Check whether numbers[i] already exists among the unique values
        // we've placed so far (i.e. in numbers[0 .. writeIndex-1]).
        for (int j = 0; j < writeIndex; j++) {
            if (numbers[j] == numbers[i]) {
                seenBefore = true;
                break; // no need to keep checking once a match is found
            }
        }

        if (!seenBefore) {
            // Copy this new distinct value into the next free "unique" slot.
            // Because writeIndex is always <= i, this only ever overwrites
            // positions that have already been read and processed, so no
            // unread data is ever lost — and we never need a second array.
            numbers[writeIndex] = numbers[i];
            writeIndex++;
        }
    }

    // At this point, numbers[0 .. writeIndex-1] holds the distinct values
    // in the order they first appeared. writeIndex is also the count.
    cout << "Unique values (first occurrences, in order): ";
    for (int i = 0; i < writeIndex; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    cout << "Count = " << writeIndex << "\n";

    return 0;
}
