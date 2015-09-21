//  main.cpp
//  lab2
//  Created by Group 10 on 9/11/15.
//  Copyright (c) 2015 Group 10. All rights reserved.
//github
//lab request
#include <iostream>
#include <fstream>
#include "string"
using namespace std;

void count_word(string aWord, long &sumOfOne, long &sumOfTwo, long &sumOfThree) {
    long length = aWord.length();
    switch (length) {
        case 1:
            sumOfOne++;
            break;
        case 2:
            sumOfTwo++;
            break;
        default:
            sumOfThree++;
            break;
    }
}

void output_table(long sumOfOne, long sumOfTwo, long sumOfThree) {
    cout << "One letter word: \t\t\t\t\t" << sumOfOne <<endl;
    cout << "Two letter word: \t\t\t\t\t" << sumOfTwo <<endl;
    cout << "Three or three above letter word: \t" << sumOfThree <<endl;

}

int main() {
    long sumOfOneLetter = 0, sumOfTwoLetter = 0, sumofThreeLetter = 0;
    char aLetter;
    string path = "/Users/yunfeilu/Documents/CS570/lab2/lab2/input.txt";
    string aWord = "";
    ifstream fileIn(path);
    if (fileIn.fail()) { // check whether the file is available or not
        cout << "there is no txt file in " + path << endl;
        return 1;
    } else {
        while (true) {
        aLetter = fileIn.get();
        if (aLetter == EOF) { //check whether the file is read over
            if (aWord != "") {
                count_word(aWord, sumOfOneLetter, sumOfTwoLetter, sumofThreeLetter);
            }
            output_table(sumOfOneLetter, sumOfTwoLetter, sumofThreeLetter); //output the table
            break;
        }
        if (aLetter != ' ' && aLetter != '\n') {
            aWord = aWord + aLetter;
        } else {
            if (aWord != "") {
            count_word(aWord, sumOfOneLetter, sumOfTwoLetter, sumofThreeLetter);
            aWord = "";
            }
        }
    }
    }
    return 0;
}
