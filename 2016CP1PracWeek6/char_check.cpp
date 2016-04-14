/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   char_check.cpp
 * Author: k
 *
 * Created on 14 April 2016, 4:23 PM
 *
// char check.cpp - This program reads one character from the keyboard and will 
// convert it to uppercase, if it is lowercase 
// convert it to lowercase, if it is uppercase 
// display a message, if it is a digit

#include<iostream> 
#include<cctype> 
using namespace std;

int main() {
    char c;
    cout << "Enter a character \n";
    cin >> c;
    if (isalpha(c)) { //check to see if it is a letter of alphabet 
        if (isupper(c)) {//check to see if it is uppercase 

            c = tolower(c);
            cout << "Your character " << c << " is in uppercase.";
            cout << "Its lowercase case is " << c << endl;
        } else {
            c = toupper(c);
            cout << "Your character " << c << " is in lowercase.";
            cout << "Its uppercase is " << c << endl;
        }
    } else {
        cout << "Your character " << c << " is a digit.\n";
    }
    return 0;
}

*/