// Lab3_2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This is Leydi Ricardez's attempt at a menu selection for lab 3

#include <iostream>

using namespace std;

void printMenu(int& choice) {
    cout << "Hello, and welcome to my program! Please select an operation to perform: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;


    cout << "\nYour Selection: ";
    cin >> choice;
}

void getChoices(float& A, float& B) {
    cout << "Please enter the first value: ";
    cin >> A;

    cout << "Please enter the second value: ";
    cin >> B;
}

void firstChoice(float A, float B) {
    cout << A;
    cout << " + ";
    cout << B;
    cout << " = ";
    cout << (A + B) << endl;
}

void secondChoice(float A, float B) {
    cout << A;
    cout << " - ";
    cout << B;
    cout << " = ";
    cout << (A - B) << endl;
}

void thirdChoice(float A, float B) {
    cout << A;
    cout << " * ";
    cout << B;
    cout << " = ";
    cout << (A * B) << endl;
}

void fourthChoice(float A, float B) {
    cout << A;
    cout << " / ";
    cout << B;
    cout << " = ";
    cout << (A / B) << endl;
}

int main() {
    int choice;
    float A;
    float B;

    printMenu(choice);
    getChoices(A, B);

    if (choice == 1) {
        firstChoice(A, B);
    }

    if (choice == 2) {
        secondChoice(A, B);
    }

    if (choice == 3) {
        thirdChoice(A, B);
    }

    if (choice == 4) {
        fourthChoice(A, B);
    }

    return 0;
}
