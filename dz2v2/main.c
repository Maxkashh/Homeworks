
#include <malloc.h>
#include <stdlib.h>
#include <math.h>
#include "dir/include/mylib2.h"
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
int main() {
    clock_t start = clock();
    //Заполение массива рандомными значениями от -128 до 127
    int min = -128;
    int max = 127;
    //Выделение памяти на куче 100Мб
    int* arr = (int*)malloc(13107200 * sizeof(int));
    if(arr!=NULL) {
        for (int i = 0; i < 13107200; ++i) {
            arr[i] = min + rand() % (max - min + 1);
        }
    }

    tuple* point = NULL;


    double sum_of_dist = 0;
    double res = 0;
    //Выделение памяти под массив индексов= количеству кортежей
    int *temp;
    temp = (int*)malloc(3276800 * sizeof(int));

    //Инициализация массива индексов для создания кортежей
    if(temp!=NULL   ) {
        for (int i = 0, j = 0; i < 13107200, j < 3276800; ++j, ++i) {
            if (i = i + 3) {
                temp[j] = i;
            }

        }
    }
    point = init();
    //Передача кортежа в функцию с последующим рассчетом расстояние между точками и суммированием общего расстояния
    int buff[4];
    int pid = fork();
    switch(pid) {
        case -1:
            perror("fork");
            return -1;
        case 0:
            // Child

            for (int i = 0, j = 0, c = 0; i < 13107200, j < 3276800;) {
                while (i <= temp[j])
                {
                    buff[c] = arr[i];
                    c++;
                    i++;
                }

                cintup(point,buff);


                res = DestinationOfPoints(point);

                sum_of_dist += res;

                j++;
                c = 0;



            }
             //printf("%f", sum_of_dist);
            //Очистка памяти
            free(temp);


            free(point);
            free(arr);

            return 13;
        default: {
            // Parent
            int status;
            waitpid(pid, &status, 0);
           printf("exit normally? %s\n", (WIFEXITED(status) ? "true" : "false"));
        // printf("child exitcode = %i\n", WEXITSTATUS(status));

            break;
        }
    }




    clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000.0 / CLOCKS_PER_SEC;

    printf("Time elapsed in ms: %f", elapsed);

}