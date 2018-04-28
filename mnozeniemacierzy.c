#include <stdio.h>

void fillMatrix(int width,int height,double pointer[width][height]);
void drawMatrix(int width,int height,double pointer[width][height]);
void multiMatrix(int oneWidth,int heightwidth,int twoHeight,double onePointer[oneWidth][heightwidth],double twoPointer[heightwidth][twoHeight],double threePointer[oneWidth][twoHeight]);

int main() {
    int firstWidth, firstHeight, secondWidth, secondHeight;

    printf("MATRIX MULTIPLICATION\n\n");


    printf("Write the width of the first:  ");
    scanf("%d" , &firstWidth);
    printf("Write the height of the first: ");
    scanf("%d", &firstHeight);

    printf("\n");

    printf("Width of the second = height of the first.\n");
    secondWidth = firstHeight;
    printf("Write the height of the second: ");
    scanf("%d", &secondHeight);

    printf("\n");

    printf("First  matrix: %d x %d\n",firstWidth,firstHeight);
    printf("Second matrix: %d x %d\n",secondWidth,secondHeight);

    double  firstMatrix  [firstWidth] [firstHeight];
    double secondMatrix [secondWidth][secondHeight];
    double  multixMatrix  [firstWidth][secondHeight];

    fillMatrix(firstWidth,firstHeight,firstMatrix);
    drawMatrix(firstWidth,firstHeight,firstMatrix);

    fillMatrix(secondWidth,secondHeight,secondMatrix);
    drawMatrix(secondWidth,secondHeight,secondMatrix);

    multiMatrix(firstWidth,firstHeight,secondHeight,firstMatrix,secondMatrix,multixMatrix);

    drawMatrix(firstWidth,secondHeight,multixMatrix);
    return 0;
}


void fillMatrix(int width,int height,double pointer[width][height]){
    int i,j;

    for (i=0;i<height;i++){
        printf("| ");
        for (j=0;j<width;j++){
            scanf(" %lf",&pointer[j][i]);
            printf("   ");
        }
        printf("\n");
    }
}

void drawMatrix(int width,int height,double pointer[width][height]){
    int i,j;

    for (i=0;i<height;i++){
        printf("| ");
        for (j=0;j<width;j++){
            printf("%lf", pointer[j][i]);
            printf("   ");
        }
        printf("|\n");
    }
}

void multiMatrix(int oneWidth,int heightwidth,int twoHeight,double onePointer[oneWidth][heightwidth],double twoPointer[heightwidth][twoHeight],double threePointer[oneWidth][twoHeight]){
    int i,j,k;

    for (i=0;i<oneWidth;i++){

        for (j=0;j<twoHeight;j++){

            for (k=0;k<heightwidth; k++){
                threePointer[i][j]+= onePointer[i][k] + twoPointer[k][j];
            }
        }

    }
}
