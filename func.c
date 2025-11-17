#include<stdio.h>
#define BOLDRED "\033[1;31m"
#define RESET   "\033[0m"
#define BOLDBLUE   "\033[1;34m"

#include "func.h"

void printarr(int x, int y, char arr[x][y])
{
    for(int i=0;i<24;i++)
    {
        if (i == 1 || i == 23)  
        {
        printf(BOLDRED"   ---------------------------------------------"RESET "\n");
        }
        
        for(int j=0;j<24;j++)
        {
            if(j==1 || j==23)
        {
            if(i!=0 && i!=23)
            {
            printf(BOLDBLUE"| "RESET);
            }
            else
            {
                printf("  ");
            }
        }

            if(i==0 && j ==0)
            {
                printf("  ");
                continue;
            }
            if(i==0 && j == 23)
            {
                printf("  ");
                continue;
            }
            if(i==23 && j==0)
            {
                printf("  ");
                continue;
            }
            if(i==23 && j==23)
            {
                printf("  ");
                continue;
            }
            if(arr[i][j]=='A')
            {
                printf(BOLDRED"%c "RESET,arr[i][j]);
            }
            else if(arr[i][j]=='B')
            {
                printf(BOLDBLUE"%c "RESET,arr[i][j]);
            }
            else
            {
                
                
                printf("%c ",arr[i][j]);
                
            }
            
        }

        printf("\n");
    }
    printf("\n\n\n");

}