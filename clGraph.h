#ifndef CLGRAPH_H
#define CLGRAPH_H
#include <vector>
#include "clNode.h"
#include "clDraw.h"
#include "clEdge.h"

class clGraph
{
public:
    clGraph();
    virtual ~clGraph();
    clGraph (int *a, int n);

    void Deykstra (int number);
    void Show();
    void paint (int *distnce);



    int *Mas;
    int N;
    clNode *node;
private:
};

#endif // CLGRAPH_H
