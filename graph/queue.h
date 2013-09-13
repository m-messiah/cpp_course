#ifndef QUEUE_H //Esli imya otsutstvuet v preprocessore, to tekst budet rabotat`
#define QUEUE_H
struct knot {int x; knot* next;};
void _new_null (knot*& st);
bool _check_empty (knot*& st);
void _add_compon (knot*& st, int x);
void _read_compon (knot*& st, int& x);
void _del_compon (knot*& st);
void _destr (knot*& st);
#endif
