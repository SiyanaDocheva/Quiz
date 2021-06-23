#include <iostream>
using namespace std;
int main ()
{
    int result=0, a1, a2, a3, a4, a5 ,a6, a7, a8, a9, a10;

    cout<<"How well do you know The Vampire Diaries cast and plot?\n\n"<<endl;
    cout<<"How old was Stefan when he was turned into a vampire?"<<endl;
    cout<<"(1) 17 (2) 18\n"<<endl;
    cout<<"Your answer: \n";
    cin>>a1;
     if (a1>2 || a1<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a1;
    }
     if (a1=1) {result=result+1;}
     else {result=result;}

    cout<<"How old was Damon when he was turned into a vampire?"<<endl;
    cout<<"(1) 21 (2) 25\n"<<endl;
    cout<<"Your answer: \n";
    cin>>a2;
     if (a2>2 || a2<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a2;
    }
     if (a2=2) {result=result+1 ;}
 else  {result=result;}

    cout<<"Which Salvatore brother met Elena first?"<<endl;
    cout<<"(1) Stefan (2) Damon\n"<<endl;
    cout<<"Your answer: \n";
    cin>>a3;
     if (a3>2 || a3<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a3;
    }
     if (a3=2) {result=result+1;}
 else  {result=result;}

     cout<<"What is Kai?"<<endl;
    cout<<"(1) Sociopath (2) Psychopath \n"<<endl;
    cout<<"Your answer: \n";
    cin>>a4;
     if (a4>2 || a4<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a4;
    }
     if (a4=1) {result=result+1 ;}
else  {result=result;}
     cout<<"Who was Elena's first boyfriend?"<<endl;
    cout<<"(1) Matt (2) Stefan \n"<<endl;
    cout<<"Your answer: \n";
    cin>>a5;
     if (a5>2 || a5<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a5;
    }
     if (a5=2) {result=result+1 ;}
 else {result=result;}

     cout<<"Who killed Tyler Lockwood's mother?"<<endl;
    cout<<"(1) Elijah (2) Klaus \n"<<endl;
    cout<<"Your answer: \n";
    cin>>a6;
     if (a6>2 || a6<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a6;
    }
     if (a6=2) {result=result+1 ;}
else {result=result;}

    cout<<"What is the name of the first female doppelganger ?"<<endl;
    cout<<"(1) Ammara (2) Tattia\n"<<endl;
    cout<<"Your answer: \n";
    cin>>a7;
     if (a7>2 || a7<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a7;
    }
     if (a7=1) {result=result+1 ;}
 else {result=result;}

    cout<<"What is the name of Katherine's daughter?"<<endl;
    cout<<"(1) Nadia (2) Natalia\n"<<endl;
    cout<<"Your answer: \n";
    cin>>a8;
     if (a8>2 || a8<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a8;
    }
     if (a8=1) {result=result+1 ;}
else {result=result;}
      cout<<"What is the name of the bridge where the Gilbert family died?"<<endl;
    cout<<"(1) Wickery Bridge (2) Wilckery Bridge\n"<<endl;
    cout<<"Your answer: \n";
    cin>>a9;
     if (a9>2 || a9<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a9;
    }
     if (a9=1) {result=result+1 ;}
 else {result=result;}

    cout<<"What was Elena's dream job"<<endl;
    cout<<"(1) journalist (2) doctor \n"<<endl;
    cout<<"Your answer: \n";
    cin>>a10;
     if (a10>2 || a10<1)
    {
        cout<<"This number does not match an answer, try again. Your choice is: "<<endl;
         cin>>a10;
    }
     if (a10=2) {result=result+1;}
 else {result=result;}

     cout<<"Your result is "<<result<<" and you are a "<<result<<"0% TVD fan"<<endl;

    return 0;
}
