//GullCode 2022
//Task 5 Spooky Time
//Not working

#include <iostream>
#include <vector>
#include <sstream>
//#include <list>
using namespace std;
struct node{
    char value;
    node* next;
    node* prev;
};
int main(){

    vector<string> lines;
    //building the grid
    std::string s; 
    getline(std::cin, s);
    while ( !std::cin.eof() ) {
        lines.push_back(s);
        getline(std::cin, s);
    }

    int i = 0;
    for ( string line : lines )
    {
        cout << "Line " << ++i << " is " << line << endl;
    }

    string line[5];
    string col[3];
    char cArr[4];
    int order[4];
    line[0] = "XWY";
    line[1] = "ZX";
    line[2] = "ZXY";
    line[3] = "ZXW";
    line[4] = "YWW";
    
    //Assigning Columns
    
    for (int i = 0; i<5; i++){
        for(int x = 0; x < 3; x++){
            if (line[i][x] != NULL){
                col[x] += line[i][x];
            }
            else{
                col[x] +=  
            }
        }
    }
    int colIt = 0;
    int charCount = 0;
    cArr[charCount] = col[colIt][0];
    int x;
    for (x = 1; x < 5; x++){
        if(cArr[charCount] != col[colIt][x]){
            cArr[charCount+1] = col[colIt][x];
            break;
        }
    }
    if (x == 5){
        colIt++;
        x = 0;
    }
    for (charCount = 1; x < 5; x++){
        if(cArr[charCount] != col[colIt][x]){
            cArr[charCount+1] = col[colIt][x];
            charCount++;
            break;
        }
    }
    if (x == 5){
        colIt++;
        x = 0;
    }
    for (charCount = 2; x < 5; x++){
        if(cArr[charCount] != col[colIt][x]){
            cArr[charCount+1] = col[colIt][x];
            charCount++;
            break;
        }
    }
    if (x == 5){
        colIt++;
        x = 0;
    }
    return 0;
}