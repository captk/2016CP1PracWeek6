/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   file_write.cpp
 * Author: k
 *
 * Created on 14 April 2016, 1:02 PM
 */

#include<iostream> 
#include<fstream> // Step (1) 
#include<cstdlib> 
#include<cmath> 
#include<cstring>
using namespace std;

int main() {
    int x, count = 0;
    float sum = 0, avg;
    string input_file;
    ifstream in_s; // Step (2)- declaration of the stream of type input
    ofstream out_s; // output file pointer
    out_s.open("output.txt", ios::app);
    if (out_s.fail()){
        cout << "output file opening failed. \n";
        exit(1);
    }
    cout << "Please input the input file name \n"; // Step (3) Get the file name 
    cin >> input_file;
    in_s.open(input_file.c_str()); // Step (3)- connect to the input file and test 
    if (in_s.fail()) {
        cout << "Input file opening failed. \n";
        exit(1); // if we couldn’t open the file to read from we exit 
    }
    out_s << "\t x \t\t x^2 \t\t Current Sum \n";
    out_s << "\t === \t\t === \t\t ========== \n";
    while (in_s >> x) // Step (4)-Read all numbers one-by-one to the end of the file 
    {
        sum = sum + x;
        out_s << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
        count++;
    }
    avg = sum / count;
    out_s << "\n \t\t The average of these " << count << " numbers is: " << avg << endl
            << endl;
    in_s.close(); // Step (5)- close the connection (close the file)
    return 0;
}