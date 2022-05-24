//Gullcode Task 4
//Joshua Comfort
//4-30-2022

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> lines;
    
    std::string s; 
    getline(std::cin, s);
    while ( !std::cin.eof() ) {
        lines.push_back(s);
        getline(std::cin, s);
    }

    int i = 0;

    string line1 = lines[0];
    string Nstring, Mstring;
    int index = 0;
    while (line1[index] != ' ')
    {
        Nstring.push_back(line1[index]);
        index++;
    }

    int N = stoi(Nstring);
    if (N < 0 || N > 9999)
    {
        cout << "Invalid input for N, please input a number between 1 and 9999." << endl;
        return 1;
    }

    index++;
    while (line1[index] != '\0')
    {
        Mstring.push_back(line1[index]);
        index++;
    }

    int M = stoi(Mstring);
    if (M < 0 || M > 99)
    {
        cout << "Invalid input for M, please input a number between 1 and 99." << endl;
        return 1;
    }

    vector<string> calls;
    vector<string> intervals;

    for (int o = 1; o <= N + 1; o++)
        calls.push_back(lines[o]);

    int max = N + 1 + M;

    for (int k = N + 1; k <= max; k++)
        intervals.push_back(lines[k]);

    vector< vector<int> > callValues;
    vector< vector<int> > intervalValues;
    vector<int> value;
    string valueString, intervalString;

    for (int j = 0; j < calls.size() - 1; j++)
    {
        index = 0;

        while (calls[j][index] != ' ')
        {
            valueString.push_back(calls[j][index]);
            index++;
        }

        value.push_back(stoi(valueString));
        valueString.clear();
        index++;

        while (calls[j][index] != ' ')
        {
            valueString.push_back(calls[j][index]);
            index++;
        }

        value.push_back(stoi(valueString));
        valueString.clear();
        index++;

        while (calls[j][index] != ' ')
        {
            valueString.push_back(calls[j][index]);
            index++;
        }

        value.push_back(stoi(valueString));
        valueString.clear();
        index++;

        while (calls[j][index] != '\0')
        {
            valueString.push_back(calls[j][index]);
            index++;
        }

        value.push_back(stoi(valueString));
        valueString.clear();

        callValues.push_back(value);
        value.clear();
    }

    value.clear();

    for (int j = 0; j < intervals.size() - 1; j++)
    {
        index = 0;

        while (intervals[j][index] != ' ')
        {
            valueString.push_back(intervals[j][index]);
            index++;
        }

        value.push_back(stoi(valueString));
        valueString.clear();
        index++;

        while (intervals[j][index] != '\0')
        {
            valueString.push_back(intervals[j][index]);
            index++;
        }

        value.push_back(stoi(valueString));
        valueString.clear();

        intervalValues.push_back(value);
        value.clear();
    }

    vector<int> MValues;
    vector< vector<int> > callIntervals;
    vector< vector<int> > timeIntervals;
    vector<int> list;
    
    for (int j = 0; j < intervalValues.size(); j++)
    {   
        int first = intervalValues[j][0];
        int last = intervalValues[j][1];

        for (int m = first; m <= last+first; m++)
        {
            list.push_back(m);
        }

        timeIntervals.push_back(list);
        list.clear();
    }

    list.clear();

    for (int j = 0; j < callValues.size(); j++)
    {
        
        int first = callValues[j][2];
        int last = callValues[j][3];

        for (int m = first; m <= last+first; m++)
            list.push_back(m);

        callIntervals.push_back(list);
        list.clear();
    }
    

    for (int i = 0; i < timeIntervals.size(); i++)
    {   
        int sum = 0;
        for (int k = 0; k < callIntervals.size(); k++)
        {
            bool isFound = 0;
            for (int j = 0; j < timeIntervals[i].size(); j++)
            {
                
                for (int l = 0; l < callIntervals[k].size(); l++)
                {
                    if (timeIntervals[i][j] == callIntervals[k][l])
                    {
                        isFound = 1;
                    }
                }
            }
            if (isFound)
                sum++;
        }
        MValues.push_back(sum);
    }
    
    for (int i = 0; i < MValues.size(); i++)
        cout << MValues[i] << endl;

    return 0;
}