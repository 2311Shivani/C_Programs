#include<stdio.h>
#include<conio.h>

void Display_Array(int Arr[],int size);

int main()
{
    int Num[7] = {10,20,30,40,50,60,70};

    Display_Array(Num,7);

    getch();
    return 0;
}

void Display_Array(int Arr[],int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n Value of Element %d = %d,",i+1,Arr[i]);
    }

    return;
}
