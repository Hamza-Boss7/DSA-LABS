#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // Read number of students and subjects
    cout << "Enter number of students: ";
    cin >> rows;

    cout << "Enter number of subjects: ";
    cin >> cols;

    // Validate the dimensions
    if (rows <= 0 || cols <= 0)
    {
        cout << "Error: rows and columns must be positive." << endl;
        return 0;
    }

    // Allocate array of row pointers
    int** marks = new int*[rows];

    // Allocate memory for each row
    for (int r = 0; r < rows; r++)
    {
        marks[r] = new int[cols];
    }

    // Input marks using pointer notation
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cout << "Enter marks for Student " << r + 1
                 << ", Subject " << c + 1 << ": ";
            cin >> *(*(marks + r) + c);
        }
    }

    // Calculate total marks for each student
    int topStudent = 1;
    int highestTotal = -1;

    cout << "\nStudent Totals:\n";

    for (int r = 0; r < rows; r++)
    {
        int total = 0;

        for (int c = 0; c < cols; c++)
        {
            total += *(*(marks + r) + c);
        }

        cout << "Student " << r + 1 << ": " << total << endl;

        // Keep the first student in case of a tie
        if (total > highestTotal)
        {
            highestTotal = total;
            topStudent = r + 1;
        }
    }

    cout << "Top Student: " << topStudent << endl;

    // Release memory for each row
    for (int r = 0; r < rows; r++)
    {
        delete[] marks[r];
    }

    // Release the array of row pointers
    delete[] marks;

    // Set pointer to nullptr
    marks = nullptr;

    return 0;
}
