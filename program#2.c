#include < stdio.h >
#include < conio.h >

void main()

{
     int score;
    printf("Input score=");
    scanf("%d",&score);

    if(score>=0&&score<=100) 
     { 
         if(score>=80)
            printf("score grade A",score);

        else if(score>=75)
            printf("score grade B+",score);

        else if(score>=70)
            printf("score grade B",score);

        else if(score>=65)
            printf("score grade C+",score);

        else if(score>=60)
            printf("score grade C",score);

        else if(score>=55)
            printf("score grade D+",score);

        else if(score>=50)
            printf("score grade D",score);

        else
            printf("score grade F",score);
    }
    else
        printf("&d error!!!",score);
    return 0;
}