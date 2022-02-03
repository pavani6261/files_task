//#include<stdio.h>
// struct student
//    {
//        int id;
//        char name[20];
//        int score;
//    };
//    struct department
//    {
//        int code;
//        char dName[10];
//    };
//    struct admin
//    {
//        struct student s;
//        struct department d;
//    };
//
//void main()
//{
//
//    struct admin a;
////    struct admin *ptr;
////    ptr=&a;
//    FILE *sf;
//    FILE *df;
//    sf=fopen("student2.txt","r");
//    openFile(sf);
//    df=fopen("dep2.txt","r");
//    openFile(df);
////    int n;
////    printf("enter number of records to display:\n");
////    scanf("%d",&n);
//    printf("student details are:\n");
////    int i=0;
//    while(fscanf(sf,"%d\t%s\t%d",&a.s.id,&a.s.name,&a.s.score)!=EOF)
//    {
//        printf("%d\t",a.s.id);
//        printf("%s\t",a.s.name);
//        printf("%d\t",a.s.score);
//        printf("\n");
//    }
//
//    printf("department details are:\n");
//
//    while(fscanf(df,"%d\t%s",&a.d.code,&a.d.dName)!=EOF)
//    {
//        printf("%d\t",a.d.code);
//        printf("%s\t",a.d.dName);
//        printf("\n");
//    }
//    printf("\n");
//    rewind(sf);
//    rewind(df);
//    searchRecord(a,sf);
//    fclose(sf);
//    fclose(df);
//}
//void openFile(FILE *fp)
//{
//    if(fp == NULL) // if file in pointer fpt is null print file not created
//    {
//        printf("failed to open file");
//        exit(1);
//    }
//}
//void searchRecord(struct admin a,FILE *f)
//{
//    int i=0;
//    int d,flag=0;
//    printf("enter id to search\n");
//    scanf("%d",&d);
//    while((fscanf(f,"%d\t%s\t%d",&a.s.id,&a.s.name,&a.s.score))!=EOF)
//    {
//
//        if(a.s.id==d)
//        {
//            printf("record found at |%d| line\n",i+1);
//            flag=1;
//            break;
//        }
//        i++;
//    }
//    if(flag==0)
//    {
//        printf("record not found\n");
//    }
//
//}
//
//
