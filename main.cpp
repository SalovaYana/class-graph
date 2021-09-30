
#include "clGraph.h"
void f(clDraw *q)
{
    q->Show();
}
int main()
{
//    int t []={0,1,2,
//              1,0,0,
//              2,0,0};

setlocale(LC_ALL,"Rus");
    int SIZE;
    cout << "¬ведите размер массива." << endl;
    cin>> SIZE;

    int arr[SIZE][SIZE];
    int temp;
    for (int i = 0; i < SIZE; ++i)
    {
        arr[i][i] = 0;
        for (int j = i + 1; j < SIZE; ++j)
        {
            cout << "¬ведите рассто€ние от " << i + 1 <<" до "<< j + 1 <<" вершины :";
            cin >>temp;
            arr[i][j] = temp;
            arr[j][i] = temp;
        }
    }
    int k[SIZE*SIZE];
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            k[i*SIZE+j] = arr[i][j];
        }
    }


clGraph q(k,SIZE);
//   a.Seti(3);
//   a.Setnum(55);




    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm,"");


    q.Show();
    q.Deykstra(1);
    //a.Show();
//    a.paint();

    readkey();
    closegraph();
    return 0;
}
