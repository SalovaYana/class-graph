#include "clCircle.h"

void clCircle::Show()
{
circle(60+70*i, y, r);
}

clCircle::clCircle(int i0) :i(i0)
{
  //i = i0
   cout<<i<<"  clCircle(int i0);\n";
}

clCircle::clCircle()
{
    cout<<i<<"  clCircle();\n";
}

clCircle::~clCircle()
{
    cout<<i<<"  ~clCircle();\n";
}
