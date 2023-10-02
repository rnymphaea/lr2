#include <stdio.h>

#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"

#define MAX_SIZE 100


int main(){
        int index = 0;
        int arr[MAX_SIZE];
        char space = ' ';
        int num_case;

        scanf("%d", &num_case);

        while (index < MAX_SIZE && space ==  ' '){
                scanf("%d%c", &arr[index], &space);
                index++;
        }

        int size = index;

        switch(num_case)
        {
                case 0:
                printf("%d\n", max(arr, size));
                break;

                case 1:
                printf("%d\n", min(arr, size));
                break;

                case 2:
                printf("%d\n", diff(arr, size));
                break;

                case 3:
                printf("%d\n", sum(arr, size));
                break;

                default:
                printf("Данные некорректны");
        }

        return 0;
}

