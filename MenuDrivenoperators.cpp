#include<iostream>
#include<iomanip>
using namespace std;

int snum = 10;

int main() {
    int snum = 20;
    int choice, x, y;
    cout << "MENU-DRIVEN PROGRAM FOR OPERATORS IN C++" << endl;
    cout << "1. Arithmetic Operators" << endl;
    cout << "2. Relational Operators" << endl;
    cout << "3. Logical Operators" << endl;
    cout << "4. Assignment Operator" << endl;
    cout << "5. Increment and Decrement Operator" << endl;
    cout << "6. Bitwise Operators" << endl;
    cout << "7. Ternary Operator" << endl;
    cout << "8. Scope resolution Operator" << endl;
    cout << "9. Insertion and Extraction Operator" << endl;
    cout << "0. Exit" << endl;

    do {
        cout << "Enter two numbers: ";
        cin >> x >> y;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: // ARITHMETIC OPERATORS
            cout << "X= " << x << endl;
            cout << "Y= " << y << endl;
            cout << "X+Y= " << (x + y) << endl;
            cout << "X-Y= " << (x - y) << endl;
            cout << "X*Y= " << (x * y) << endl;
            cout << "X/Y= " << (x / static_cast<float>(y)) << endl;
            cout << "X%Y= " << (x % y) << endl;
            break;
        case 2: // RELATIONAL OPERATORS
            cout << "X= " << x << endl;
            cout << "Y= " << y << endl;
            cout << "X>Y = " << (x > y) << endl;
            cout << "X>=Y = " << (x >= y) << endl;
            cout << "X<Y = " << (x < y) << endl;
            cout << "X<=Y= " << (x <= y) << endl;
            cout << "X==Y = " << (x == y) << endl;
            cout << "X!=Y = " << (x != y) << endl;
            break;
        case 3: // LOGICAL OPERATORS
            cout << "X= " << x << endl;
            cout << "Y= " << y << endl;
            cout << "X&&Y =" << (x && y) << endl;
            cout << "X||Y =" << (x || y) << endl;
            cout << "!Y =" << (!y) << endl;
            break;
        case 4: // ASSIGNMENT OPERATORS
            cout << "X= " << x << endl;
            cout << "Y= " << y << endl;
            cout << "X+= " << (x += y) << endl;
            cout << "X-= " << (x -= y) << endl;
            cout << "X*= " << (x *= y) << endl;
            cout << "X/= " << (x /= y) << endl;
            break;
        case 5: // INCREMENT AND DECREMENT OPERATOR
            cout << "X= " << x << endl;
            cout << "Y= " << y << endl;
            cout << "X++ =" << (x++) << endl;
            cout << "X-- =" << (x--) << endl;
            cout << "--X =" << (--x) << endl;
            cout << "++X =" << (++x) << endl;
            break;
        case 6: // BITWISE OPERATORS
            cout << "X&Y =" << (x & y) << endl;
            cout << "X|Y =" << (x | y) << endl;
            cout << "X^Y =" << (x ^ y) << endl;
            cout << "X<<2 =" << (x << 2) << endl;
            cout << "X>>2 =" << (x >> 2) << endl;
            cout << "~Y =" << (~y) << endl;
            break;
        case 7: // TERNARY OPERATOR
            int result;
            result = (x > y) ? x : y;
            cout << "The larger number is " << result << endl;
            break;
        case 8: // SCOPE RESOLUTION OPERATOR
            cout << "Local snum= " << snum << endl;
            std::cout << "Global snum= " << ::snum << endl;
            break;
        case 9: // INSERTION AND EXTRACTION OPERATOR
            int insertvar;
            cout << "Enter a number: ";
            cin >> insertvar;
            cout << "You entered: " << insertvar << endl;
            break;
        case 0: // EXIT
            cout << "THANK YOU FOR USING OUR PROGRAM!!" << endl;
            break;
        default:
            cout << "INVALID CHOICE!...PLEASE ENTER A CORRECT CHOICE" << endl;
            break;
        }
    } while (choice != 0);
    cout << "Prepared by- Aryan Sakaria" << endl;
    return 0;
}

