#include "clGraph.h"

void clGraph::Show()
{
    for(int i=0; i<N; i++)
    {
        node[i].Show();
    }

    for(int i=0; i<N; ++i)
        for(int j=0; j<N; ++j)
        {
            if (Mas[i*N+j]!=0)
            {
                clEdge e(&node[i],&node [j]);
                setcolor(1);
                e.Show();
            }
        }

}

void clGraph::Deykstra (int number)
{


cout<<"bjbjbjjbjbbj";
    int *way, minindex, u;

    int distance [N];
    bool visited [N];
    way=new int[N];

   ;
    for (int i=0; i<N; i++)
    {
        distance[i]=INT_MAX;
        visited[i]=false;
        way[i]=number;
    }
    way[number]=-1;
    distance[number]=0;

    for (int i=0; i<N-1; i++)
    {
        int min=INT_MAX;
        for (int i=0; i<N; i++){
       if (!visited[i] && distance[i]<=min)
            {
                min=distance[i];
                minindex=i;
            }
        }
        u=minindex;
        visited[u]=true;
        for (int i=0; i<N; i++){
            if (!visited[i] && Mas[N*u+i]!=INT_MAX && distance[u]!=INT_MAX &&
                    (distance[u]+Mas[N*u+i])<distance[i])

                distance[i]=distance[u]+Mas[N*u+i];
                way[i]=u;


                }
    }
    for(int i=0; i<N; ++i)
    {
        cout<<endl<<"======"<<way[i]<<endl;

    }
    //return distance;
    //cout<<"bjbjbjjbjbbj";
    setcolor(14);
    for(int i=0; i<N; ++i)
    {

        clEdge e(&node[i],&node[way[i]]);
        e.Show();
    }

}

//void clGraph::paint ()
//{
//    setcolor(RED);
//    for(int i=0; i<N; ++i)
//    {
//
//        clEdge e(&node[i],&node[distance[i]]);
//        e.Show();
//    }
//
//}

clGraph::clGraph()
{

}



clGraph::clGraph(int *a, int n): Mas(new int [n*n]), N(n),node(new clNode[n])
{

    for (int i =0; i<n; ++i)
        for (int j =0; j<n; ++j)
        {
            Mas[i*n+j]=a[i];
        }
//    cout<< "Введите количество вершин n" << endl;

    for(int i=0; i<n; ++i)
    {

        node[i].Setnum(i+1);
        node[i].Seti(i+1);
//        cout<< i<<endl;
//        itoa(i,node[i].num,10);


    }


}


clGraph::~clGraph()
{
    //dtor
}
