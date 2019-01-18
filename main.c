#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lines;
    int loop;
    int choice;
    int arr[5];
    int machArr[5];
    char c;
    int i,j,r,f;
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
                for(i = 0; i < 7; i++){
                arr[i] = (rand()%46);
                }break;
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
                }break;
            case 3:
                for(i = 1;i < 7;i++){
                    printf("input %d th number between 1~45\n",i);
                    scanf("%d",&arr[i]);
                }break;
            }
//end of the switch

//start of comparison logic
printf("==========NOW YOUR LOTTO==========\n");
printf("%c | ",c);

switch(c){
case 'A': printf("Auto ");break;
case 'B': printf("Semi-Auto ");break;
case 'C': printf("Manual ");break;
}
for(j = 1;j<7;j++){printf("%d\t",arr[j]);}
//end of comparison logic
printf("this is the Lotto numbers");

machArr[0] = 23;
machArr[1] = 43;
machArr[2] = 20;
machArr[3] = 12;
machArr[4] = 42;
machArr[5] = 3;


printf("\n do you want to check your lotto?1 for yes; 2 for no.) \n");
scanf("%d",&f);
if(f == 1){
        printf("these are your lotto: ");
    for(r = 0;r < 7;r++){
       printf("%d \n",arr[r]);
    }
    printf("this are the numbers: ");
    for(i = 0;i < 7;i++){
       printf("%d \n",machArr[i]);
    }
}
//start of logic
        }

    }while(monitor == 0);

    return 0;
}
