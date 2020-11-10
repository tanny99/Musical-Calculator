#include<iostream>
#include<cmath>
#include<windows.h>
#include<MMSystem.h>
using namespace std;
void add(float x,float y)
{
    cout<<"the result is=>>  "<<x+y<<endl;
}
void sub(float x,float y)
{
    cout<<"the result is=>>  "<<x-y<<endl;
}
void mul(float x,float y)
{
    cout<<"the result is=>>  "<<x*y<<endl;
}
void div(float x,float y)
{
    cout<<"the result is=>>  "<<x/y<<endl;
}
void sqroot(float x)
{
    cout<<"the result is=>>  "<<sqrt(x)<<endl;
}
void sq(float x)
{
    cout<<"the result is=>>  "<<x*x<<endl;
}
void power(float x,float y)
{
    cout<<"the result is=>>  "<<pow(x,y)<<endl;
}
void sinx(float x)
{
    cout<<"the result is=>>  "<<sin(x)<<endl;
}
void cosx(float x)
{
    cout<<"the result is=>>  "<<cos(x)<<endl;
}
void tanx(float x)
{
    cout<<"the result is=>>  "<<tan(x)<<endl;
}
void logx(float x)
{
    cout<<"the result is=>>  "<<log(x)<<endl;
    cout<<"the result is=>>  "<<log(x)<<endl;
}
void list()
{
    cout<<"press 1 to add"<<endl;
    cout<<"press 2 to subtract"<<endl;
    cout<<"press 3 to multiply"<<endl;
    cout<<"press 4 to divide"<<endl;
    cout<<"press 5 to square root"<<endl;
    cout<<"press 6 to square"<<endl;
    cout<<"press 7 to find upto power n"<<endl;
    cout<<"press 8 to sin"<<endl;
    cout<<"press 9 to cos"<<endl;
    cout<<"press 10 to tan"<<endl;
    cout<<"press 11 to log"<<endl;
    cout<<"press -1 to exit"<<endl;
}
int main()
{

    PlaySound(TEXT("a.wav"),NULL,SND_ASYNC|SND_LOOP);
    system("pause");
    int i;float x,y;
    system("COLOR 3F");
    while(i!=-1)
    {
        list();
        cin>>i;
        system("cls");
        switch(i)
        {
        case 1:
            cout<<"write the 1st no."<<endl;
            cin>>x;
            cout<<"write the 2nd no."<<endl;
            cin>>y;
            add(x,y);


            break;
        case 2:
            cout<<"write the 1st no."<<endl;
            cin>>x;
            cout<<"write the 2nd no."<<endl;
            cin>>y;
            sub(x,y);


            break;
        case 3:
            cout<<"write the 1st no."<<endl;
            cin>>x;
            cout<<"write the 2nd no."<<endl;
            cin>>y;
            mul(x,y);

            break;
        case 4:
            cout<<"write the 1st no."<<endl;
            cin>>x;
            cout<<"write the 2nd no."<<endl;
            cin>>y;
            div(x,y);

            break;
        case 5:
            cout<<"write the no."<<endl;
            cin>>x;
            sqroot(x);

            break;
        case 6:
            cout<<"write the no."<<endl;
            cin>>x;
            sq(x);

            break;
        case 7:
            cout<<"write the 1st no."<<endl;
            cin>>x;
            cout<<"write the 2nd no."<<endl;
            cin>>y;
            power(x,y);

            break;
        case 8:
            cout<<"write the no."<<endl;
            cin>>x;
            sinx(x);

            break;
        case 9:
            cout<<"write the no."<<endl;
            cin>>x;
            cosx(x);

            break;
        case 10:
            cout<<"write the no."<<endl;
            cin>>x;
            tanx(x);

            break;
        case 11:
            cout<<"write the no."<<endl;
            cin>>x;
            tanx(x);
            break;
        case -1:

            break;
        default:
            cout<<"entered wrong value!!"<<endl<<"please enter again";
            break;
        }
    }
    cout<<"press 9000 to say bye-bye"<<endl;
    cin>>i;
    if(i==9000)
    {
         system("W.png");
    }

}
