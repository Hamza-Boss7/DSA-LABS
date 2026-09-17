#include <iostream>
using namespace std;

int main()
{
    // Create a 2D array for 2 branches and 3 days
    int sales[2][3];

    // Pointer to a row containing 3 integers
    int (*rowPtr)[3] = sales;

    // Input sales values
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Enter sales for Branch " << r + 1 << ", Day " << c + 1 << ": ";
            cin >> *(*(rowPtr + r) + c);
        }
    }

    // Display the sales values
    cout << "\nSales:\n";

    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << *(*(rowPtr + r) + c) << " ";
        }
        cout << endl;
    }

    cout << "\nBranch Totals:\n";

    // Calculate total for each branch
    for (int r = 0; r < 2; r++)
    {
        int total = 0;

        for (int c = 0; c < 3; c++)
        {
            total += *(*(rowPtr + r) + c);
        }

        cout << "Branch " << r + 1 << ": " << total << endl;
    }

    cout << "\nDay Totals:\n";

    // Calculate total for each day
    for (int c = 0; c < 3; c++)
    {
        int total = 0;

        for (int r = 0; r < 2; r++)
        {
            total += *(*(rowPtr + r) + c);
        }

        cout << "Day " << c + 1 << ": " << total << endl;
    }

    return 0;
}
