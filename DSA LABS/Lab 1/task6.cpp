// Task 6: Reverse an array in place (no second array allowed)
// - Read 6 integers
// - Reverse them using a two-pointer swap technique
// - Display the reversed array
// Example: {3, 7, 2, 9, 4, 1} -> {1, 4, 9, 2, 7, 3}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int numbers[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    // Two-pointer technique:
    // 'left' starts at the beginning, 'right' starts at the end.
    // Swap the pair, then move both pointers toward the middle.
    // The loop stops once left meets or passes right, meaning the whole
    // array has been reversed without needing any extra storage.
    int left = 0, right = SIZE - 1;
    while (left < right) {
        int temp = numbers[left];   // temporarily hold the left value
        numbers[left] = numbers[right];
        numbers[right] = temp;      // complete the swap
        left++;
        right--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    return 0;
}
