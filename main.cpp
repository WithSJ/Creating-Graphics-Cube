#include <iostream>
#include<graphics.h>

using namespace std;

int ShiftX=0;
int ShiftY=0;

void ShiftCube();
void CreateCube();
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    s:
    CreateCube();
    ShiftCube();
    cleardevice();
    goto s;
    getch();
    closegraph();
        return 0;
}
void CreateCube()
{   //         X  , Y
    int P1[]={100 + ShiftX,200 + ShiftY};
    int P2[]={300 + ShiftX,200 + ShiftY};
    int P3[]={380 + ShiftX,150 + ShiftY};
    int P4[]={180 + ShiftX,150 + ShiftY};
    int P5[]={100 + ShiftX,400 + ShiftY};
    int P6[]={300 + ShiftX,400 + ShiftY};
    int P7[]={380 + ShiftX,350 + ShiftY};
    int P8[]={180 + ShiftX,350 + ShiftY};

    rectangle(P1[0],P1[1],P6[0],P6[1]);
    rectangle(P4[0],P4[1],P7[0],P7[1]);

    line(P1[0],P1[1],P4[0],P4[1]);
    line(P6[0],P6[1],P7[0],P7[1]);

    line(P2[0],P2[1],P3[0],P3[1]);
    line(P5[0],P5[1],P8[0],P8[1]);
}
void ShiftCube()
{
    int Enter_Key;
    int x=0,y=0;
    cout<<"----Shift Cube----"<<endl;
    cout<<" (1) Shift X Axis \n (2) Shift Y Axis "<<endl;
    cout<<"Enter : ";
    cin >> Enter_Key;
    switch(Enter_Key)
    {
    case 1: cout<<"Enter X Axis Value : ";
            cin>>x;
            ShiftX +=x;
            break;
    case 2: cout<<"Enter Y Axis Value : ";
            cin>>y;
            ShiftY +=y;
            break;
    }
}
