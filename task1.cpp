//GullCode 2022
//Task 1: Triangles
//Team Severe Chest Pain
//Josh Comfort, Brian Bowers, Nick Krisulevicz

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int numofsides;
    cout << "Enter the amount of sides the polygon will have" << endl;
    cin >> numofsides;
    int counter = 0;
    if(numofsides == 3 || numofsides == 4 || numofsides == 6){
        vector<string> lines;
        string s;
        getline(cin, s);
        for(int i = 0; i < numofsides; i++){
            getline(cin, s);
            lines.push_back(s);
            counter++;
        }
        
        int i = 0;
        for(string line : lines){
            cout << "Line " << ++i << " is " << line << endl;
        }

        /*
        int linesnumbs[numofsides];
        for(int i = 0; i < numofsides; i++){
            linesnumbs[i] = stoi(lines.at(i));
            cout << "Converted to integer " << linesnumbs[i] << endl;
        }
        */
    }
    else{
        cout << "Invalid input! Enter 3, 4, or 6!" << endl;
        exit(1);
    }

    return 0;
}


/*
    switch(numofsides){
        case 3:
            //do triangle process

            //get input
            
            break;
        case 4:
            //do rhombus process

            //get input

            break;
        case 6:
            //do hexagon process

            //get input

            break;
        default:
            cout << "Invalid Input! Enter 3, 4, or 6!" << endl;
            exit (1);
    }
*/

/*
    //get input
    vector<string> lines;
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
*/