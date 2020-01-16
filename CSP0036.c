#include<stdio.h>
#include<string.h>
#include<conio.h>
//ktra ki tu do co hay khong
int isAlpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}
//ham ky tu chu hoa
int isUpper(char c)
{
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
//ham ki tu chu thuong
char isLower(char c)
{
    if (isUpper(c) == 1)
        return c += 32;
    return c;
}

int main()
{
    //khai bao bien
    char str[100];
    int tanso[26]={0};
    int i,len;

    //nhap vao mot chuoi
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    //dem so lan xuat hien cua chua cai
    for(i = 0; i < len; i++)
    {
        if (isAlpha(str[i]) == 1)
        {
            if (isUpper(str[i]) == 1)
                str[i] = isLower(str[i]);
            tanso[str[i] - 'a']++;
        }
    }

    //in ra ngoai ket qua
    for(i = 0; i < 26; i++)
        if (tanso[i])
            printf("%8c: %d\n",i + 'a',tanso[i]);
    getchar();
    return 0;
}
