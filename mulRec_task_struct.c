#include<stdio.h>
 struct student
    {
        int id;
        char name[20];
        int score;
    };
    struct department
    {
        int code;
        char dName[10];
    };
    struct admin
    {
        struct student s;
        struct department d;
    };

void main()
{

    struct admin a;
    FILE *sf;
    FILE *df;
    sf=fopen("student2.txt","r");
    openFile(sf);
    df=fopen("dep2.txt","r");
    openFile(df);
    printf("student details are:\n");

    while(fscanf(sf,"%d\t%s\t%d",&a.s.id,&a.s.name,&a.s.score)!=EOF)
    {
        printf("%d\t",a.s.id);
        printf("%s\t",a.s.name);
        printf("%d\t",a.s.score);
        printf("\n");
    }

    printf("department details are:\n");

    while(fscanf(df,"%d\t%s",&a.d.code,&a.d.dName)!=EOF)
    {
        printf("%d\t",a.d.code);
        printf("%s\t",a.d.dName);
        printf("\n");
    }
    printf("\n");

    fclose(sf);
    fclose(df);
}
void openFile(FILE *fp)
{
    if(fp == NULL) // if file in pointer fpt is null print file not created
    {
        printf("failed to open file");
        exit(1);
    }
}
