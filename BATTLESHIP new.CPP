#include<fstream.h>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

void box();
class player
{
   char name[80];
   char age[7] ;
   char gender[7];
   char profession[20];
   char suppcountry[5];
 public:
   double score;
   int wins, losses;
  	player()
   {
   	strcpy(name,"GUEST");
      score=0;
      wins=0;
      losses=0;
      strcpy(age,"NA");
      strcpy(gender,"NA");
      strcpy(profession,"NA");
      strcpy(suppcountry,"NEUTRAL");
   }
   void inputinfo()
   {
     int x=5,y=5;
     gotoxy(x,y);
     cout<<" ---SETUP PLAYER PROFILE--- " ;
     gotoxy(x,++y);
     cout<<" PLAYER NAME : ";gets(name);
     gotoxy(x,++y);
     cout<<" PLAYER AGE : ";cin>>age;
     gotoxy(x,++y);
     cout<<" PLAYER GENDER[M/F] : ";cin>>gender;
     gotoxy(x,++y);
     cout<<" PLAYER PROFESSION: ";gets(profession);
     gotoxy(x,++y);
     cout<<" WHICH COUNTRY DO YOU SUPPORT ? [JAPAN/USA] ";cin>>suppcountry;
   }
   void displayinfo()
   {

     //int x=5,y=5;
     //gotoxy(x,y);
     cout<<"---PLAYER PROFILE---"<<"\n" ;
     //gotoxy(x,++y);
     cout<<"* PLAYER NAME : "<<name<<"\n";
     //gotoxy(x,++y);
     cout<<"* PLAYER AGE : "<<age<<"\n";
     //gotoxy(x,++y);
     cout<<"* PLAYER GENDER : "<<gender<<"\n";
     //gotoxy(x,++y);
     cout<<"* PLAYER PROFESSION : "<<profession<<"\n";
     //gotoxy(x,++y);
     cout<<"* PLAYER SUPPORTS  : "<<suppcountry<<"\n\n";
   }
    char* retname()
   {
   	return name;
   }
};
player p;

void box()
{

  	int x=0,y=0;
	for(int i=1;i<=39;i++)
	{	gotoxy(++x,y);
   	cout<<"* ";
	}

	for(int i=1;i<=25;i++)
	{	gotoxy(2*x+1,++y);
   	cout<<"*";
	}
		y=1;
		x=1;

	for(int i=1;i<=24;i++)
	{	gotoxy(x,++y);
   	cout<<"*";
	}
  		x=3;

	for(int i=2;i<=78;i++)
   {	gotoxy(++i,y);
   	cout<<"* ";
	}
}

void intro()
{
   box();
   int w1,w2;
   int x=26,y=12;

   for(int i=0;i<40;i++)
   {
   	w1=3+random(32);
      w2=3+random(8);
      gotoxy(w1,w2);
      cout<<char(126);
      w1=43+random(33);
      w2=3+random(8);
      gotoxy(w1,w2);
      cout<<char(126);
      w1=43+random(33);
      w2=14+random(9);
      gotoxy(w1,w2);
      cout<<char(126);
      w1=3+random(32);
      w2=14+random(9);
      gotoxy(w1,w2);
      cout<<char(126);
   }

   int x1=37;
   int y1=8;
   int x2=41;
   int y2=16;

   for(int i=0;i<5;i++)
   {
      Sleep(500);
   	gotoxy(x1,y1);
      cout<<char(209);
      gotoxy(x1,y1-1);
      cout<<" ";
      y1++;
      gotoxy(x2,y2);
      cout<<char(207);
      gotoxy(x2,y2+1);
      cout<<" ";
      y2--;
    }

   int x3=4;
   int x4=73;

   for(int i=0;i<5;i++)
   {
      Sleep(500);
   	gotoxy(x3,y);
      cout<<char(204);
      gotoxy(x3-2,y);
      cout<<"  ";
      x3+=2;
      gotoxy(x4,y);
      cout<<char(185);
      gotoxy(x4+2,y);
      cout<<" ";
      x4-=2;
    }

   int x5=17;
   int x6=61;

   for(int i=0;i<10;i++)
    {
      Sleep(200);
   	gotoxy(x5,y);
      cout<<char(175);
      gotoxy(x5-2,y);
      cout<<"  ";
      x5+=2;
      gotoxy(x6,y);
      cout<<char(174);
      gotoxy(x6+2,y);
      cout<<" ";
      x6-=2;

    }
   gotoxy(x5-2,y);
   cout<<"  ";
   gotoxy(x5,y);
   cout<<char(247);
   gotoxy(x6+2,y);
   cout<<"  ";
   gotoxy(x6,y);
   cout<<char(247);

   int x7=35;

   gotoxy(x7,y+1);
   cout<<"KABOOOOM!";
   Sleep(3000);
   clrscr();
   box();

   gotoxy(x,y);
   cout<<" -----BATTLESHIPS----- ";
   gotoxy(x-1,y+2);
   cout<<"WELCOME TO THE BATTLEFIELD !";
   Sleep(6000 );
   clrscr();
   box();
   gotoxy(x+13,y);
   cout<<"AND...." ;
   Sleep(2000);
   gotoxy(x,y);
   cout<<" ";
   gotoxy(x+5,y);
   cout<<" THE STORY BEGINS ";
   Sleep(3000);
   clrscr();
}

void gamescreen()
{
	int x=39,y;

   for (int i=1;i<=24;)
   {	gotoxy(x,i++);
   	cout<<"* ";
   }

   x=17,y=2;
   gotoxy(x,y);
   cout<<"PLAYER";
   x=55,y=2;
   gotoxy(x,y);
   cout<<"COMPUTER";
   x=1,y=3;

	for(int i=1;i<=76;i++)
	{	gotoxy(++x,y);
   	cout<<"* ";
	}

   x=1,y=23;

   for(int i=1;i<=76;i++)
   {	gotoxy(++x,y);
   	cout<<"*";
	}

}
void Level2();

void Level1()
{
   box();
   int x=33,y=12;
   gotoxy(x,y);
   cout<<"-LEVEL 1!-";
   Sleep(3000);
   clrscr();
   box();
   x=30,y=3;
   gotoxy(x,y);
	cout<<"LEVEL INSTRUCTIONS";
   x=5,y=4;
   gotoxy(x,y);
   cout<<"1.Enter coordinates of your battle ship";
	x=5,y=5;
   gotoxy(x,y);
   cout<<"2.You have 5 ships to place";
   x=5,y=6;
   gotoxy(x,y);
   cout<<"3.You have 3 LIVES in hand . Play wisely!";
   getch();

   int xp[5];
   int yp[5];
   int xc[5];
   int yc[5];

	for (int i=0;i<=4;i++)
   {
   	xp[i]=0;
      yp[i]=0;
   }

   clrscr();
   box();
   gamescreen();

   for (int i=0;i<=4;i++)
   {
      x=5,y=5;
      gotoxy(x,y);
   	cout<<"Enter coordinates for ship"<<(i+1);
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 5 to 35:";
   	cin>>xp[i];
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 7 to 16:";
   	cin>>yp[i];
		Sleep(1000);
		xc[i]=44+random(31);
		yc[i]=7+random(10);
      clrscr();
      box();
      gamescreen();

      for (int k=0;k<=4;k++)
      {
      	if (xp[k]!=0 && yp[k]!=0)
      	{
   			gotoxy(xp[k],yp[k]);
   			cout<<char(207);
         }
      }

      getch();
      clrscr();
      box();
      gamescreen();
   }

   for (int j=0;j<=4;j++)
   {
   	gotoxy(xp[j],yp[j]);
      cout<<char(207);
      Sleep(700);
    	gotoxy(xc[j],yc[j]);
   	cout<<char(207);
      Sleep(700);
   }

   getch();
   int ship=5;

   for(int l=0,m=0;l<=4 && m<=4 ;l++)
   {
          if(yp[l]==yc[m])
       	{
            ship--;
            gotoxy(xp[l],yp[l]);
            cout<<"X";
            m=0;
         }
         else
         {
         	m++;
            l--;
         }
   }

   Sleep(4500);
   player temp;

   if (ship>=3)
   {
    	clrscr();
      box();
      p.wins++;
      temp.score=100*p.wins-25*temp.losses; // BASE FORMULA FOR SCORE CALCULATION FOR LEVEL 1
      p.score+=temp.score;
      x=30,y=12;
    	gotoxy(x,y);
      cout<<"YOUR SCORE IS : "<<temp.score;
      gotoxy(x,++y);
      cout<<" WINS : "<<p.wins;
      gotoxy(x,++y);
      cout<<" LOSSES : "<<temp.losses;
      gotoxy(x,++y);
      cout<<" SHIPS LOST FROM FLEET : " <<(5-ship);
      Sleep(4500);

      x=30,y=12;
      clrscr();
      box();
    	gotoxy(x,y);
      cout<<"!!CONGRATULATIONS!!";
    	x=27,y=13;
    	gotoxy(x,y);
    	cout<<"You have cleared level 1";
      Sleep(3000);
      Level2();

   }
   else
   {
   	clrscr();
      box();
    	int x=30,y=12;
    	gotoxy(x,y);
    	cout<<"You lost all 3 lives!";
    	x=30,y=13;
    	gotoxy(x,y);
    	cout<<"Sorry! Try again";
      p.losses++;
      temp.losses++;
      Sleep(3000);
      clrscr();
      box();
      gamescreen();
   	Level1();
   }
}
void Level3();

void Level2()
{
   clrscr();
	box();
   int x=34,y=12;
   gotoxy(x,y);
   cout<<"--LEVEL 2!--";
   Sleep(3000);
   clrscr();
   box();
   x=30,y=3;
   gotoxy(x,y);
	cout<<"LEVEL INSTRUCTIONS";
   x=5,y=4;
   gotoxy(x,y);
   cout<<"1.Enter coordinates of your battle ship";
	x=5,y=5;
   gotoxy(x,y);
   cout<<"2.You have 10 ships to place";
   x=5,y=6;
   gotoxy(x,y);
   cout<<"3.You have 4 LIVES in hand. Play wisely!";
   getch();
   x=5,y=6;
   gotoxy(x,y);
   cout<<"NOTE:PLAY AREA DECREASED,LIVES INCREASED BY 1,SHIPS INCREASED TO 10";
   getch();

   int xp[10];
   int yp[10];
   int xc[10];
   int yc[10];

	for (int i=0;i<=9;i++)
   {
   	xp[i]=0;
      yp[i]=0;
   }

   clrscr();
   box();
   gamescreen();

   for (int i=0;i<=9;i++)
   {
      x=5,y=5;
      gotoxy(x,y);
   	cout<<"Enter coordinates for ship"<<(i+1);
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 10 to 30:";
   	cin>>xp[i];
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 8 to 15:";
   	cin>>yp[i];
		Sleep(1000);
		xc[i]=49+random(21);
		yc[i]=8+random(8);
      clrscr();
      box();
      gamescreen();

      for (int k=0;k<=9;k++)
      {
      	if (xp[k]!=0 && yp[k]!=0)
      	{
   			gotoxy(xp[k],yp[k]);
   			cout<<char(207);
         }
      }

      getch();
      clrscr();
      box();
      gamescreen();
   }

   for (int j=0;j<=9;j++)
   {
   	gotoxy(xp[j],yp[j]);
      cout<<char(207);
      Sleep(700);
    	gotoxy(xc[j],yc[j]);
   	cout<<char(207);
      Sleep(700);
   }

   getch();
   int ship=10;

   for(int l=0,m=0;l<=9&&m<=9;l++)
   {

       if(yp[l]==yc[m])
       {
       	ship--;
       	gotoxy(xp[l],yp[l]);
         cout<<"X";
         m=0;
       }
       else
       {
       	l--;
         m++;
       }
   }

   Sleep(4500);
   player temp;
   if (ship>=6)
   {
      clrscr();
      box();
      p.wins++;
      temp.score=200*p.wins-20*temp.losses; //BASE FORMULA FOR SCORE CALCULATION of LEVEL 2
      p.score+=temp.score;
      x=30,y=12;
    	gotoxy(x,y);
      cout<<"YOUR SCORE IS : "<<temp.score;
      gotoxy(x,++y);
      cout<<" WINS : "<<p.wins;
      gotoxy(x,++y);
      cout<<" LOSSES : "<<temp.losses;
      gotoxy(x,++y);
      cout<<" SHIPS LOST FROM FLEET : " <<(10-ship);
      Sleep(4500);
    	clrscr();
      box();

    	x=30,y=12;
    	gotoxy(x,y);
    	cout<<"!!CONGRATULATIONS!!";
    	x=27,y=13;
    	gotoxy(x,y);
    	cout<<"You have cleared level 2";
      Level3();
   }
   else
   {
   	clrscr();
      box();
    	int x=30,y=12;
    	gotoxy(x,y);
    	cout<<"You lost all 4 lives!";
    	x=30,y=13;
    	gotoxy(x,y);
    	cout<<"Sorry! Try again";
      p.losses++;
      temp.losses++;
      clrscr();
      box();
      gamescreen();
   	Level2();
   }
}
void Level4();

void Level3()
{
   clrscr();
	box();
   int x=35,y=12;
   gotoxy(x,y);
   cout<<"---LEVEL 3!---";
   Sleep(3000);
   clrscr();
   box();
   x=30,y=3;
   gotoxy(x,y);
	cout<<"LEVEL INSTRUCTIONS";
   x=5,y=4;
   gotoxy(x,y);
   cout<<"1.Enter coordinates of your battle ship";
	x=5,y=5;
   gotoxy(x,y);
   cout<<"2.You have 12 ships to place";
   x=5,y=6;
   gotoxy(x,y);
   cout<<"2.You have 5 LIVES in hand. Play wisely!";
   getch();

   int xp[12];
   int yp[12];
   int xc[12];
   int yc[12];

	for (int i=0;i<=11;i++)
   {
   	xp[i]=0;
      yp[i]=0;
   }

   clrscr();
   box();
   gamescreen();

   for (int i=0;i<=11;i++)
   {
      x=5,y=5;
      gotoxy(x,y);
   	cout<<"Enter coordinates for ship"<<(i+1);
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 15 to 30:";
   	cin>>xp[i];
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 8 to 16:";
   	cin>>yp[i];
		Sleep(1000);
		xc[i]=54+random(16);
		yc[i]=8+random(8);
      clrscr();
      box();
      gamescreen();

      for (int k=0;k<=11;k++)
      {
      	if (xp[k]!=0 && yp[k]!=0)
      	{
   			gotoxy(xp[k],yp[k]);
   			cout<<char(207);
         }
      }

      getch();
      clrscr();
      box();
      gamescreen();
   }

   for (int j=0;j<=11;j++)
   {
   	gotoxy(xp[j],yp[j]);
      cout<<char(207);
      Sleep(700);
    	gotoxy(xc[j],yc[j]);
   	cout<<char(207);
      Sleep(700);
   }
   getch();
   int ship=12;

   for(int l=0,m=0;l<=11&&m<=11;l++)
   {
   	   if(yp[l]==yc[m])
       	{
            ship--;
            gotoxy(xp[l],yp[l]);
            cout<<"X";
            m=0;
         }
         else
         {
         	l--;
            m++;
         }
   }

   Sleep(4500);
   player temp;
   if (ship>=7)
   {
   	clrscr();
      box();
   	p.wins++;
      temp.score=300*p.wins-15*temp.losses; // BASE FORMULA FOR SCORE CALCULATION of LEVEL 3
      p.score+=temp.score;
      x=30,y=12;
    	gotoxy(x,y);
      cout<<"YOUR SCORE IS : "<<temp.score;
      gotoxy(x,++y);
      cout<<" WINS : "<<p.wins;
      gotoxy(x,++y);
      cout<<" LOSSES : "<<temp.losses;
      gotoxy(x,++y);
      cout<<" SHIPS LOST FROM FLEET : " <<(12-ship);
      Sleep(4500);
    	clrscr();
      box();

    	int x=30,y=12;
    	gotoxy(x,y);
    	cout<<"!!CONGRATULATIONS!!";
    	x=27,y=13;
    	gotoxy(x,y);
    	cout<<"You have cleared level 3";
      Sleep(3000);
     Level4();
   }
   else
   {  clrscr();
      box();
    	int x=30,y=12;
    	gotoxy(x,y);
    	cout<<"You lost all 5 lives!";
    	x=30,y=13;
    	gotoxy(x,y);
    	cout<<"Sorry! Try again";
      p.losses++;
      temp.losses++;
      Sleep(3000);
      clrscr();
      box();
      gamescreen();
   	Level3();
   }
}

void Level4()
{
   clrscr();
	box();
   int x=36,y=12;
   gotoxy(x,y);
   cout<<"----LEVEL 4!----";
   Sleep(3000);
   clrscr();
   box();
   x=30,y=3;
   gotoxy(x,y);
	cout<<"LEVEL INSTRUCTIONS";
   x=5,y=4;
   gotoxy(x,y);
   cout<<"1.Enter coordinates of your battle ship";
	x=5,y=5;
   gotoxy(x,y);
   cout<<"2.You have 12 ships to place.";
   x=5,y=6;
   gotoxy(x,y);
   cout<<"3.You have 5 LIVES in hand.Play wisely!";
   x=5,y=7;
   gotoxy(x,y);
   cout<<"NOTE:PLAY AREA HAS BEEN REDUCED.WATCH OUT FOR THE BOMBS";
   getch();

   int xp[12];
   int yp[12];
   int xc[12];
   int yc[12];
   int xb[10];
   int yb[10];

	for (int i=0;i<=11;i++)
   {
   	xp[i]=0;
      yp[i]=0;

   }

   clrscr();
   box();
   gamescreen();

   for (int i=0;i<=11;i++)
   {
      x=5,y=5;
      gotoxy(x,y);
   	cout<<"Enter coordinates for ship"<<(i+1);
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 15 to 29:";
   	cin>>xp[i];
      y++;
      gotoxy(x,y);
   	cout<<"Enter a value from 8 to 20:";
   	cin>>yp[i];
		Sleep(1000);
      xb[i]=5+random(31);
      yb[i]=8+random(8);
		xc[i]=44+random(31);
		yc[i]=8+random(8);
      clrscr();
      box();
      gamescreen();

      for (int k=0;k<=11;k++)
      {
      	if (xp[k]!=0 && yp[k]!=0)
      	{
   			gotoxy(xp[k],yp[k]);
   			cout<<char(207);
         }
      }

      getch();
      clrscr();
      box();
      gamescreen();
   }

   for (int j=0;j<=11;j++)
   {
   	gotoxy(xp[j],yp[j]);
      cout<<char(207);
      Sleep(700);
    	gotoxy(xc[j],yc[j]);
   	cout<<char(207);
      Sleep(700);
   }
   getch();

   int ship=12;
   int bomb=10;

   for(int l=0,m=0;l<=11&&m<=0;l++)
   {
   	 if(yp[l]==yc[m])
       	{
            ship--;
            gotoxy(xp[l],yp[l]);
            cout<<"X";
            m=0;
         }
        else
        {
        		l--;
            m++;
        }
    }

    for(int m=0,n=0;m<=11||n<=9;m++,n++)
      {
      	if(xp[m]==xb[n]&& yp[m]==yb[n])
        	{
          	bomb--;
          	gotoxy(xp[m],yp[m]);
          	cout<<char(162);
        	}
      }
   Sleep(4500);
   player temp;
   if (ship>=8)
   {
      clrscr();
      box();
    	p.wins++;
      temp.score=400*p.wins-10*temp.losses; // BASE FORMULA FOR SCORE CALCULATION of LEVEL 4
      if(bomb==10)                          // BOMB BONUS : 10 BOMBS DODGED , SCORE+1000
      temp.score+=1000;
      else if (bomb>=5&&bomb<=9)            // BOMB BONUS : BOMBS DODGED BETWEEN 5 AND 9, SCORE+250
      temp.score+=250;
      else if (bomb>0&& bomb<=4)            // BOMB BONUS : BOMBS DODGED BETWEEN 0 AND 4, SCORE+100
      temp.score+=100;
      else temp.score-=100;                 // BOMB BONUS : NO BOMBS DODGED , SCORE-100
      p.score+=temp.score;
      x=30,y=12;
    	gotoxy(x,y);
      cout<<"YOUR SCORE IS : "<<temp.score;
      gotoxy(x,++y);
      cout<<" WINS : "<<p.wins;
      gotoxy(x,++y);
      cout<<" LOSSES : "<<temp.losses;
      gotoxy(x,++y);
      cout<<" SHIPS LOST FROM FLEET : " <<(12-ship);
      Sleep(4500);
      clrscr();
      box();

    	int x=30,y=12;
    	gotoxy(x,y);
    	cout<<"!!CONGRATULATIONS!!";
    	x=27,y=13;
    	gotoxy(x,y);
    	cout<<"You have cleared level 4";
      Sleep(3000);

   }
   else
   {
   	clrscr();
      box();
    	int x=30,y=12;
    	gotoxy(x,y);
    	cout<<"You lost all 4 lives!";
    	x=30,y=13;
    	gotoxy(x,y);
    	cout<<"Sorry! Try again";
      p.losses++;
      temp.losses++;
      Sleep(3000);
      clrscr();
      box();
      gamescreen();
   	Level4();
   }
}

 void playerprofile()
{
   fstream df("PLAYER.DAT",ios::binary|ios::in|ios::app|ios::out);
   box();
   int option;
   int x=5,y=5;
   gotoxy(x,y);
   cout<<"1.SETUP PROFILE?";
   gotoxy(x,++y);
   cout<<"2.PLAY AS GUEST?";
   gotoxy(x,++y);
   cout<<"ENTER OPTION :";cin>>option;
   if(option==1)
   {
     clrscr();
     box();
     p.inputinfo();
     df.write((char*)&p,sizeof(p));
     clrscr();
     box();
     gotoxy(x,y);
     p.displayinfo();
     x=5,y=14;
     gotoxy(x,y);
     cout<<"PRESS ANY KEY TO CONTINUE";
     getch();
     clrscr();
     Level1();
   }
   else if(option==2)
   {
      clrscr();
      box();
      gotoxy(x,y);
   	p.displayinfo();
      x=5,y=14;
      gotoxy(x,y);
   	cout<<"PRESS ANY KEY TO CONTINUE";
      getch();
      clrscr();
      Level1();
   }
   else
   {
   	x=5,y=8;
      gotoxy(x,y);
      cout<<" INVALID OPTION ";
      getch();
      playerprofile();
   }
   df.close();

}

 void main()
{
   intro();
   playerprofile();
   getch();
}


