#include <stdio.h>
struct address
{
    char city[20];
    char state[20];
    int pincode;
};
struct student
{
    char name[20];
    int rollno;
    struct address addr;
};
int main()
{
    struct student s;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.rollno);
    printf("Enter city: ");
    scanf("%s", s.addr.city);
    printf("Enter state: ");
    scanf("%s", s.addr.state);
    printf("Enter pincode: ");
    scanf("%d", &s.addr.pincode);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollno);
    printf("Address: %s, %s, %d\n", s.addr.city, s.addr.state, s.addr.pincode);

    return 0;
}
