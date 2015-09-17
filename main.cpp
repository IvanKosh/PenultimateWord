/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 18:12
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    int i, j;
    while (getline(stream, line)) {
        for (i = line.size(); line[i] != ' '; i--){}
        for (j = i-1; (line[--j] != ' ' && j > 0); ) {}
        if(j) j++;
        cout << line.substr(j, i-j) <<'\n';
    }
    return 0;
}