
#include <gtest/gtest.h>
#include <gmock/gmock.h>
extern "C"
{
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "mylib2.h"
}

TEST(DestinationOfPoints,Testname)
{
tuple *obj=NULL;

DestinationOfPoints(obj);

}
TEST(DestinationOfPoints,test2)
{
tuple *obj=init();
int min = -128;
int max = 127;
int arr[4];
for(int i=0;i<4;i++)
{arr[i] = min + rand() % (max - min + 1);}

obj=init();
cintup(obj,arr);

double r=DestinationOfPoints(obj);
ASSERT_NE(r,NULL);
}
TEST(cintup,test1)
{
int min = -128;
int max = 127;
int arr[4];
for(int i=0;i<4;i++)
{arr[i] = min + rand() % (max - min + 1);}

tuple* obj=NULL;
cintup(obj,arr);
}

TEST(cintup,test2)
{
int min = -128;
int max = 127;
int arr[4];
for(int i=0;i<4;i++)
{arr[i] = min + rand() % (max - min + 1);}

tuple* obj=init();
cintup(obj,arr);
}
TEST(init,test4)
{
tuple* obj = init();
EXPECT_NE(obj, (void*)NULL);
free(obj);

}
