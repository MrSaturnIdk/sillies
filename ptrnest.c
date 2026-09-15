/// Pointer nesting moment

#include <stdio.h>

int main(void) {
    int st = 15; /// Also the amount of times dereferenced

    int *p1 = &st;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    int *********p9 = &p8;
    int **********p10 = &p9;
    int ***********p11 = &p10;
    int ************p12 = &p11;
    int *************p13 = &p12;
    int **************p14 = &p13;
    int ***************p15 = &p14;

    printf("I was dereferenced %d times\n", ***************p15);
    return 0;
}
