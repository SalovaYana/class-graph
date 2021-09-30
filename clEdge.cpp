#include "clEdge.h"

void clEdge::Show()
{
   // setcolor(c);
    setlinestyle(0, 0, 2);
    ellipse(60+35*(i->Geti()+j->Geti()),330,0,180,35*(abs(j->Geti()-i->Geti())),40*(abs(j->Geti()-i->Geti())));
}


clEdge::clEdge()
{
    cout<<"  clEdge(int j0);\n";
}

clEdge::clEdge(clNode* i0,clNode* j0) :j(j0),i(i0)
{
    cout<<"  clEdge(int x0, int y0, int num0);\n";
}
clEdge::~clEdge()
{
    cout<<i->Geti()<<"  ~clCircle();\n";
}
