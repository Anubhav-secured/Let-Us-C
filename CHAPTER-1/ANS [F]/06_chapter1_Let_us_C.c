/***************    ANS[F](c)   ***************/
// paper size 
#include<stdio.h>
int main()
{
    int A0ht=1189,A0wd=841;
    int A1ht=A0wd,A1wd=A0ht/2;
    int A2ht=A1wd,A2wd=A1ht/2;
    int A3ht=A2wd,A3wd=A2ht/2;
    int A4ht=A3wd,A4wd=A3ht/2;
    int A5ht=A4wd,A5wd=A4ht/2;
    int A6ht=A5wd,A6wd=A5ht/2;
    int A7ht=A6wd,A7wd=A6ht/2;
    int A8ht=A7wd,A8wd=A7ht/2;
    printf("Size of A0 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A0ht,A0wd,A0ht,A0wd);
    printf("Size of A1 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A1ht,A1wd,A1ht,A1wd);
    printf("Size of A2 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A2ht,A2wd,A2ht,A2wd);
    printf("Size of A3 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A3ht,A3wd,A3ht,A3wd);
    printf("Size of A4 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A4ht,A4wd,A4ht,A4wd);
    printf("Size of A5 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A5ht,A5wd,A5ht,A5wd);
    printf("Size of A6 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A6ht,A6wd,A6ht,A6wd);
    printf("Size of A7 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A7ht,A7wd,A7ht,A7wd);
    printf("Size of A8 paper Height: %dmm Width: %dmm (%dmm X %dmm)\n\n ",A8ht,A8wd,A8ht,A8wd);

    
    return(0);
}