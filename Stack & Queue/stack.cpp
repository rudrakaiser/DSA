#include <iostream>
using namespace std;

#define SIZE 5
int STACK[SIZE], top = -1;

void PUSH() {
    if (top == SIZE - 1) {
        cout << "Stack Overflow ! Cannot push more elements.\n";
    } else {
        int value;
        cout << "Enter the value to PUSH >>> ";
        cin >> value;
        STACK[++top] = value;
        cout << "Pushed [ " << value << " ] onto the stack.\n";
    }
}

void POP() {
    if (top == -1) {
        cout << "Stack Underflow ! The Stack is EMPTY.\n";
    } else {
        cout << "Popped [ " << STACK[top--] << " ] from the stack.\n";
    }
}

void SHOW() {
    if (top == -1) {
        cout << "The Stack is EMPTY !\n";
    } else {
        cout << "Stack [ ";
        for (int i = top; i >= 0; --i) {
            cout << STACK[i] << " ";
        }
        cout << " ]" << endl;
    }
}

void DISPLAY() {
    system("cls");
    cout << "------------------| STACK |------------------\n\n";
    cout << "Size of the Stack is [ " << SIZE << " ]\n\n";
    cout << "\t(1)  PUSH\n";
    cout << "\t(2)  POP\n";
    cout << "\t(3)  SHOW\n";
    cout << "\t(4)  EXIT\n";
}

int main() {
    int choice;
    DISPLAY();

    while (true) {
        cout << "\nEnter Your Choice ------------------------> ";
    for_invalid_choice:
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                PUSH();
                break;
            case 2:
                POP();
                break;
            case 3:
                SHOW();
                break;
            case 4:
                cout << "-------------------| EXIT |------------------\n\n";
                return 0;
            default:
                cout << "Invalid Choice ! Please Choose 1 to 4 ----> ";
                goto for_invalid_choice;
        }
    }
    return 0;
}