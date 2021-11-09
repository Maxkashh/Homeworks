#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
//Структура для кортежа
typedef struct
{
    int tup[4];

}tuple;

//Создание кортежа
tuple* init()
{
    tuple* obj = NULL;
    obj = (tuple*)malloc(sizeof(tuple));
    if(obj!=NULL) {

        return obj;
    } else
    {printf("%s","Error!"); return NULL;}
}

//Рассчет расстояния от точки до точки
double DestinationOfPoints(tuple* obj)
{
    if (obj != NULL) {
        double distance = sqrt(pow((obj->tup[0] - obj->tup[2]), 2) + pow((obj->tup[1] - obj->tup[3]), 2));
        return distance;
    }
    else
    { printf("%s", "Error! Points not detected!"); return 0;}

}

void cintup(tuple* obj,const int* a)
{
    if(obj!=NULL) {
        for (int i = 0; i < 4; ++i) {
            obj->tup[i] = a[i];
        }
    }
    else
        printf("%s","Error!!!");
}