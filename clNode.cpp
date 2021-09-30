#include "clNode.h"


void clNode::Show()
{
    clCircle::Show();
    setcolor(15);
    settextstyle(BOLD_FONT,0,6);
    outtextxy(55+70*Geti(),340, num);
}

clNode::clNode():num(new char[4])
{
  //  cout<<  "clNode();\n";
}

clNode::clNode(int i0,int num0) : clCircle(i0), num(new char[4])
{
    Setnum(num0);
    //cout<< Geti()<<"  clNode(int x0, int y0, int num0);\n";
}

clNode::~clNode()
{
    delete [] num;
   // cout<<Geti()<<"  ~clNode();\n";
}
