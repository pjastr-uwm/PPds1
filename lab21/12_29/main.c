#include <stdio.h>
#include <stdlib.h>

void snkPrint(int n, int m, int ** tab){
    int top=0, bottom =n-1, left=0, right =m-1;
    int direction=0;
    while(left<= right && top <=bottom){
        if (direction ==0){
            for(int j=left; j<=right;j++){
                printf("%d ", tab[top][j]);
            }
            top++;
            direction++;
        }
        else if (direction ==1){
            for(int i=top;i<=bottom;i++){
                printf("%d ", tab[i][right]);
            }
            right--;
            direction++;
        }
        else if (direction ==2){
            for(int j=right; j>=left;j--){
                printf("%d ", tab[bottom][j]);
            }
            bottom--;
            direction++;
        }
        else if (direction ==3){
            for(int i=bottom;i>=top;i--){
                printf("%d ", tab[i][left]);
            }
            left++;
            direction = 0;
        }
    }
}

int main()
{
    int ** tab = malloc(4*sizeof(int*));
    tab[0]= malloc(3*sizeof(int));
    tab[1]= malloc(3*sizeof(int));
    tab[2]= malloc(3*sizeof(int));
    tab[3]= malloc(3*sizeof(int));
    tab[0][0] =  1; tab[0][1] =  2; tab[0][2] =  3;
    tab[1][0] =  0; tab[1][1] = -5; tab[1][2] =  8;
    tab[2][0] =  9; tab[2][1] =  8; tab[2][2] = -2;
    tab[3][0] = -3; tab[3][1] =  5; tab[3][2] =  4;
    snkPrint(4,3,tab);
    return 0;
}
