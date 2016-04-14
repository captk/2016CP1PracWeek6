/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   read_text_fixed.cpp
 * Author: k
 *
 * Created on 14 April 2016, 2:16 PM
 */

// read text.cpp - This program reads the entire contents of an input_file and will 
// display it with the same format. 
#include<iostream>
#include<fstream> 
#include<cstdlib> 
#include<string>
using namespace std;
void get_input_stream(ifstream& in_s);

int main() {
    char c;
    ifstream in_s;
    get_input_stream(in_s);
    cout << "Here are the entire contents of the input_file \n";
    while (in_s.get(c)) {
        cout << c;
    }
    cout << "I am done with writing the contents of the file \n";
    in_s.close();
    return 0;
}

void get_input_stream(ifstream& in_s) {
    string input_file;
    cout << "Please input the input_file name \n";
    cin >> input_file;
    in_s.open(input_file.c_str());
    if (in_s.fail()) {
        cout << "Input file opening failed. \n";
        exit(1);
    }
}
