#include <stdio.h>
#include <conio.h>
#include <string.h>
int isLower(char c)
{
    return (c>='a'&&c<='z')?1:0;
}
int isUpper(char c)
{
    return (c>='A' && c<='Z')?1:0;
}
int toLower(char c)
{
    return c+=32;
}
int toUpper(char c)
{
    return c-=32;
}

int main()
{
    //khai bao bien
    char str[100];
    int i,n,key;

    do{
    //nhap vao 1 chuoi
    printf("\nInput String: ");
    gets(str);
    n = strlen(str);
    for(i=0;i<=n;i++)
    {
        //neu ki tu la chu hoa thi chuyen sang chu thuong va nguoc lai
        if(isLower(str[i]) == 1)
            str[i] = toUpper(str[i]);
        else if (isUpper(str[i])== 1)
                 str[i] = toLower(str[i]);
    }
    printf("Reverse string: %s",strrev(str));/* in ra sau do dao nguoc chuoi*/
    printf("\nPress enter to continue another reverse, ESC to exit;");
    key = getch();
    }while(key!=27);
    return 0;
}
