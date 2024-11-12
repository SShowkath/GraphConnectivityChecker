// Shahrukh Showkath sxs200232

#include "Graph.h"
#include <vector>
#include <stack>
#include <iostream>
#include <fstream>
#include <sstream>

Graph::Graph ()
{
    max = 10;
    v = new bool*[10];
    for (int i = 0; i < 10; i++)
    {
      v[i] = new bool[10];
      for (int j = 0; j < 10; j++)
      {
        v[i][j] = false;
      }
    }
}

Graph::Graph (int x)
{
    max = x;
    v = new bool*[max];
    for (int i = 0; i < x; i++)
    {
      v[i] = new bool[x];
      for (int j = 0; j < x; j++)
      {
        v[i][j] = false;
      }
    }
}


bool Graph::isEmpty()
{
    if (size == 0)
        return true;
    return false;
}
void Graph::createGraph(std::ifstream& fileStream)
{
    int num;
    int k;
    std::string line;
    if (fileStream.is_open())
    {
        (getline(fileStream, line));
        num = stoi(line);
        
        while (getline(fileStream, line) && line.compare("\n") != 0)
        {
            
            std::stringstream ss (line);
            ss >> num;
            num -= 1;
            
            while (ss >> k)
            {
                k -= 1;
                std::cout << "num: " << num << " k: " << k <<std::endl;
                v[num][k] = true;
            }
        }
    }
}
void Graph::toString() {
    for (int i = 0; i < max; i++) {
      std::cout << i << " : ";
      for (int j = 0; j < max; j++)
        std::cout << v[i][j] << " ";
      std::cout << "\n";
    }
  }
void Graph::traverse(int i, bool check[])
{
   check[i] = true;
   for(int j = 0; j < max; j++)
   {
      if(v[i][j])
      {
         if(!check[j])
            traverse(j, check);
      }
   }
   std::cout << "traversed" << std::endl;
}

bool Graph::isConnected()
{
   bool* vis = new bool[max];
   
   for(int i = 0; i < max; i++)
   {
      for(int j = 0; j < max; j++)
      {
        vis[j] = false; 
      }
      
      traverse(i, vis);
      
      for(int k = 0; k < max; k++)
      {
         if(!vis[k]) 
         return false;
      }
   }
   std::cout <<"isconn" << std::endl;
   return true;
}