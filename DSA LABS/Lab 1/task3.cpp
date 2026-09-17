// Task 3: Basic OOP - class vs object
// - Define a Student class with two public data members: rollNumber and marks
// - Add a display() function that prints both, labelled, on separate lines
// - Create two Student objects, assign values, and display them
// - Change only s1's marks and show that s2 is unaffected

#include <iostream>
using namespace std;

// The class defines the *blueprint*: what data and behaviour every Student
// object will have. It does not itself hold any data until an object is created.
class Student {
public:
    int rollNumber; // data member: unique roll number for a student
    int marks;      // data member: marks obtained by a student

    // Member function: prints this object's own rollNumber and marks.
    // Because it has no parameters, it always operates on whichever object
    // called it (e.g. s1.display() prints s1's values, not s2's).
    void display() {
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Marks: " << marks << "\n";
    }
}; // class definitions must end with a semicolon

int main() {
    // s1 and s2 are two separate objects (instances) of the Student class.
    // Each gets its own independent copy of rollNumber and marks in memory.
    Student s1, s2;

    // Assign values to s1 using the dot operator to access its members.
    s1.rollNumber = 1;
    s1.marks = 75;

    // Assign values to s2 independently of s1.
    s2.rollNumber = 2;
    s2.marks = 90;

    cout << "-- Initial values --\n";
    cout << "Student 1:\n";
    s1.display();
    cout << "Student 2:\n";
    s2.display();

    // Change ONLY s1's marks. s2 is a completely separate object, so this
    // has no effect on s2's data.
    s1.marks = 80;

    cout << "\n-- After changing s1.marks to 80 --\n";
    cout << "Student 1:\n";
    s1.display();
    cout << "Student 2:\n";
    s2.display();

    // Explanation: s2.marks remains 90. Objects of a class each maintain
    // their own separate storage for data members; modifying one object's
    // member does not touch another object's member, even though both
    // objects share the same class definition.

    return 0;
}
