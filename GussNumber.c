/*�������ƣ�wydGussNumber
��  ��  ��������
��ϵ��ʽ��1458642276
��  ��  ��2017/07/05
˵  ��  ���ɼ�����������һ��������max number����answer,��Ҳ�һ�����֣��������������answer,
           �������big number��,���������С��answer,�������small number��,���������bingo!��*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    char a;
    int i;
    if ((fp=fopen("Readme.txt","r"))==NULL){
        printf("Cannot open file!\n");
        exit(0);
    }
    while((a=fgetc(fp))!=EOF) putchar(a);
    fclose(fp);

    if ((fp=fopen("jilu.txt","w"))==NULL)
    {
        printf("Can not open file!");
        exit(0);
    }

    int x,answer,choose,max;
    int count=1;
    printf("\n\n\n");
    printf("Plsase choose:\n");
    printf("1.begin 2.setting 0.end\n");
    scanf ("%d",&choose);
    srand( (unsigned)time( NULL ) );
    if(choose==1)
    {
        answer=rand()%100;
        printf("\n\n\n");
        printf("Please enter a number form 0 to 99:\n");
        scanf("%d",&x);
        fprintf(fp,"Please enter a number form 0 to 99:\n ");
        while(x!=answer)
        {
            if(x>answer)
                {
                    printf("Big Number\n");
                    fprintf(fp,"%3d Big Number\n",x);
                }
            else
                {
                    printf("Small Number\n");
                    fprintf(fp,"%3d Small Number\n",x);
                }
            count+=1;
            printf("Please enter a number form 0 to 99:\n");
            fprintf(fp,"Please enter a number form 0 to 99:\n ");
            scanf("%d",&x);
        }
        if(x==answer)
            printf("Bingo!\n");
        printf("You have played %d times!\n",count);
        fprintf(fp,"%d Bingo!\n",x);
        fprintf(fp,"You have played %d times!\n",count);
        fclose(fp);
    }
    else if(choose==2)
    {
        printf("Please set your max number:");
        scanf("%d",&max);
                answer=rand()%max;
        printf("\n\n\n");
        printf("Please enter a number form 0 to %d:\n",max);
        scanf("%d",&x);
        fprintf(fp,"Please enter a number form 0 to %d:\n",max);
        while(x!=answer)
        {
            if(x>answer)
                {
                    printf("Big Number\n");
                    fprintf(fp,"%3d Big Number\n",x);
                }
            else
                {
                    printf("Small Number\n");
                    fprintf(fp,"%3d Small Number\n",x);
                }
            count+=1;
            printf("Please enter a number form 0 to %d:\n",max);
            fprintf(fp,"Please enter a number form 0 to %d:\n",max);
            scanf("%d",&x);
        }
        if(x==answer)
            printf("Bingo!\n");
        printf("You have played %d times!\n",count);
        fprintf(fp,"%d Bingo!\n",x);
        fprintf(fp,"You have played %d times!\n",count);
        fclose(fp);
    }
    else if(choose==0)
	exit(0);
	else printf("false input!"); 
}
