/*Min & Max of 1D Array*/



#include <stdio.h>
int minArray(int num ,int *array);
int maxArray(int num ,int *array);
int main() {
    int num, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    
    int array[num];
    
    printf("Enter elements in the array:\n");
    for (i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }
    
   int result = minArray( num , array);
   int result2 = maxArray( num , array);
    
    printf("Minimum value: %d\n", minArray( num , array));
    printf("Maximum value: %d\n", maxArray( num , array));
    
    return 0;
}
int minArray(int num ,int *array){
    int min = array[0];
     for (int i = 1; i < num; i++) {
        if (array[i] < min) {
            min = array[i];
        }
       
    }
    return min;
}
int maxArray(int num ,int *array){
    int max = array[0];
     for (int i = 1; i < num; i++) {
        if (array[i] > max) {
            max = array[i];
        }
       
    }
    return max;
}
