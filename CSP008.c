#include<string.h>
#include<stdio.h>
#include<conio.h>
#define MAX 100

//day la ham se dem cac ki tu xuat hien trong mang!
void onetime(char str[])
{
    //khai bao bien
    int i,j, dem = 0;
    char kytu;
    for(i=0;i<strlen(str);i++)
    {
        kytu=str[i];
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]==kytu)
            {
                dem+=1;
            }
        }
        if(dem==1)
        printf("%c\t",str[i]);/* khi in ra se them khoang trong vao de du 1 block la 8 ki tu!*/
        dem =0;
    }
}

int main()
{
    int choice;
    do
    {
    char str[100];
    printf("\nPlease enter a string: ");
    gets(str);
    printf("Found characters: ");
    onetime(str);
    printf("\nDo you want to continue or Press Esc to exit ");
    choice = getch();
    }while(choice!=27);
    return 0;

}
