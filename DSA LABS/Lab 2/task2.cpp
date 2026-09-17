#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Part 1: Read and validate n
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // n must be greater than 0
    if (n <= 0)
    {
        cout << "Error; no allocation or mark input" << endl;
        return 0;
    }

    // Dynamically allocate an array of n integers
    int* marks = new int[n];

    cout << "Enter " << n << " marks, one for each student: ";

    for (int i = 0; i < n; i++) // Read marks using pointer notation
    {
        cin >> *(marks + i);

        // Marks must be between 0 and 100
        while (*(marks + i) < 0 || *(marks + i) > 100)
        {
            cout << "Enter a mark from 0 to 100: ";
            cin >> *(marks + i);
        }
    }

    // Part 2: Display marks, total, average and pass count
    int total = 0;
    int passCount = 0;

    cout << "Marks: ";

    for (int i = 0; i < n; i++)
    {
        // Display the mark using pointer notation
        cout << *(marks + i) << " ";

        // Add the mark to the total
        total += *(marks + i);

        // Count marks greater than or equal to 50
        if (*(marks + i) >= 50)
        {
            passCount++;
        }
    }

    // Convert total to double before division so the fractional part is not lost
    double average = static_cast<double>(total) / n;

    cout << endl;
    cout << "Total: " << total << endl;

    // Display average with 2 digits after decimal point
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    cout << "Pass count: " << passCount << endl;

    // Part 3: Release the dynamically allocated array
    delete[] marks;

    // Set the pointer to nullptr so it no longer contains the address of released memory
    marks = nullptr;

    return 0;
}
