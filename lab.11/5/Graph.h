#ifndef LA10_Graph_h
#define LA10_Graph_h

#include "Vertex.h"
#include <iostream>

using namespace std;

class Graph
{
public:
    /*! A collection of vertices */
    vector<Vertex *> items;
    

    /*! A method to add a vertex to the items vector */
    void add(Vertex *d)
    {
        // insert your code here
        d->ref();
        items.push_back(d);
    }

    /*! A method to display the graph as pairs of vertices */
    void print()
    {
        // insert your code here
        int sz = items.size();

        for (int i = 0; i < sz; i = i + 2)
        {
            cout << items[i]->getLabel() << " - "
                 << items[i + 1]->getLabel() << endl;
        }
    }

    /*! A method to free up all the space taken up by the graph */
    void deleteAll()
    {
         int sz = items.size();

        for (int i = 0; i < sz; i++)
        {
            items[i]->unref();
        }

    }
};

#endif

//  delete items[7];
//        delete items[5];
//        delete items[0];
//        delete items[18];
//        delete items[21];