// Shahrukh Showkath sxs200232
#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include <fstream>
#include <iostream>
class Graph
{
    private:
        int size;
        int max;
        bool** v;
    public:
        Graph ();
        Graph(int);
        bool isEmpty();
        void toString();
        void createGraph(std::ifstream& fileStream);
        void traverse(int i, bool check[]);
        bool isConnected();
};
#endif