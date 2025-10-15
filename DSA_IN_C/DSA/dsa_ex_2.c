#include <stdio.h>
struct book
{
    int bookid;
    char a_name[50];
    char title[50];
};
int main()
{
    struct book b1, b2, b3;
    scanf("%d %s %s",&b1.bookid,&b1.a_name[50],&b1.title[50]);
    printf("%d %c %c",b1.bookid,b1.a_name[50],b1.title[50]);
    printf("%d\n",sizeof(struct book));
}