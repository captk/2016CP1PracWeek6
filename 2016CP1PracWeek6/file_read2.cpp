/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   file_read2.cpp
 * Author: k
 *
 * Created on 14 April 2016, 1:48 PM
 *

// file read2.cpp - This program reads some integers from a file and displays: // The number, number^2, and the sum of all numbers read up to that point 
#include<iostream>
#include<fstream> 
#include<cstdlib> 
#include<cmath> 
#include<cstring>
using namespace std;
//Definition different to prac specs because i don't even wtf
void get_stream(ifstream& in_s, ofstream& out_s);

int main() {
    int x, count = 0;
    float sum = 0, avg;
    ifstream in_s;
    ofstream out_s;
    get_stream(in_s, out_s);
    out_s << "\t x \t\t x^2 \t\t Current Sum \n";
    out_s << "\t === \t\t === \t\t ========== \n";
    while (in_s >> x) {
        sum = sum + x;
        out_s << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
        count++;
    }
    avg = sum / count;
    out_s << "\n \t\t The average of these " << count << " numbers is: " << avg << endl
            << endl;
 out_s.close(); //stop forgetting to close the output stream.
    in_s.close();
    return 0;
}

void get_stream(ifstream& in_s, ofstream& out_s) {
    string input_file;
    string output_file;
    cout << "Please input the input_file name \n";
    cin >> input_file;
    in_s.open(input_file.c_str());
    if (in_s.fail()) {
        cout << "Input file opening failed. \n";
        exit(1);
    }
    cout << "Please input the output_file name \n";
    cin >> output_file;
    out_s.open(output_file.c_str(), ios::app);
    if (out_s.fail()){
        cout << "Output file opening failed. \n";
        exit(1);
    }
}*/