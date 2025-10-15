#include <stdio.h>
struct car
{
    int carno;
    char name[10];
};
// how to access members
int main()
{
    struct car c1, c2;
    scanf("%d %s",&c1.carno,&c1.name);
    printf("%d %s",c1.carno,c1.name);
}