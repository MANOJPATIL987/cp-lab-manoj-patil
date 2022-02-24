#include<stdio.h>
#include<string.h>
struct student 
{
    int rnumber;
    char name[20];
    int marks;
    char grade;
}
stud[60];
void main()
{
    int i,n;
    float sum=0,avg=0;
    printf("enter the no of students ");
    scanf("%d",&n);
    printf("\nenter the roll no name maks and grade of student ");
    for (i=1;i<=n;i++)
    {
        printf("\n student %d details \n",i);
        scanf("%d",&stud[i].rnumber);
        scanf("%s",&stud[i].name);
        scanf("%d",&stud[i].marks);
        scanf("%c",&stud[i].grade);
        fflush(stdin);
        stud[i].grade=getchar();
        sum+=stud[i].marks;
    }
    avg=sum/n;
    printf("\n average marks:%f",avg);
    printf("\n students details:");
    printf("\n roll no\tname\tmarks\tgrade");
    for(i=1;i<=n;i++)
    printf("\n%d\t\t%s\t%d\t%c\t",stud[i].rnumber,stud[i].name,stud[i].marks,stud[i].grade);
    printf("\ndettails of students who scored above average marks \n");
    for(i=1;i<=n;i++)
    {
        if(stud[i].marks>=avg)
        printf("\n%d\t\t%s\t%d\t%c\t",stud[i].rnumber,stud[i].name,stud[i].marks,stud[i].grade);
    }
    printf("\n detailsof students who scored below average marks \n");
    printf("\nroll no\tname\tmarks\tgrade");
      for(i=1;i<=n;i++)
    {
        if(stud[i].marks<avg)
        printf("\n%d\t\t%s\t%d\t%c\t",stud[i].rnumber,stud[i].name,stud[i].marks,stud[i].grade);
    }
}