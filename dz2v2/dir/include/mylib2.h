//
// Created by kali on 11/7/21.
//

#ifndef DZ2V2_MYLIB2_H
#define DZ2V2_MYLIB2_H

#ifndef TEST_MYLIB_H
#define TEST_MYLIB_H

typedef struct
{
    int tup[4];

}tuple;

tuple* init();
double DestinationOfPoints(tuple* obj);
void cintup(tuple* obj,const int* a);

#endif

#endif //DZ2V2_MYLIB2_H
