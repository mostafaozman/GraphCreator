//
//  main.cpp
//  GraphCreator
//
//  Created by Mostafa Osman on 5/20/20.
//  Copyright © 2020 Mostafa Osman. All rights reserved.
// comment

#include <iostream>

using namespace std;

void printMatrix(int verticies);
void addEdge(int u, int v, int weight);
int matrix[20][20];

int main()
{
    int node;
    int node2;
    int weight;
    int count = 0;
    bool cont = true;
    
    while (cont == true)
    {
        cout << "What is the first node would you like to add? (1-20)" <<  endl;
        cin >> node;
        cout << "What is the second node would you like to add? (1-20)" <<  endl;
        cin >> node2;
        cout << "What is the weight of its edge?" << endl;
        cin >> weight;
       
        
        addEdge(node, node2, weight);
        printMatrix(count);
        
    }
   
    return 0;
}

void printMatrix(int verticies)
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addEdge(int u, int v, int weight)
{
    // u is y and v is x
    matrix[u-1][v-1] = weight;
    
}
