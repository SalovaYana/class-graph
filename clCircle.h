#ifndef CLCIRCLE_
#define CLCIRCLE_
#include "clDraw.h"

class clCircle : public clDraw
{
    public:
        clCircle();
        clCircle(int i);
        virtual ~clCircle();

        int Geti() { return i; }
        void Seti(int val) { i = val; }

        void Show();

        int i;
        const int y = 350;
        const int r = 20;

    protected:

    private:
};

#endif // CLCIRCLE_
