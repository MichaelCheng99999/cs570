//
//  main.cpp
//  cs570 lab1
//
//  Created by Yunfei Lu on 9/4/15.
//  Copyright (c) 2015 Yunfei Lu. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double aNumber;
    int intNumber;
    cout << "input a decimal number: ";
    cin >> aNumber;
    cout << fixed;
    cout << setprecision(0);
    cout << "print the decimal number in double without decimal point: " << aNumber <<endl;
    intNumber = static_cast<int>(aNumber);
    cout << "cast double into int and print it: " << intNumber << endl;
    cout << setprecision(2);
    cout << "print the decimal number with two decimal place: " << aNumber <<endl;
    cout << "the number is: "<< intNumber % 2 << endl;
    cout << "My name is: " << "Yunfei Lu" << endl;
    return 0;
}