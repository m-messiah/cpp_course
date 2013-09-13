#include "queue.h"
#include "width.h"
//struct knot {int x; knot* next};
void _new_null (knot*& st){st=0;}
bool _check_empty (knot*& st){return st==0;}
void _add_compon (knot*& st, int x) {
    knot* us= new knot;
    us->x=x;
    us->next=0;
    if (!st) st=us;
    else {
        knot* r=st;
        while (r->next) r=r->next;
        r->next=us;
    }
}
void _read_compon (knot*& st, int& x){x=st->x;}
void _del_compon (knot*& st){
    knot* us = st;
    st=st->next;
    delete us;
}
void _destr (knot*& st){
    while (!_check_empty (st)) _del_compon(st);
}
