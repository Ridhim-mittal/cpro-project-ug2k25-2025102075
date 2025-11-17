#include<stdio.h>
#define BOLDRED "\033[1;31m"
#define RESET   "\033[0m"
#define BOLDBLUE   "\033[1;34m"
#define BOLDCYAN "\033[1;36m"
#define BOLDMAGENTA "\033[1;35m"

#define CLEAR "\033[2J\033[H"

#include "func.h"

int main()
{

    printf(CLEAR);

   printf("\n");
    printf("%s╔═══════════════════════════════════════════════════════════════╗\n", BOLDCYAN);
    printf("║                                                               ║\n");
    
    // ASCII Art
    printf("║            %sTTTTT  W     W  IIIII  X   X  TTTTT%s                ║\n", BOLDMAGENTA, BOLDCYAN);
    printf("║              %sT    W     W    I    X   X    T%s                  ║\n", BOLDMAGENTA, BOLDCYAN);
    printf("║              %sT    W  W  W    I     X X     T%s                  ║\n", BOLDMAGENTA, BOLDCYAN);
    printf("║              %sT    W W W W    I      X      T%s                  ║\n", BOLDMAGENTA, BOLDCYAN);
    printf("║              %sT    WW   WW    I     X X     T%s                  ║\n", BOLDMAGENTA, BOLDCYAN);
    printf("║              %sT    W     W  IIIII  X   X    T%s                  ║\n", BOLDMAGENTA, BOLDCYAN);
    
    // Bottom border
    printf("║                                                               ║\n");
    printf("╚═══════════════════════════════════════════════════════════════╝%s\n", RESET);
    printf("\n");
    

    printf(BOLDCYAN"\n                A   T E R M I N A L   G A M E\n\n\n\n\n"RESET);





    char arr[24][24];
    for(int i=0;i<24;i++)
    {
        for(int j=0;j<24;j++)
        {
            arr[i][j]='.';
        }
    }
    printarr(24,24,arr);

     int flaga=0;
     int flagb=0;

    while(1)
    {
        int resigna=0;

        int bra = 1;
        while (bra)
        {
            printf(BOLDRED"PLAYER 1'S TURN !!!\n"RESET);
            printf("ENTER INDEX OF POSITION WHERE YOU WANNA PLACE (-1,-1 to resign game):");
            int x, y;
            scanf("%d,%d", &x, &y);
            if(x==-1&&y==-1)
            {
                printf(BOLDBLUE"PLAYER 1 RESIGNED!!!\nPLAYER 2 WON!!!!\n"RESET);
                resigna=1;
                break;

            }
            
            else if (y == 0 || y == 23 || arr[x][y] != '.' || x>23 || y>23)
            {
                printf("INVALID CHOICE PICK AGAIN\n\n");
               
            }
            
            else
            {
                printf(CLEAR);
                arr[x][y] = 'A';
                printarr(24, 24, arr);
                bra=0;
            }
        }
         if(resigna==1)
        {
        break;
        }
        
    

    
    int countabeg =0;
    int countaend=0;
   
    for(int i=0;i<24;i++)
    {
        if(arr[0][i]=='A')
        {
            countabeg++;

        }
        if(arr[23][i]=='A')
        {
            countaend++;
        }

        if(countaend==1&&countabeg==1&&flaga==0)
        {
            printf(BOLDRED"A WOULD WIN HERE AFTER LINKING LOGIC IS DONE(END EVAL) AND THERE IS LINK FROM STARTING A TO END A\n "RESET);
            flaga=1;
            break;
        }
        
    }

    int resignb=0;

    int brb = 1;
        while (brb)
        {
            printf(BOLDBLUE"PLAYER 2'S TURN !!!\n"RESET);
            printf("ENTER INDEX OF POSITION WHERE YOU WANNA PLACE (-1,-1 to resign):");
            int x, y;
            scanf("%d,%d", &x, &y);
            if(x==-1 && y==-1)
            {
                printf(BOLDRED"PLAYER 2 RESIGNED!!!\nPLAYER 1 WON!!!!\n"RESET);
                resignb=1;
                break;

            }
            else if (x == 0 || x == 23 || arr[x][y] != '.' || x>23 || y>23)
            {
                printf("INVALID CHOICE PICK AGAIN\n\n");
               
            }
            else
            {
                printf(CLEAR);
                arr[x][y] = 'B';
                printarr(24, 24, arr);
                brb=0;
                
            }
        }
      
    if(resignb==1)
    {
        break;
    }
    


    int countbbeg =0;
    int countbend=0;
    
    for(int i=0;i<24;i++)
    {
        if(arr[i][0]=='B')
        {
            countbbeg++;

        }
        if(arr[i][23]=='B')
        {
            countbend++;
        }

        if(countbend==1&&countbbeg==1 && flagb==0)
        {
            printf(BOLDBLUE"B WOULD WIN HERE AFTER LINKING LOGIC IS DONE(END EVAL) AND THERE IS LINK FROM STARTING B TO END B \n"RESET);
            flagb=1;
            break;
        }
        
    }
   



}

}