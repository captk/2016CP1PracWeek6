/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   htmlConverter.cpp
 * Author: k
 *
 * Created on 14 April 2016, 4:35 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;

void get_files(ifstream&, ofstream&);
void write_header(ofstream&);
void write_footer(ofstream&);
void convert(ifstream&, ofstream&);

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream in_s;
    ofstream out_s;
    get_files(in_s, out_s);
    write_header(out_s);
    convert(in_s, out_s);
    write_footer(out_s);
    in_s.close();
    out_s.close();
    return 0;

}

void get_files(ifstream& in_s, ofstream& out_s) {
    string inName, outName;
    cout << "Enter the input file name:" << endl;
    cin >> inName;
    in_s.open(inName.c_str());
    if (in_s.fail()) {
        cout << "Failed to open input file. Exiting." << endl;
        exit(1);
    }
    cout << "Enter the output file name:" << endl;
    cin >> outName;
    out_s.open(outName.c_str());
    if (out_s.fail()) {
        cout << "Failed to open output file. Exiting." << endl;
        exit(1);
    }

}

void write_header(ofstream& out_s) {
    out_s << "<html> \n <title>\n HTML Converter\n </title>\n <body>\n";
}

void write_footer(ofstream& out_s){
    out_s << "</body> \n</html> \n";
}

void convert(ifstream& in_s, ofstream& out_s){
    char c;
    in_s.get(c);
    while(!in_s.eof()){
        if(c=='\n'){
            out_s << "\n<br>";
        }
        else out_s.put(c);
        cout.put(c);
        in_s.get(c);
    }
    out_s << endl;
}