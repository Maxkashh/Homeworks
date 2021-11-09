//
// Created by kali on 11/6/21.
//

#ifndef DZ2_MYLIB_H
#define DZ2_MYLIB_H

typedef struct
{
    int tup[4];

}tuple;

tuple* init();
double DestinationOfPoints(tuple* obj);
void cintup(tuple* obj,const int* a);
#endif //DZ2_MYLIB_H
