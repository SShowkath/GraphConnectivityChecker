/******************************************************************************
Shahrukh Showkath sxs200232

*******************************************************************************/

#include "Graph.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    Graph g(8);
    ifstream input;
    string fileName;
    //cin >> fileName;
    fileName = "graph1.txt";
    input.open(fileName);
    g.createGraph(input);
    
    if (g.isConnected())
    {
        cout << "connected" << endl;
    }
    else
    {
        cout << "not connected" << endl;
    }
    g.toString();
    return 0;
}
