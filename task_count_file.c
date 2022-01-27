#include<stdio.h>
void main()
{
    FILE *fptr,*fp2;
    char ch;
    int count=0,w=0,l=0,rtm;
    char filename[20];
    printf("enter the file name\n");
    scanf("%s",filename);
    fptr=fopen(filename,"w");
    if(fptr==NULL)
    {
        printf("failed to create file");
        exit(1);
    }
    fp2=fopen("ColMarginExercise.txt","r");

    if(fp2==NULL)
    {
        printf("failed to find file");
        exit(2);
    }
    printf("enter the right margin:\n");
    scanf("%d",&rtm);
    int i=0;
    while((ch=fgetc(fp2)) != EOF)
    {
        if(i<rtm)
        {
            fputc(ch,fptr);
            i++;
        }
        else if(i==rtm)
        {
            while(i==rtm && ch!=' ')
            {
                fputc(ch,fptr);
                ch=getc(fp2);
                if(ch==' ' || ch=='\n')
                    break;
            }
            fputc('\n',fptr);
            i=0;
        }
        else
        {
            fputc('\n',fptr);
            i=0;
        }
    }
    fclose(fptr);
    fclose(fp2);

    printf("added text to the file\n");
    fptr = fopen(filename,"r"); //open the file in read mode
    while((ch=fgetc(fptr))!=EOF)
    {
        count++;
        if(ch==' '|| ch=='\t'|| ch == '\n')
            w++;
        if(ch=='\n')
            l++;

    }
    fclose(fptr);
    printf("number of words in the file are %d\n",w);
    printf("number of lines in the file are %d\n",l);
    printf("characters in the file are %d\n",count);
}
