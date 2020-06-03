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
void removeEdge(int vertex1, int vertex2);
void removeVertex(int vertex);

int main()
{
    int node;
    int node2;
    int weight;
    int count = 0;
    bool cont = true;
    char input;
    int num;
    
    while (cont == true)
    {
        cout << "What is the first node would you like to add? (1-20)" <<  endl;
        cin >> node;
        cout << "What is the node you would like to connect it to? (1-20)" <<  endl;
        cin >> node2;
        cout << "What is the weight of its edge?" << endl;
        cin >> weight;
        
        
        addEdge(node, node2, weight);
        printMatrix(count);
        
        cout << "Would you like to delete a vertex or an edge? (y/n)" << endl;
        cin >> input;
        
        if (input == 'y')
        {
            cout << "Vertex or Edge? (1 or 2)" << endl;
            cin >> num;
            
            if (num == 1)
            {
                cout << "Which vertex would you like to delete?" << endl;
                cin >> node;
                
                removeVertex(node);
                printMatrix(count);
            }
            
            if (num == 2)
            {
                cout << "What is the first node?" << endl;
                cin >> node;
                cout << "What is the second node? (The one that is being directed to)" << endl;
                cin >> node2;
                removeEdge(node, node2);
                printMatrix(count);
            }
        }
        if (input == 'n')
        {
            
        }
        else
        {
            cout << "Invalid input." << endl;
        }
        
        
    }
    
    return 0;
}

void printMatrix(int verticies)
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

void addEdge(int u, int v, int weight)
{
    // u is y and v is x
    matrix[u-1][v-1] = weight;
    
}

void removeVertex(int vertex)
{
    //Since were deleting a vertex we need to delete all coresponding connections, wipe the row and the column correspondong to the vertex value
    
    // wipe column
    for (int i = 0; i < 20; i++)
    {
        matrix[i][vertex-1] = 0;
    }
    // wipe row
    for (int i = 0; i < 20; i++)
    {
        matrix[vertex-1][i] = 0;
    }
}

void removeEdge(int vertex1, int vertex2)
{
    if (matrix[vertex1-1][vertex2-1] != 0)
    {
        matrix[vertex1-1][vertex2-1] = 0;
    }
    else
    {
        cout << "No edge to remove." << endl;
    }
}
