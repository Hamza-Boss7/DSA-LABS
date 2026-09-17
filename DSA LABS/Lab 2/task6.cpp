#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    // Dynamically allocate an array of 3 integers
    int* values = new int[n];

    cout << "Enter values: "; // Read the values
    for (int i = 0; i < n; i++)
    {
        cin >> *(values + i);
    }

    // Display the values
    cout << "Values: ";

    for (int i = 0; i < n; i++)
    {
        cout << *(values + i) << " ";
    }

    // Release the dynamically allocated array
    delete[] values;

    // Set the pointer to nullptr
    values = nullptr;

    return 0;
}
