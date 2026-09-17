#include <iostream>
using namespace std;

int main()
{
    // Declare an array to store sales for 5 days
    int sales[5];

    // Pointer p points to the first element of the array
    int* p = sales;

    // Read 5 non-negative sales values using pointer notation
    cout << "Enter sales for 5 days: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);

        // Re-enter while the entered value is negative
        while (*(p + i) < 0)
        {
            cout << "Enter a non-negative value: ";
            cin >> *(p + i);
        }
    }

    // Variable to store the total sales
    int total = 0;

    // Display the values and calculate the total
    cout << "Values: ";

    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";

        // Add the current value to total
        total += *(p + i);
    }

    cout << "\nTotal: " << total << endl;

    // Add 2 to the third day's value
    *(p + 2) = *(p + 2) + 2;

    // Reset total so we can calculate the updated total
    total = 0;

    // Display the updated values and calculate the new total
    cout << "Updated values: ";

    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";

        // Add the updated value to total
        total += *(p + i);
    }

    cout << "\nUpdated total: " << total << endl;

    return 0;
}
