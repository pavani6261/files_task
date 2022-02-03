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
    FILE *df, *fdes;
    sf=fopen("student2.txt","r");
    openFile(sf);
    df=fopen("dep2.txt","r");
    openFile(df);
    fdes=fopen("fileStudent.txt","w");
    openFile(fdes);

    printf("student details are:\n");
    fprintf(fdes,"student details are:\n\n");
    fprintf(fdes,"Id\tName\tScore\n");
    printf("-------------------\n");
    while(fscanf(sf,"%d\t%s\t%d",&a.s.id,&a.s.name,&a.s.score)!=EOF)
    {
        fprintf(fdes,"%d\t",a.s.id);
        fprintf(fdes,"%s\t",a.s.name);
        fprintf(fdes,"%d\t",a.s.score);
        fprintf(fdes,"\n");
    }
    printf("data added to the file\n");

    printf("department details are:\n");
    fprintf(fdes,"department details are:\n\n");
    fprintf(fdes,"Id\tName\n");
    printf("-------------------\n");
    while(fscanf(df,"%d\t%s",&a.d.code,&a.d.dName)!=EOF)
    {
        fprintf(fdes,"%d\t",a.d.code);
        fprintf(fdes,"%s\t",a.d.dName);
        fprintf(fdes,"\n");
    }
    printf("data added to the file\n");

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

