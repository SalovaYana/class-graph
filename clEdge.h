#ifndef CLEDGE_H
#define CLEDGE_H
#include "clNode.h"

class clEdge: public clDraw
{
    public:
        clEdge();
        clEdge(clNode* i,clNode* j);
        virtual ~clEdge();

        void Show();

        clNode* i;
        clNode* j;


    protected:

    private:
};

#endif // CLEDGE_H
