#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int choice;
  cout<<"\n WELCOME TO THE NUMBER GUESSING GAME !!!!!!!!!!!!!!!!!!!! ";
  cout<<"\n";
  cout<<"\n ENTER THE DIFFICULTY LEVEL YOU WANT ";
  cout<<"\n";
  cout<<"\n 1.EASY";
  cout<<"\n 2.MEDIUM";
  cout<<"\n 3.DIFFICULT";

    cin>>choice;

clrscr();

if(choice==1)
{
cout<<"\n YOU HAVE CHOSEN THE EASY LEVEL MAY YOU WIN ";
cout<<"\n";
  randomize();
  int tries=0,numguess,compgen,score=0;
  compgen=random(50-1+1)+1;
  do
  {
  cout<<"\n enter the number guessed ";
  cin>>numguess;

   if(numguess>compgen)
   {
   cout<<"\n IT'S TOO HIGH DUDE ";
   cout<<"\n TRY AGAIN";
   }

     if(numguess<compgen)
     {
     cout<<"\n IT'S TOO LOW DUDE ";
     cout<<"\n TRY AGAIN ";
     }

        if(numguess==compgen)
        {
        cout<<"\n YOU NAILED IT AWESOME ";
        score+=10;
        cout<<"\n YOUR SCORE IS "<<score;
        }

        tries++;

   }while(tries<=9);


   if(tries>9)
   {
   cout<<"\n  YOU RAN OUT OF THE TRIES SORRY NEXT TIME ";
   }

}

else if(choice==2)
{
cout<<"\n YOU HAVE CHOSEN THE MEDIUM LEVEL MAY YOU WIN ";
cout<<"\n";
  randomize();
  int tries=0,numguess,compgen,score=0;
  compgen=random(100-1+1)+1;
  do
  {
  cout<<"\n enter the number guessed ";
  cin>>numguess;

   if(numguess>compgen)
   {
   cout<<"\n IT'S TOO HIGH DUDE ";
   cout<<"\n TRY AGAIN";
   }

     if(numguess<compgen)
     {
     cout<<"\n IT'S TOO LOW DUDE ";
     cout<<"\n TRY AGAIN ";
     }

        if(numguess==compgen)
        {
        cout<<"\n YOU NAILED IT AWESOME ";
        score+=10;
        cout<<"\n YOUR SCORE IS "<<score;
        }

        tries++;

   }while(tries<=8);


   if(tries>8)
   {
   cout<<"\n  YOU RAN OUT OF THE TRIES SORRY NEXT TIME ";

   }

}

if(choice==3)
{
 cout<<"\n YOU HAVE CHOSEN THE DIFFICULT LEVEL YOU ARE GUTTSY !!!! ";
 cout<<"\n";


  randomize();
  int tries=0,numguess,compgen,score=0;
  compgen=random(150-1+1)+1;
  do
  {
  cout<<"\n enter the number guessed ";
  cin>>numguess;

   if(numguess>compgen)
   {
   cout<<"\n IT'S TOO HIGH DUDE ";
   cout<<"\n TRY AGAIN";
   }

     if(numguess<compgen)
     {
     cout<<"\n IT'S TOO LOW DUDE ";
     cout<<"\n TRY AGAIN ";
     }

        if(numguess==compgen)
        {
        cout<<"\n YOU NAILED IT AWESOME ";
        score+=10;
        cout<<"\n YOUR SCORE IS "<<score;
        }

        tries++;

   }while(tries<=7);


   if(tries>7)
   {
   cout<<"\n  YOU RAN OUT OF THE TRIES SORRY NEXT TIME ";
   }

}

}
getch();
