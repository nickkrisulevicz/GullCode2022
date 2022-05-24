//GullCode 2022
//Task 2: System Dependencies
//Team Severe Chest Pain
//Josh Comfort, Brian Bowers, Nick Krisulevicz

#include <iostream>
#include <string>
#include <list>
#include <fstream>
using namespace std;


int main(){
    ofstream chestpain;
    ifstream heartfailure;
    string temp;
    chestpain.open("foo");
    string usrcom;
    string usrargs;

    while(1){
            cout << "~/$ ";
        cin >> usrcom >> usrargs;
        if(usrcom == "DEPEND"){
                chestpain << usrcom << " " << usrargs;
        }
        else if(usrcom == "INSTALL"){
                chestpain << usrcom << " " << usrargs << "\n";
                chestpain << "  Installing" << usrargs << "...\n";
        }
        else if(usrcom == "REMOVE"){
                chestpain << usrcom << " " << usrargs << "\n";
                chestpain << "  Uninstalling" << usrargs << "\n";
        }
        else if(usrcom == "LIST"){
                while(heartfailure >> temp){
                    cout << temp;
                }
        }
        else if(usrcom == "EXIT"){
                exit(0);
        }
        else{
                cout << "Invalid input please enter an actual command!" << endl;
        }
    }

    chestpain.close();
}