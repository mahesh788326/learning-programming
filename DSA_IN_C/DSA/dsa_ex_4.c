#include <stdio.h>
struct Student
{
    char Name[20];
    char Email[20];
    char rollno[20];
    int phone_no;
    char address[20];
};
int main()
{
    struct Student s1,s2,s3,s4,s5;
    scanf("%d %s %s %s %s",&s1.phone_no,&s2.Name,&s3.Email,&s4.rollno,&s5.address);
    printf("%d %s %s %s %s",s1.phone_no,&s2.Name,&s3.Email,&s4.rollno,&s5.address);
    // printf("%d\n",sizeof(struct Student));
    for ( int i = 0; i < 2; i++)
    {
       scanf("%d %s %s %s %s",&s1.phone_no,&s2.Name,&s3.Email,&s4.rollno,&s5.address);
    }
    for ( int i = 0; i < 2; i++)
    {
       printf("%d %s %s %s %s",s1.phone_no,&s2.Name,&s3.Email,&s4.rollno,&s5.address);
    }  
}