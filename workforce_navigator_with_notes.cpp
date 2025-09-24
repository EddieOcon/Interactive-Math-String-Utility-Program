/*
Author: Eddie O'Con
Assignment: Interactive Math & String Utility Program
Description: program must present a menu to the user with the following options:
1.	Factorial Calculator (while loop)
2.	Number Pyramid (for loop, nested loops)
3.	Sum of Even or Odd Numbers (do-while loop)
4.	Reverse a String (while loop)
5.	Exit Program
*/


/*
 Project Title: Interactive Math & String Utility Program
 Topic: Control Structures II – Loops (while, for, do-while, Nested Loops)
 Environment: GitHub CodeSpaces
 Author: Eddie O'Con
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;

    do {
        // Main menu
        cout << "\n===== Interactive Math & String Utility Program =====\n";
        cout << "1. Factorial Calculator (while loop)\n";
        cout << "2. Number Pyramid (for loop, nested loops)\n";
        cout << "3. Sum of Even or Odd Numbers (do-while loop)\n";
        cout << "4. Reverse a String (while loop)\n";
        cout << "5. Exit Program\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Factorial Calculator
        if (choice == 1) {
            int n, fact = 1;
            cout << "Enter a positive integer: ";
            cin >> n;

            int i = 1;
            while (i <= n) {
                fact *= i;
                i++;
            }
            cout << "Factorial of " << n << " is: " << fact << endl;
        }

        // Number Pyramid
        else if (choice == 2) {
            int rows;
            cout << "Enter number of rows: ";
            cin >> rows;

            for (int i = 1; i <= rows; i++) {
                // Print leading spaces
                for (int space = 1; space <= rows - i; space++) {
                    cout << " ";
                }
                // Print numbers
                for (int num = 1; num <= i; num++) {
                    cout << num << " ";
                }
                cout << endl;
            }
        }

        // Sum of Even or Odd Numbers
        else if (choice == 3) {
            char type;
            int n, sum = 0, i = 1;

            cout << "Do you want sum of (e)ven or (o)dd numbers? ";
            cin >> type;
            cout << "Enter the upper limit (N): ";
            cin >> n;

            do {
                if (type == 'e' || type == 'E') {
                    if (i % 2 == 0) sum += i;
                } else if (type == 'o' || type == 'O') {
                    if (i % 2 != 0) sum += i;
                }
                i++;
            } while (i <= n);

            if (type == 'e' || type == 'E')
                cout << "Sum of even numbers up to " << n << ": " << sum << endl;
            else
                cout << "Sum of odd numbers up to " << n << ": " << sum << endl;
        }

        // Reverse a String
        else if (choice == 4) {
            string input, reversed = "";
            cout << "Enter a string: ";
            cin.ignore(); // clear input buffer
            getline(cin, input);

            int i = input.length() - 1;
            while (i >= 0) {
                reversed += input[i];
                i--;
            }
            cout << "Reversed string: " << reversed << endl;
        }

        // Exit Program
        else if (choice == 5) {
            cout << "Goodbye! Thanks for using the program.\n";
        }

        else {
            cout << "Invalid choice. Please select between 1 and 5.\n";
        }

    } while (choice != 5);

    return 0;
}
