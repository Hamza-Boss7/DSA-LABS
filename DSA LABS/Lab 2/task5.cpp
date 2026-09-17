#include <iostream>
using namespace std;

int main()
{
    int n;

    // Read the initial number of marks
    cout << "Enter number of marks (1-10): ";
    cin >> n;

    // Validate
    if (n < 1 || n > 10)
    {
        cout << "Error: n must be between 1 and 10." << endl;
        return 0;
    }

    // Allocate the initial array
    int* marks = new int[n];

    // Read the initial marks
    for (int i = 0; i < n; i++)
    {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> *(marks + i);
    }

    // Allocate a new array with space for one more mark
    int* newMarks = new int[n + 1];

    // Copy the old marks using pointer notation
    for (int i = 0; i < n; i++)
    {
        *(newMarks + i) = *(marks + i);
    }

    // Read the additional mark
    cout << "Enter additional mark: ";
    cin >> *(newMarks + n);

    // Delete the old array
    delete[] marks;

    // Make marks point to the new array
    marks = newMarks;

    // Update the number of marks
    n++;

    // Display the updated marks
    cout << "Updated marks: ";

    for (int i = 0; i < n; i++)
    {
        cout << *(marks + i) << " ";
    }

    cout << endl;

    // Release the final array
    delete[] marks;

    return 0;
}
