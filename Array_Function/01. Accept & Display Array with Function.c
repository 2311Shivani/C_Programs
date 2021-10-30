#include<stdio.h>
#include<conio.h>

void Display_Array(int Arr[],int size);

int main()
{
    int Num[7];

    Display_Array(Num,7);

    getch();
    return 0;
}

void Display_Array(int Arr[],int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n Value = %d.",Arr[i]);
    }

    return;
}
