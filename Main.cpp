#include "Rap0249.h"

int main() {
    MenuChoice choice;

    do {
        // Display menu and get user's choice
        cout << "1. Add a new student record" << endl;
        cout << "2. Remove an existing student record" << endl;
        cout << "3. Display all records" << endl;
        cout << "4. Search for a student record using student ID" << endl;
        cout << "5. Export the results to a disk file" << endl;
        cout << "6. Quit the program" << endl;
        cout << "Enter your choice: ";

        int userChoice;
        cin >> userChoice;
        choice = static_cast<MenuChoice>(userChoice);

        // Switch-case block based on user's choice
        switch (choice) {
            case Add:
                add_Student();
                break;
            case Remove:
                {
                    int studentID;
                    cout << "Enter student ID to remove: ";
                    cin >> studentID;
                    remove_Student(studentID);
                }
                break;
            case Display:
                display();
                break;
            case Search:
                {
                    int studentID;
                    cout << "Enter student ID to search: ";
                    cin >> studentID;
                    search(studentID);
                }
                break;
            case Results:
                exportResults();
                break;
            case Quit:
                cout << "Quitting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != Quit);

    return 0;
}
