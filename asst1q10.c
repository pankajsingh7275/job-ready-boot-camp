#include<stdio.h>
#include<conio.h>
int main()
{
    int d,m,y;
    printf("ENTER DATE IN THE FORMAT DD/MM/YYYY  ");
    scanf("%d/%d/%d", &d,&m,&y);
    printf("Day-%d, Month-%d, Year-%d", d,m,y);
    getch();

}