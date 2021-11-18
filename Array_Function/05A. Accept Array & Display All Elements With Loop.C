#include<stdio.h>
#include<conio.h>

void Accept_Element(int);
void Display_Element(int);

int main()
{

    int Num[7]={};

    Display_Element(Num,7);

    printf("\n Back To Main()\n");



    return;

}

void Display_Element(int Ele_Num)
{
    printf("\n Value of Element %d = %d.",Ele_Num+1,Num[Ele_Num]);

    return;
}
