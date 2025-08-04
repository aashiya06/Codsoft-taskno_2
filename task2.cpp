/* Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/

#include<iostream>
using namespace std;

class calculator{

    private:
    char operations;
    int num_1, num_2;

    public:

    calculator(){
        cout << "Welcome to the Calculator!" << endl;
        cout << "Enter the first number: ";
        cin>>num_1;
        cout << "Choose an operation (+, -, *, /): ";
        cin >> operations;
        cout << "Enter the second number: ";
        cin>>num_2;   
    }

    void calculate() {
        switch(operations) {
            case '+':
                cout << "Result: " << num_1 + num_2 << endl;
                break;
            case '-':
                cout << "Result: " << num_1 - num_2 << endl;
                break;
            case '*':
                cout << "Result: " << num_1 * num_2 << endl;
                break;
            case '/':
                if(num_2 != 0) {
                    cout << "Result: " <<(num_1) / num_2<< endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operation!" << endl;
        }
    }
};

int main() {
    
    calculator calc;
    char choice;
    calc.calculate();

    cout << "Thank you for using the calculator!" << endl;
    cout << "Do you wish to continue? (Y/N): " << endl;
    cin>>choice;
    
    if(choice == 'Y' || choice == 'y') {
        main(); 
    } 
    else {
        cout << "Exiting the calculator. Goodbye!" << endl;
    }
    
    return 0;
}