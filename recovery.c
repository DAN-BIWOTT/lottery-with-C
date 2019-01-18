
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lines;
    int loop;
    int choice;
    int arr[5];
    char c;
    int i,j;
    int monitor = 0;
    int secondChoice = 1;
    do{
        printf("============================================\n");
        printf("Hello this is Market Minguinho Lotto!\n");
        printf("How many lines to play?(1~5)\n");
        printf("============================================\n");

        scanf("%d",&lines);

        if(lines < 6 && lines != 0){
            monitor = 1;
//beginning of switch
        switch(lines){
            case 1: c = 'A';break;
            case 2: c = 'B';break;
            case 3: c = 'C';break;
            case 4: c = 'D';break;
            case 5: c = 'E';break;
        }


        printf("==============NOW YOUR LOTTO================\n");
        printf("============================================\n");
        printf("%c line:: which way do you want?\n",c);
        printf("1. Auto\n");
        printf("2. Semi-auto\n");
        printf("3. Manual\n");
        printf("============================================\n");
        scanf("%d",&choice);

            switch(choice){
            case 1:
                for(i =0; i < 6; i++){
                arr[i] = (rand()%46);
                }
            case 2:
                do{
                //this is the manual part of case 2
                printf("How many numbers do you want to chose?(1~6)\n");
                scanf("%d",&loop);
                if(loop < 7){//if the choice in the do while loop is greater than 7, this line executes
                        for(c = 1;c <= loop; c++){
                        printf("input %d th number between 1~45\n",c);
                        scanf("%d",&arr[c]);
                        }break;
                    }
                    else{
                secondChoice = 0;
                }
                }while(secondChoice == 0);

                //this is the automatic section of case 2
                for(i = (loop + 1); i < 6; i++){
                arr[i] = (rand()%46);
                }
            case 3:
                for(i = 1;i < 7;i++){
                    printf("input %d th number between 1~45\n",i);
                    scanf("%d",&arr[i]);
                }
            }
//end of the switch

//start of comparison logic
printf("==========NOW YOUR LOTTO==========\n");
printf("%c |",c);switch(c){
case 'A': printf("Auto");
case 'B': printf("Semi-Auto");
case 'c': printf("Manual");
}
for(j = 1;j<7;j++){printf("%d\t",arr[j]);}


//end of comparison logic
        }

    }while(monitor == 0);

    return 0;
}
