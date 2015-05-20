#include<stdio.h>

int main() {
    
    int A[5] = {5,2,3,1,4};
    int i = 0;
    int key;
    int j, k;
    for(j = 1; j < 5;j++)
       {   
            key = A[j];
            i = j - 1;

            while(i >= 0 && A[i] > key) {
                A[i+1] = A[i];
                i = i - 1;
            }
        A[i+1] = key;
        }

    for(k = 0; k < 5; k++) {
        printf("%d\n", A[k]);
    }
}
