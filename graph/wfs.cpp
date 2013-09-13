#include "graph.h"
#include "queue.h"
#include <iostream>
using namespace std;
void fwidth (apex* graf, int m, int v){
    knot *visited=0;
    int* mpv = new int [m];
    int kv=0;
    bool* mpr = new bool [m];
    int w;
    for (w=0; w<m; w++) mpr[w]=true;
    v--;
    mpr[v]=false;
    mpv[kv++]=v;
    _add_compon(visited,v);
    while(!_check_empty(visited)){
        _read_compon(visited,w);
        _del_compon(visited);
        apex *temp=graf[w].next;
        while (temp){
            if (mpr[temp->n]){
                mpr[temp->n]=false;
                _add_compon(visited,temp->n);
                mpv[kv++]=temp->n;
            }
            temp=temp->next;
        }
    }
    for(v=0; v<kv; v++) cout<<(mpv[v]+1)<<", ";
    cout<<endl;
    delete [] mpr;
    delete [] mpv;
}
