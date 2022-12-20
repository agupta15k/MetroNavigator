#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<process.h>
struct node1
{
char stat[50];
struct node1 *lptr;
struct node1 *lptr1;
struct node1 *rptr;
struct node1 *ptr1;
struct node1 *ptr2;
struct node1 *ptr;
};
struct node2
{
char pla[50];
char stat1[50];
char stat2[50];
struct node2 *pt;
};
typedef struct node2 N2;
typedef struct node1 N1;
N1 *first, *temp, *x, *back1, *back2, *temp1, *temp3, *temp2;
N2 *fi, *te, *x1;
int n, i, j, a[30], k=0, g, h, l;
char s[20], d[50], c, ch, v='y';
void recall();
int map();
void instructions();
void map1();
void map2();
void map3();
void map4();
void map5();
void page1();
void page2();
void page3();
void page5();
void stationdirectory();
int an();
int initial();
int final();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
stationdirectory();
page1();
closegraph();
}
void space(char d[])
{
int i;
for(i=0;d[i]!='\0';i++)
{
if(d[i]=='.')
{
d[i]=' ';
}
}
}
void page1()
{
cleardevice();
setbkcolor(0);
setcolor(7);
for(j=5;j>0;j--)
{
setcolor(7);
setfillstyle(SOLID_FILL,1);
sector(300,240,0,90,220,220);
setfillstyle(SOLID_FILL,WHITE);
sector(300,240,90,180,220,220);
setfillstyle(SOLID_FILL,1);
sector(300,240,180,270,220,220);
setfillstyle(SOLID_FILL,WHITE);
sector(300,240,270,360,220,220);
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
for(i=0;i<=360;i=i+5)
{
if(i>=0&&i<=90)
{
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
setcolor(7);
setfillstyle(SOLID_FILL,14);
sector(300,240,0,i,220,220);
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
}
else if(i>180&&i<=270)
{
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
setcolor(7);
setfillstyle(SOLID_FILL,14);
sector(300,240,180,i,220,220);
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
}
else if(i>=90&&i<=180)
{
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
setcolor(7);
setfillstyle(SOLID_FILL,7);
sector(300,240,90,i,220,220);
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
}
else if(i>=270&&i<=360)
{
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
setcolor(7);
setfillstyle(SOLID_FILL,7);
sector(300,240,270,i,220,220);
setcolor(0);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
}
setcolor(0);
line(300,20,300,460);
line(80,240,520,240);
setcolor(1);
}
setcolor(8);
settextstyle(DEFAULT_FONT,0,8);
sprintf(s,"%d",j);
outtextxy(265,210,s);
delay(500);
}
page2();
}
void page2()
{
setcolor(7);
cleardevice();
i=0;
for(i=0;i<27;i++)
{
setcolor(8);
setfillstyle(SOLID_FILL,RED);
fillellipse(300,290,40,40);
setfillstyle(SOLID_FILL,7);
fillellipse(300,290,30,30);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(270,283,335,273);
rectangle(270,308,335,298);
floodfill(293,300,RED);
floodfill(293,280,RED);
line(297,298,316,283);
line(282,298,301,283);
floodfill(298,296,RED);
setcolor(8);
settextstyle(DEFAULT_FONT,0,5);
if(i%2==0)
{
setcolor(7);
outtextxy(100,80,"DELHI METRO");
outtextxy(135,180,"NAVIGATOR");
settextstyle(DEFAULT_FONT,0,2);
outtextxy(240,380,"LOADING");
}
else
{
setcolor(8);
outtextxy(100,80,"DELHI METRO");
outtextxy(135,180,"NAVIGATOR");
settextstyle(DEFAULT_FONT,0,2);
outtextxy(240,380,"LOADING");
}
if(i%2==0)
{
setcolor(7);
for(j=0;j<1;j++)
{
setfillstyle(SOLID_FILL,7);
rectangle(0,440,24+k,460);
floodfill(10+k,450,7);
k=k+24;
delay(300);
}
}
else
{
setcolor(7);
for(j=0;j<1;j++)
{
setfillstyle(SOLID_FILL,7);
rectangle(0,440,24+k,460);
floodfill(10+k,450,7);
k=k+24;
delay(300);
}
}
}
page3();
}
void page3()
{
settextstyle(DEFAULT_FONT,0,1);
cleardevice();
setbkcolor(0);
setfillstyle(SOLID_FILL,7);
setcolor(8);
line(110,100,230,100);
line(230,100,230,130);
line(110,130,230,130);
line(110,100,110,130);
floodfill(120,120,8);
setfillstyle(SOLID_FILL,7);
line(110,100,0,72);
line(110,130,0,102);
floodfill(100,120,8);
setcolor(8);
line(230,100,0,52);
floodfill(100,90,8);
setfillstyle(SOLID_FILL,7);
sector(330,200,0,180,130,50);
line(200,200,0,150);
line(390,155,230,130);
floodfill(190,149,8);
setfillstyle(SOLID_FILL,BLACK);
rectangle(315,165,345,185);
floodfill(330,175,8);
setcolor(7);
setfillstyle(SOLID_FILL,7);
rectangle(200,200,460,480);
floodfill(210,400,7);
setcolor(8);
setfillstyle(SOLID_FILL,7);
rectangle(280,200,380,470);
floodfill(330,430,7);
setcolor(8);
setfillstyle(SOLID_FILL,RED);
fillellipse(330,330,40,40);
setfillstyle(SOLID_FILL,7);
fillellipse(330,330,30,30);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
rectangle(300,323,365,313);
rectangle(300,348,365,338);
floodfill(304,320,RED);
floodfill(304,340,RED);
line(327,338,346,323);
line(312,338,331,323);
floodfill(327,336,RED);
setcolor(8);
line(200,200,460,200);
setfillstyle(SOLID_FILL,7);
line(200,480,0,430);
line(200,200,200,480);
line(0,440,0,150);
floodfill(199,479,8);
setcolor(8);
setfillstyle(SOLID_FILL,WHITE);
circle(245,280,20);
floodfill(245,280,8);
setfillstyle(SOLID_FILL,0);
circle(236,275,4);
floodfill(236,275,8);
setfillstyle(SOLID_FILL,0);
circle(254,275,4);
floodfill(254,275,8);
line(245,280,245,284);
arc(245,280,250,300,12);
setfillstyle(SOLID_FILL,LIGHTBLUE);
sector(245,335,90,180,35,35);
sector(245,335,0,90,35,35);
floodfill(245,335,8);
setcolor(8);
setfillstyle(SOLID_FILL,CYAN);
rectangle(210,200,280,415);
rectangle(380,200,450,415);
floodfill(220,202,8);
floodfill(390,400,8);
setfillstyle(SOLID_FILL,0);
line(210,230,280,230);
floodfill(220,210,8);
setfillstyle(SOLID_FILL,0);
line(210,350,280,350);
floodfill(220,370,8);
setcolor(8);
outtextxy(313,410,"DELHI");
outtextxy(313,430,"METRO");
setcolor(7);
outtextxy(222,213,"DWARKA");
setcolor(8);
setfillstyle(SOLID_FILL,0);
line(380,230,450,230);
floodfill(390,210,8);
setfillstyle(SOLID_FILL,0);
line(380,350,450,350);
floodfill(390,360,8);
setcolor(7);
outtextxy(400,213,"1234");
setcolor(8);
line(430,360,395,330);
line(395,270,395,345);
line(230,360,270,330);
line(270,270,270,345);
setcolor(8);
setfillstyle(SOLID_FILL,RED);
line(210,370,280,370);
floodfill(220,380,8);
setfillstyle(SOLID_FILL,7);
circle(228,393,7);
circle(258,393,12);
floodfill(228,393,8);
floodfill(258,393,8);
setfillstyle(SOLID_FILL,RED);
line(380,370,450,370);
floodfill(390,380,8);
circle(433,393,7);
circle(403,393,12);
setfillstyle(SOLID_FILL,7);
floodfill(433,393,8);
floodfill(403,393,8);
setcolor(8);
setfillstyle(SOLID_FILL,1);
line(200,360,0,310);
line(200,380,0,330);
line(200,360,200,380);
line(0,310,0,330);
floodfill(190,375,8);
setcolor(8);
setfillstyle(SOLID_FILL,CYAN);
line(170,230,170,310);
line(170,230,20,190);
line(170,310,20,270);
line(20,190,20,270);
floodfill(160,228,8);
setcolor(8);
line(460,200,460,480);
settextstyle(DEFAULT_FONT,0,4);
outtextxy(75,230,"8");
setcolor(8);
line(0,0,0,500);
line(0,500,650,500);
line(460,428,650,478);
line(650,0,650,500);
setfillstyle(LINE_FILL,1);
line(0,0,650,70);
floodfill(540,30,8);
setfillstyle(LINE_FILL,7);
floodfill(5,435,8);
floodfill(465,440,8);
setcolor(8);
setfillstyle(SOLID_FILL,7);
circle(570,230,50);
floodfill(570,230,8);
setfillstyle(SOLID_FILL,6);
line(566,281,566,460);
line(574,281,574,460);
floodfill(570,290,8);
settextstyle(DEFAULT_FONT,0,3);
outtextxy(523,220,"DMRC");
setcolor(RED);
setcolor(7);
setfillstyle(SOLID_FILL,7);
bar(0,0,390,30);
settextstyle(DEFAULT_FONT,0,1);
setcolor(WHITE);
outtextxy(50,10,"ENTER E FOR EXIT AND N FOR NEXT PAGE ");
v=getch();
if(v=='e'||v=='E')
{
cleardevice();
settextstyle(DEFAULT_FONT,0,3);
setbkcolor(8);
setcolor(7);
outtextxy(200,160,"THANK YOU.");
outtextxy(180,260,"VISIT AGAIN.");
outtextxy(200,360,"GOOD BYE.");
getch();
exit(0);
}
else if(v=='n'||v=='N')
{
cleardevice();
settextstyle(DEFAULT_FONT,0,2);
outtextxy(30,50,"PLEASE READ INSTRUCTION MANUAL");
outtextxy(30,90,"CAREFULLY BEFORE USING THE PROGRAM");
settextstyle(DEFAULT_FONT,0,1);
outtextxy(30,220,"Press 'E' for EXIT and any other key to continue");
v=getch();
if(v=='e'||v=='E')
{
cleardevice();
settextstyle(DEFAULT_FONT,0,3);
setbkcolor(8);
setcolor(7);
outtextxy(200,160,"THANK YOU.");
outtextxy(180,260,"VISIT AGAIN.");
outtextxy(200,360,"GOOD BYE.");
getch();
exit(0);
}
else
recall();
}
else
page3();
}
int map()
{
		static int h=1;
		cleardevice();
		setbkcolor(8);
		setcolor(7);
		settextstyle(DEFAULT_FONT,0,2);
		rectangle(45,50,400,80);
		outtextxy(50,60,"1.BLUE LINE");
		setcolor(7);
		rectangle(45,90,400,120);
		outtextxy(50,100,"2.YELLOW LINE");
		setcolor(7);
		rectangle(45,130,400,160);
		outtextxy(50,140,"3.RED LINE");
		setcolor(7);
		rectangle(45,170,400,200);
		outtextxy(50,180,"4.VIOLET LINE");
		setcolor(7);
		rectangle(45,210,400,240);
		outtextxy(50,220,"5.GREEN LINE");
		rectangle(45,250,400,280);
		outtextxy(50,260,"6.PREVIOUS MENU");
		if(h==1)
		{
		setcolor(15);
		rectangle(45,50,400,80);
		outtextxy(50,60,"1.BLUE LINE");
		}
		else if(h==2)
		{
		setcolor(15);
		rectangle(45,90,400,120);
		outtextxy(50,100,"2.YELLOW LINE");
		}
		else if(h==3)
		{
		setcolor(15);
		rectangle(45,130,400,160);
		outtextxy(50,140,"3.RED LINE");
		}
		else if(h==4)
		{
		setcolor(15);
		rectangle(45,170,400,200);
		outtextxy(50,180,"4.VIOLET LINE");
		}
		else if(h==5)
		{
		setcolor(15);
		rectangle(45,210,400,240);
		outtextxy(50,220,"5.GREEN LINE");
		}
		else if(h==6)
		{
		setcolor(15);
		rectangle(45,250,400,280);
		outtextxy(50,260,"6.PREVIOUS MENU");
		}
		v=getch();
		while(v!='\r')
		{
		if(v=='s'||v=='S')
		{
		if(h==1)
		{
		setcolor(7);
		rectangle(45,50,400,80);
		outtextxy(50,60,"1.BLUE LINE");
		setcolor(15);
		rectangle(45,90,400,120);
		outtextxy(50,100,"2.YELLOW LINE");
		h++;
		}
		else if(h==2)
		{
		setcolor(7);
		rectangle(45,90,400,120);
		outtextxy(50,100,"2.YELLOW LINE");
		setcolor(15);
		rectangle(45,130,400,160);
		outtextxy(50,140,"3.RED LINE");
		h++;
		}
		else if(h==3)
		{
		setcolor(7);
		rectangle(45,130,400,160);
		outtextxy(50,140,"3.RED LINE");
		setcolor(15);
		rectangle(45,170,400,200);
		outtextxy(50,180,"4.VIOLET LINE");
		h++;
		}
		else if(h==4)
		{
		setcolor(7);
		rectangle(45,170,400,200);
		outtextxy(50,180,"4.VIOLET LINE");
		setcolor(15);
		rectangle(45,210,400,240);
		outtextxy(50,220,"5.GREEN LINE");
		h++;
		}
		else if(h==5)
		{
		setcolor(7);
		rectangle(45,210,400,240);
		outtextxy(50,220,"5.GREEN LINE");
		setcolor(15);
		rectangle(45,250,400,280);
		outtextxy(50,260,"6.PREVIOUS MENU");
		h++;
		}
		else if(h==6)
		{
		setcolor(7);
		rectangle(45,250,400,280);
		outtextxy(50,260,"6.PREVIOUS MENU");
		setcolor(15);
		rectangle(45,50,400,80);
		outtextxy(50,60,"1.BLUE LINE");
		h=h-5;
		}
		v=getch();
		}
		else if(v=='w'||v=='W')
		{
		if(h==6)
		{
		setcolor(7);
		rectangle(45,250,400,280);
		outtextxy(50,260,"6.PREVIOUS MENU");
		setcolor(15);
		rectangle(45,210,400,240);
		outtextxy(50,220,"5.GREEN LINE");
		h--;
		}
		else if(h==5)
		{
		setcolor(7);
		rectangle(45,210,400,240);
		outtextxy(50,220,"5.GREEN LINE");
		setcolor(15);
		rectangle(45,170,400,200);
		outtextxy(50,180,"4.VIOLET LINE");
		h--;
		}
		else if(h==4)
		{
		setcolor(7);
		rectangle(45,170,400,200);
		outtextxy(50,180,"4.VIOLET LINE");
		setcolor(15);
		rectangle(45,130,400,160);
		outtextxy(50,140,"3.RED LINE");
		h--;
		}
		else if(h==3)
		{
		setcolor(7);
		rectangle(45,130,400,160);
		outtextxy(50,140,"3.RED LINE");
		setcolor(15);
		rectangle(45,90,400,120);
		outtextxy(50,100,"2.YELLOW LINE");
		h--;
		}
		else if(h==2)
		{
		setcolor(7);
		rectangle(45,90,400,120);
		outtextxy(50,100,"2.YELLOW LINE");
		setcolor(15);
		rectangle(45,50,400,80);
		outtextxy(50,60,"1.BLUE LINE");
		h--;
		}
		else if(h==1)
		{
		setcolor(7);
		rectangle(45,50,400,80);
		outtextxy(50,60,"1.BLUE LINE");
		setcolor(15);
		rectangle(45,250,400,280);
		outtextxy(50,260,"6.PREVIOUS MENU");
		h=h+5;
		}
		v=getch();
		}
		else
		recall();
		}
		return h;
}
void map1()
{
   int j=0, k=0;
   cleardevice();
   setbkcolor(8);
   settextstyle(DEFAULT_FONT,0,1);
   setcolor(CYAN);
   setfillstyle(SOLID_FILL,CYAN);
   fillellipse(470,220,2,2);
   circle(470,220,6);
   line(470,220,590,80);
   temp=first;
   for(i=0;i<7;i++)
   {
     fillellipse(590-j,80+k,2,2);
     if(i<5)
     {
     outtextxy(500-j,75+k,temp->stat);
     temp=temp->rptr;
     }
     else
     {
     outtextxy(605-j,80+k,temp->stat);
     temp=temp->rptr;
     }
     j=j+17;
     k=k+20;
   }
   line(280,30,630,380);
   line(275,30,10,295);
   line(10,300,175,466);
   j=0;
   k=0;
   temp1=temp->ptr;
   for(i=0;i<13;i++)
   {
     fillellipse(470-j,220-k,2,2);
     if(i>7)
     {
     outtextxy(485-j,215-k,temp->stat);
     temp=temp->rptr;
     }
     else
     {
     outtextxy(347-j,218-k,temp->stat);
     temp=temp->rptr;
     }
     j=j+16;
     k=k+16;
   }
   j=0;
   k=0;
   for(i=0;i<10;i++)
   {
     fillellipse(486+j,236+k,2,2);
     outtextxy(347+j,235+k,temp1->stat);
     temp1=temp1->ptr;
     j=j+16;
     k=k+16;
   }
   j=0;
   k=0;
   for(i=0;i<13;i++)
   {
     fillellipse(259-j,46+k,2,2);
     if(i<5)
     {
     outtextxy(155-j,40+k,temp->stat);
     temp=temp->rptr;
     }
     else
     {
     outtextxy(275-j,41+k,temp->stat);
     temp=temp->rptr;
     }
     j=j+21;
     k=k+21;
   }
   j=0;
   k=0;
   for(i=0;i<9;i++)
   {
     fillellipse(7+j,298+k,2,2);
     outtextxy(45+j,315+k,temp->stat);
     temp=temp->rptr;
     j=j+21;
     k=k+21;
   }
   circle(175,466,6);
   getch();
}
void map3()
{
cleardevice();
settextstyle(DEFAULT_FONT,0,1);
setfillstyle(SOLID_FILL,RED);
setcolor(RED);
line(10,30,320,400);
line(320,400,600,20);
outtextxy(10,30," Rithala");
fillellipse(10,30,4,4);
outtextxy(36,60," Rohini West");
fillellipse(36,60,4,4);
outtextxy(62,90," Rohini East");
fillellipse(62,90,4,4);
outtextxy(88,120," Pitampura");
fillellipse(84,120,4,4);
outtextxy(114,150," Kohat Enclave");
fillellipse(109,150,4,4);
outtextxy(140,180," Netaji subash Place");
fillellipse(135,180,4,4);
outtextxy(166,210," Keshav Puram");
fillellipse(160,210,4,4);
outtextxy(192,240," Kanahiya Nagar");
fillellipse(185,240,4,4);
outtextxy(218,270," Inderlok");
fillellipse(212,270,4,4);
circle(212,270,6);
outtextxy(244,300," Shastri Nagar");
fillellipse(236,300,4,4);
outtextxy(270,330," Pratap Nagar");
fillellipse(261,330,4,4);
outtextxy(348,362," Pulbangash");
fillellipse(348,362,4,4);
outtextxy(374,324," Tis Hazari");
fillellipse(374,324,4,4);
outtextxy(405,286," Kashmere Gate");
fillellipse(402,286,4,4);
circle(402,286,6);
outtextxy(428,248," Shastri Park");
fillellipse(433,248,4,4);
outtextxy(456,210," Seelampur");
fillellipse(461,210,4,4);
outtextxy(484,172," Welcome");
fillellipse(488,172,4,4);
outtextxy(512,134," Shahdara");
fillellipse(516,134,4,4);
outtextxy(540,96," Mansarovar Park");
fillellipse(545,96,4,4);
outtextxy(568,58," Jhilmil");
fillellipse(573,58,4,4);
outtextxy(470,20," Dilshad Garden");
fillellipse(600,20,4,4);
getch();
}
void map2()
{
cleardevice();
settextstyle(DEFAULT_FONT,0,1);
setfillstyle(SOLID_FILL,14);
setcolor(YELLOW);
line(30,450,30,420);
line(30,420,200,420);
line(200,420,350,380);
line(350,380,400,100);
line(400,100,300,70);
line(300,70,250,20);
outtextxy(1,450,"Huda");
outtextxy(1,460,"City");
outtextxy(1,470,"Centre");
fillellipse(30,450,2,2);
outtextxy(1,400,"IFFCO");
outtextxy(1,410,"Chowk");
fillellipse(30,420,2,2);
outtextxy(50,430," MG");
outtextxy(50,440,"Road");
fillellipse(66,420,2,2);
outtextxy(50,405,"  Sikandarpur");
fillellipse(102,420,2,2);
outtextxy(120,430,"  Guru");
outtextxy(110,440,"Dronacharya");
fillellipse(147,420,2,2);
outtextxy(190,430," Arjangarh");
fillellipse(200,420,2,2);
outtextxy(155,405," Ghitorni");
fillellipse(230,413,2,2);
outtextxy(248,413," Sultanpur");
fillellipse(255,406,2,2);
outtextxy(200,390," Chhatarpur");
fillellipse(280,399,2,2);
outtextxy(307,393," Qutab Minar");
fillellipse(306,393,2,2);
outtextxy(300,374," Saket");
fillellipse(350,380,2,2);
outtextxy(358,362," Malviya nagar");
fillellipse(353,366,2,2);
outtextxy(205,344," Hauz Khas Enclave");
fillellipse(356,348,2,2);
outtextxy(358,330," Green Park");
fillellipse(359,332,2,2);
outtextxy(312,312," AIIMS");
fillellipse(362,316,2,2);
outtextxy(363,300," INA");
fillellipse(365,300,2,2);
outtextxy(292,281," Jor Bagh");
fillellipse(368,284,2,2);
outtextxy(370,268," Race Course");
fillellipse(371,268,2,2);
outtextxy(254,252," Udhyog Bhawan");
fillellipse(374,252,2,2);
outtextxy(378,228," Central Secretariate");
fillellipse(377,228,2,2);
circle(377,228,4);
outtextxy(283,201," Patel Chowk");
fillellipse(381,204,2,2);
outtextxy(385,188," Rajiv Chowk");
fillellipse(384,188,2,2);
circle(384,188,4);
outtextxy(301,170," New Delhi");
fillellipse(387,172,2,2);
circle(387,172,4);
outtextxy(391,154," Chawri Bazar");
fillellipse(390,156,2,2);
outtextxy(270,138," Chandni Chowk");
fillellipse(393,140,2,2);
outtextxy(395,123," Kashmere Gate");
fillellipse(395,124,2,2);
circle(395,124,4);
outtextxy(401,99," Civil Lines");
fillellipse(400,100,2,2);
outtextxy(371,83," Vidhan Sabha");
fillellipse(375,92,2,2);
outtextxy(215,84," Vishwavidyalaya");
fillellipse(350,84,2,2);
outtextxy(325,70," GTB Nagar");
fillellipse(325,76,2,2);
outtextxy(205,69," Model Town");
fillellipse(300,70,2,2);
outtextxy(288,53," Azadpur");
fillellipse(287,57,2,2);
outtextxy(160,42," Adarsh Nagar");
fillellipse(274,44,2,2);
outtextxy(251,16," Jahangirpuri");
fillellipse(250,20,2,2);
getch();
}
void map4()
{
cleardevice();
settextstyle(DEFAULT_FONT,0,1);
setfillstyle(SOLID_FILL,1);
setcolor(1);
line(80,100,100,140);
line(100,140,100,175);
line(100,175,550,400);
outtextxy(80,100," Central Secretariat");
fillellipse(80,100,4,4);
circle(80,100,6);
outtextxy(1,137," Khan Market");
fillellipse(100,140,4,4);
outtextxy(100,170," JL Nehru Stadium");
fillellipse(100,175,4,4);
outtextxy(55,190," Jangpura");
fillellipse(134,192,4,4);
outtextxy(168,202," Lajpat Nagar");
fillellipse(168,209,4,4);
outtextxy(113,225," Moolchand");
fillellipse(202,226,4,4);
outtextxy(236,236," Kailash Colony");
fillellipse(236,243,4,4);
outtextxy(167,260," Nehru place");
fillellipse(270,260,4,4);
outtextxy(304,272," Kalkaji Mandir");
fillellipse(304,277,4,4);
outtextxy(235,295," Govind Puri");
fillellipse(338,294,4,4);
outtextxy(372,306," Okhla");
fillellipse(372,311,4,4);
outtextxy(285,328," Jasola Apollo");
fillellipse(406,328,4,4);
outtextxy(440,340," Sarita Vihar");
fillellipse(440,345,4,4);
outtextxy(360,362," Mohan Estate");
fillellipse(474,361,4,4);
outtextxy(508,374," Tukhlakabad");
fillellipse(508,379,4,4);
outtextxy(470,400," Badarpur");
fillellipse(550,400,4,4);
getch();
}
void map5()
{
cleardevice();
settextstyle(DEFAULT_FONT,0,1);
setcolor(GREEN);
line(10,30,154,310);
line(154,310,450,400);
setfillstyle(SOLID_FILL,GREEN);
outtextxy(10,30," Mundka");
fillellipse(10,30,4,4);
outtextxy(28,65," Rajdhani Park");
fillellipse(28,65,4,4);
outtextxy(46,100," Nangol Railway Station");
fillellipse(46,100,4,4);
outtextxy(64,135," Nangloi");
fillellipse(64,135,4,4);
outtextxy(82,170," Surajmal Stadium");
fillellipse(82,170,4,4);
outtextxy(100,205," Udyog Nagar");
fillellipse(100,205,4,4);
outtextxy(118,240," Preeagarhi");
fillellipse(118,240,4,4);
outtextxy(136,271," Paschim Vihar West");
fillellipse(136,275,4,4);
outtextxy(1,307," Paschim Vihar East");
fillellipse(154,310,4,4);
outtextxy(195,317," Madipur");
fillellipse(196,323,4,4);
outtextxy(128,337," Shivaji Park");
fillellipse(238,336,4,4);
outtextxy(280,340," Punjabi Bagh");
fillellipse(280,349,4,4);
outtextxy(188,360," Ashok Park Main");
fillellipse(322,362,4,4);
circle(322,362,6);
outtextxy(408,380," Satguru Ram Singh Marg");
fillellipse(408,387,4,4);
outtextxy(450,400," kirti Nagar");
fillellipse(450,400,4,4);
circle(450,400,6);
getch();
}
void stationdirectory()
{
FILE *fr, *fw;
clrscr();
fw=fopen("data.txt","w");
fprintf(fw,"%s","Vaishali Kaushambi Anand.Vihar Karkarduma Preet.Vihar Nirman.Vihar Laxmi.Nagar Yamuna.Bank Akshardham Mayur.Vihar.1 Mayur.Vihar.Ext New.Ashok.Nagar Noida.Sector.15 Noida.Sector.16 Noida.Sector.18 Botanical.Grdn Golf.Course Noida.City.Centre Indraprastha Pragati.Maidan Mandi.House Barakhamba.Rd Rajiv.Chowk R.K.Ashram.Marg Jhandewalan Karol.Bagh Rajendra.Place Patel.Nagar Shadipur Kirti.Nagar Moti.Nagar Ramesh.Nagar Rajouri.Grdn Tagore.Grdn Subhash.Ngr Tilak.Ngr Janakpuri.E Janakpuri.W Uttam.Nagar.E Uttam.Nagar.W Nawada Dwarka.Mor Dwarka Dwarka.Sec.14 Dwarka.Sec.13 Dwarka.Sec.12 Dwarka.Sec.11 Dwarka.Sec.10 Dwarka.Sec.9 Dwarka.Sec.8 Dwarka.Sec.21 ");
fprintf(fw,"%s","New.Delhi Chawri.Bazar Chandni.Chowk Kashmere.Gate Civil.Lines Vidhan.Sabha Vishwavidyalaya GTB.Nagar Model.Town Azadpur Adarsh.Nagar Jahangirpuri Patel.Chowk Central.Secretariate Udhyog.Bhawan Race.Course Jor.Bagh INA AIIMS Green.Park Hauz.Khas.Enclave Malviya.Nagar Saket Qutab.Minar Chhatarpur Sultanpur Ghitorni Arjangarh Guru.Dronacharya Sikandarpur M.G.Road IFFOC.Chowk Huda.City.Centre Shastri.Park Seelampur Welcome Shahdara Mansarovar.Park Jhilmil Dilshad.Garden Tis.Hazari Pulbangash Pratap.Nagar Shastri.Nagar Inder.Lok Kanhaiya.Nagar Keshav.Puram Netaji.Subhash.Place Kohat.Encalve Pitampura Rohini.East Rohini.West Rithala ");
fprintf(fw,"%s","Khan.Market JLN.Stadium Jangpura Lajpat.Nagar Moolchand Kailash.Colony Nehru.Place Kalkaji.Mandir Govindpuri Okhla Jasola Sarita.Vihar Mohan.Estate Tughalkabad Badarpur ");
fprintf(fw,"%s","Satguru.Ram.Singh.Marg Ashok.Park.Main Punjabi.Bagh Shivaji.Park Madipur Paschim.Vihar Sehdev.Park Peera.Garhi Udyog.Nagar Surajmal.Stadium Nangloi Nangloi.Railway.Station Rajdhani.Park Mundka ");
fclose(fw);
fr=fopen("data.txt","r");
fscanf(fr,"%s ",d);
space(d);
first=(N1*)malloc(sizeof(N1));
strcpy(first->stat,d);
first->lptr=NULL;
first->rptr=NULL;
first->ptr=NULL;
temp=first;
while(!feof(fr))
{
fscanf(fr,"%s ",d);
space(d);
if(strcmpi(d,"yamuna bank")!=0&&strcmpi(d,"Rajiv Chowk")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->rptr=x;
x->rptr=NULL;
x->ptr=NULL;
temp=x;
}
else if(strcmpi(d,"Rajiv Chowk")==0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->rptr=x;
x->rptr=NULL;
x->ptr=NULL;
temp=x;
temp2=temp;
temp3=temp;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"Dwarka sec 21")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->rptr=x;
x->rptr=NULL;
x->ptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->rptr=x;
x->rptr=NULL;
x->ptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"Kashmere Gate")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp2;
temp2->ptr1=x;
x->ptr1=NULL;
temp2=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp2;
temp2->ptr1=x;
x->ptr1=NULL;
temp2=x;
temp=temp2;
temp1=temp2;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"jahangirpuri")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp2;
temp2->ptr1=x;
x->ptr1=NULL;
temp2=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp2;
temp2->ptr1=x;
x->ptr1=NULL;
temp2=x;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"Central Secretariate")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp3;
temp3->ptr2=x;
x->ptr2=NULL;
temp3=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp3;
temp3->ptr2=x;
x->ptr2=NULL;
temp3=x;
back1=temp3;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"Huda City Centre")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp3;
temp3->ptr2=x;
x->ptr2=NULL;
temp3=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp3;
temp3->ptr2=x;
x->ptr2=NULL;
temp3=x;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"Dilshad Garden")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp1;
temp1->ptr=x;
x->ptr=NULL;
temp1=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp1;
temp1->ptr=x;
x->ptr=NULL;
temp1=x;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"rithala")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->rptr=x;
x->rptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->rptr=x;
x->rptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"Badarpur")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=back1;
back1->rptr=x;
x->rptr=NULL;
back1=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=back1;
back1->rptr=x;
x->rptr=NULL;
back1=x;
fscanf(fr,"%s ",d);
space(d);
temp=first;
while(strcmpi(temp->stat,"Kirti Nagar")!=0)
{
temp=temp->rptr;
}
temp1=first;
while(strcmpi(temp1->stat,"Rajiv chowk")!=0)
{
temp1=temp1->rptr;
}
while(strcmpi(temp1->stat,"kashmere gate")!=0)
{
temp1=temp1->ptr1;
}
while(strcmpi(temp1->stat,"Inder Lok")!=0)
{
temp1=temp1->rptr;
}
while(strcmpi(d,"Ashok park main")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->ptr=x;
x->ptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
x->lptr1=temp1;
temp->ptr=x;
temp1->ptr=x;
x->ptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"mundka")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->ptr=x;
x->ptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->ptr=x;
x->ptr=NULL;
temp=x;
fscanf(fr,"%s ",d);
space(d);
}
else
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp;
temp->rptr=x;
x->rptr=NULL;
x->ptr=NULL;
temp=x;
temp1=x;
fscanf(fr,"%s ",d);
space(d);
while(strcmpi(d,"noida city centre")!=0)
{
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp1;
temp1->ptr=x;
x->rptr=NULL;
x->ptr=NULL;
temp1=x;
fscanf(fr,"%s ",d);
space(d);
}
x=(N1*)malloc(sizeof(N1));
strcpy(x->stat,d);
x->lptr=temp1;
temp1->ptr=x;
x->rptr=NULL;
x->ptr=NULL;
temp1=x;
temp1=temp;
}
}
fclose(fr);
fw=fopen("places.txt","w");
fprintf(fw,"%s","Akshardham.Swaminarayan.Temple Akshardham Dilli.Haat INA Netaji.Subhash.Place Gurudwara.Bangla.Shahib Patel.Chowk Humayun's.Tomb Khan.Market Jangpura India.Gate Central.Secretariat Jama.Masjid Chandni.Chowk Jantar.Mantar Rajiv.Chowk Lotus.Temple Nehru.Place National.Gallery.Of.Modern.Art Central.Secretariat  National.Museum Central.Secretariat Parliment.House Central.Secretariat Purna.Qila Pragati.Maidan Qutab.Minar Qutab.Minar Red.Fort Chandni.Chowk Rashtrapati.Bhavan Central.Secretariat ");
fprintf(fw,"%s","Safdarjung's.Tomb Jorbagh Sacred.Heart.Cathedral Patel.Chowk Garden.Of.Five.Senses Saket Tughlakabad.Fort Tughlakabad Ansal.Plaza Moolchand Chandni.Chowk Chandni.Chowk Connaught.Place Rajiv.Chowk Hauz.Khas.Village Hauz.Khas Janpath Rajiv.Chowk Karol.Bagh Karol.Bagh Khadi.Gram.Udyog Rajiv.Chowk Khan.Market Khan.Market Noida.sector.18 Noida.Sector.18 Rajouri.Graden Rajouri.Garden Saket.District.center Saket State.Emporia.Complex Rajiv.Chowk Santushi.Shopping.Center Race.Course");
fclose(fw);
fw=fopen("places.txt","r");
fscanf(fw,"%s",d);
space(d);
fi=(N2*)malloc(sizeof(N2));
strcpy(fi->pla,d);
fscanf(fw,"%s",d);
space(d);
strcpy(fi->stat1,d);
strcpy(fi->stat2,"\0");
fi->pt=NULL;
te=fi;
while(!feof(fw))
{
fscanf(fw,"%s",d);
space(d);
if(strcmpi(d,"Dilli haat")==0||strcmpi(d,"Humayun's tomb")==0)
{
x1=(N2*)malloc(sizeof(N2));
strcpy(x1->pla,d);
fscanf(fw,"%s",d);
space(d);
strcpy(x1->stat1,d);
fscanf(fw,"%s",d);
space(d);
strcpy(x1->stat2,d);
x1->pt=NULL;
te->pt=x1;
te=x1;
}
else
{
x1=(N2*)malloc(sizeof(N2));
strcpy(x1->pla,d);
fscanf(fw,"%s",d);
space(d);
strcpy(x1->stat1,d);
strcpy(x1->stat2,"\0");
x1->pt=NULL;
te->pt=x1;
te=x1;
}
}
fclose(fw);
}
int an()
{
int a, b;
static int g=1;
cleardevice();
setcolor(7);
			settextstyle(DEFAULT_FONT,0,1);
			rectangle(30,60,420,90);
			outtextxy(40,70,"1.If aware of on which line station lies");
			rectangle(30,105,420,135);
			outtextxy(40,120,"2.If unaware of on which line the station lies");
			rectangle(30,150,240,180);
			outtextxy(40,160,"3.Previous page");
			if(g==1)
{
setcolor(15);
rectangle(30,60,420,90);
outtextxy(40,70,"1.If aware of on which line station lies");
}
else if(g==2)
{
setcolor(15);
rectangle(30,105,420,135);
outtextxy(40,120,"2.If unaware of on which line the station lies");
}
else if(g==3)
{
setcolor(15);
rectangle(30,150,240,180);
outtextxy(40,160,"3.Previous page");
}
v=getch();
while(v!='\r')
{
if(v=='s'||v=='S')
{
if(g==1)
{
setcolor(7);
rectangle(30,60,420,90);
outtextxy(40,70,"1.If aware of on which line station lies");
setcolor(15);
rectangle(30,105,420,135);
outtextxy(40,120,"2.If unaware of on which line the station lies");
g++;
v=getch();
}
else if(g==2)
{
setcolor(7);
rectangle(30,105,420,135);
outtextxy(40,120,"2.If unaware of on which line the station lies");
setcolor(15);
rectangle(30,150,240,180);
outtextxy(40,160,"3.Previous page");
g++;
v=getch();
}
else if(g==3)
{
setcolor(7);
rectangle(30,150,240,180);
outtextxy(40,160,"3.Previous page");
setcolor(15);
rectangle(30,60,420,90);
outtextxy(40,70,"1.If aware of on which line station lies");
g=g-2;
v=getch();
}
}
else if(v=='w'||v=='W')
{
if(g==2)
{
setcolor(7);
rectangle(30,105,420,135);
outtextxy(40,120,"2.If unaware of on which line the station lies");
setcolor(15);
rectangle(30,60,420,90);
outtextxy(40,70,"1.If aware of on which line station lies");
g--;
v=getch();
}
else if(g==3)
{
setcolor(7);
rectangle(30,150,240,180);
outtextxy(40,160,"3.Previous page");
setcolor(15);
rectangle(30,105,420,135);
outtextxy(40,120,"2.If unaware of on which line the station lies");
g--;
v=getch();
}
else if(g==1)
{
setcolor(7);
rectangle(30,60,420,90);
outtextxy(40,70,"1.If aware of on which line station lies");
setcolor(15);
rectangle(30,150,240,180);
outtextxy(40,160,"3.Previous page");
g=g+2;
v=getch();
}
}
else if(v=='E'||v=='e')
exit(0);
else
recall();
}
return g;
}
int initial()
{
int a;
static int h=1;
cleardevice();
setbkcolor(8);
			setcolor(7);
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(50,10,"ON WHICH LINE INITIAL STAION LIES");
			setcolor(7);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			setcolor(7);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			setcolor(7);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			setcolor(7);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			setcolor(7);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			if(h==1)
			{
			setcolor(15);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			}
			else if(h==2)
			{
			setcolor(15);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			}
			else if(h==3)
			{
			setcolor(15);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			}
			else if(h==4)
			{
			setcolor(15);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			}
			else if(h==5)
			{
			setcolor(15);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			}
			v=getch();
			while(v!='\r')
			{
			if(v=='s'||v=='S')
			{
			if(h==1)
			{
			setcolor(7);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			setcolor(15);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			h++;
			}
			else if(h==2)
			{
			setcolor(7);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			setcolor(15);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			h++;
			}
			else if(h==3)
			{
			setcolor(7);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			setcolor(15);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			h++;
			}
			else if(h==4)
			{
			setcolor(7);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			setcolor(15);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			h++;
			}
			else if(h==5)
			{
			setcolor(7);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			setcolor(15);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			h=h-4;
			}
			v=getch();
			}
			else if(v=='w'||v=='W')
			{
			if(h==5)
			{
			setcolor(7);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			setcolor(15);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			h--;
			}
			else if(h==4)
			{
			setcolor(7);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			setcolor(15);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			h--;
			}
			else if(h==3)
			{
			setcolor(7);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			setcolor(15);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			h--;
			}
			else if(h==2)
			{
			setcolor(7);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			setcolor(15);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			h--;
			}
			else if(h==1)
			{
			setcolor(7);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			setcolor(15);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			h=h+4;
			}
			v=getch();
			}
			else if(v=='E'||v=='e')
			exit(0);
			else
			recall();
			}
			cleardevice();
			restorecrtmode();
			switch(h)
			{
			case 1:
			{
			clrscr();
			textcolor(7);
			cprintf("BLUE LINE\r\n\r\n01.Vaishali                 02.Kaushambi                03.Anand Vihar ISBT \r\n04.Karkarduma               05.Preet Vihar              06.Nirman Vihar     \r\n07.Laxmi Nagar              08.Yamuna Bank              09.Akshardham       \r\n10.Mayur Vihar 1            11.Mayur Vihar Extn.        12.New Ashok Nagar  \r\n13.Noida Sector 15          14.Noida Sector 16          15.Noida Sector 18  \r\n16.Botanical Garden         17.Golf Course              18.Noida City Centre\r\n19.Indraprastha             20.Pragati Maidan           21.Mandi House      \r\n22.Barakhamba Road          23.Rajiv Chowk              24.RK Ashram Marg   \r\n25.Jhandewalan              26.Karol Bagh               27.Rajendra Place   \r\n28.Patel Nagar              29.Shadipur                 ");
			cprintf("30.Kirti Nagar      \r\n31.Moti Nagar               32.Ramesh Nagar             33.Rajouri Garden   \r\n34.Tagore Garden            35.Subhash Nagar            36.Tilak Nagar      \r\n37.Janakpuri East           38.Janakpuri West           39.Uttam Nagar East \r\n40.Uttam Nagar West         41.Nawada                   42.Dwarka Mor       \r\n43.Dwarka                   44.Dwarka Sec 14            45.Dwarka Sec 13    \r\n46.Dwarka Sec 12            47.Dwarka Sec 11            48.Dwarka Sec 10    \r\n49.Dwarka Sec 9             50.Dwarka Sec 8             51.Dwarka Sec 21    \r\n");
			cprintf("\r\nEnter serial number of  initial station= ");
			scanf("%d",&a);
			if(a>51)
			{
			cprintf("\r\n        Desired station does not lies on Blue Line");
			getch();
			setgraphmode(getgraphmode());
			initial();
			}
			break;
			}
			case 2:
			{
			clrscr();
			textcolor(7);
			cprintf("YELLOW LINE\r\n\r\n52.New Delhi                 53.Chawri Bazar              54.Chandni Chowk      \r55.Kashmere Gate             56.Civil Lines               57.Vidhan Sabha      \r\n58.Vishwavidyalaya           59.GTB Nagar                 60.Model Town        \r\n61.Azadpur                   62.Adarsh Nagar              63.Jahangirpuri      \r\n64.Patel Chowk               65.Central Secretariate      66.Udhyog Bhawan     \r\n67.Race Course               68.Jor Bagh                  69.INA               \r\n70.AIIMS                     71.Green Park                72.Hauz Khas Enclave \r\n73.Malviya Nagar             74.Saket                     75.Qutab Minar       \r\n76.Chhatarpur                77.Sultanpur                 78.Ghitorni          \r\n79.Arjangarh                 80.Guru Dronacharya          81.Sikandarpur       \r\n82.MG Road                   83.IFFOC Chowk               84.Huda City Centre\r\n");
			cprintf("\r\nEnter serial number of  initial station= ");
			scanf("%d",&a);
			if(a>84||a<52)
			{
			cprintf("\r\n        Desired station does not lies on Yellow Line");
			getch();
			setgraphmode(getgraphmode());
			initial();
			}
			break;
			}
			case 3:
			{
			clrscr();
			textcolor(7);
			cprintf("RED LINE\r\n\r\n85.Shastri Park            86.Seelampur               87.Welcome         \r\n88.Shahdara                89.Mansarovar Park         90.Jhilmil         \r\n91.Dilshad Garden          92.Tis Hazari              93.Pulbangash      \r\n94.Pratap Nagar            95.Shastri Nagar           96.Inder Lok       \r\n97.Kanhaiya Nagar          98.Keshav Puram            99.Netaji Subhash Place\r\n100.Kohat Enclave          101.Pitampura              102.Rohini East     \r\n103.Rohini West            104.Rithala\r\n");
			cprintf("\r\nEnter serial number of  initial station= ");
			scanf("%d",&a);
			if(a<85||a>104)
			{
			cprintf("\r\n        Desired station does not lies on Red Line");
			getch();
			setgraphmode(getgraphmode());
			initial();
			}
			break;
			}
			case 4:
			{
			clrscr();
			textcolor(7);
			cprintf("VIOLET LINE\r\n\r\n105.Khan Market         106.JLN Stadium         107.Jangpura      \r\n108.Lajpat Nagar        109.Moolchand           110.Kailash Colony\r\n111.Nehru Place         112.Kalkaji Mandir      113.Govindpuri    \r\n114.Okhla               115.Jasola              116.Sarita Vihar  \r\n117.Mohan Estate        118.Tughalkabad         119.Badarpur\r\n\r\n");
			cprintf("\r\nEnter serial number of  initial station= ");
			scanf("%d",&a);
			if(a<105||a>=120)
			{
			cprintf("\r\n        Desired station does not lies on Violet Line");
			getch();
			setgraphmode(getgraphmode());
			initial();
			}
			break;
			}
			case 5:
			{
			clrscr();
			textcolor(7);
			cprintf("GREEN LINE\r\n\r\n120.Satrguru Ram Singh Marg  121.Ashok Park Main         122.Punjabi Bagh          \r123.Shivaji Park             124.Madipur                 125.Paschim Vihar         \r126.Sehdev Park              127.Peera Garhi             128.Udyog Nagar           \r129.Surajmal Stadium         130.Nangloi                 131.Nangloi Rly Station   \r132.Rajdhani Park            133.Mundka\r\n");
			cprintf("\r\nEnter serial number of  initial station= ");
			scanf("%d",&a);
			if(a<120||a>133)
			{
			cprintf("\r\n        Desired station does not lies on Green Line");
			getch();
			clrscr();
			setgraphmode(getgraphmode());
			initial();
			}
			break;
			}
			}
			setgraphmode(getgraphmode());
			clearviewport();
			return a;
}
int final()
{
int b;
static int h=1;
cleardevice();
setbkcolor(8);
setcolor(7);
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(50,10,"ON WHICH LINE FINAL STAION LIES");
			setcolor(7);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			setcolor(7);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			setcolor(7);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			setcolor(7);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			setcolor(7);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			if(h==1)
			{
			setcolor(15);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			}
			else if(h==2)
			{
			setcolor(15);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			}
			else if(h==3)
			{
			setcolor(15);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			}
			else if(h==4)
			{
			setcolor(15);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			}
			else if(h==5)
			{
			setcolor(15);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			}
			v=getch();
			while(v!='\r')
			{
			if(v=='s'||v=='S')
			{
			if(h==1)
			{
			setcolor(7);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			setcolor(15);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			h++;
			}
			else if(h==2)
			{
			setcolor(7);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			setcolor(15);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			h++;
			}
			else if(h==3)
			{
			setcolor(7);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			setcolor(15);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			h++;
			}
			else if(h==4)
			{
			setcolor(7);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			setcolor(15);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			h++;
			}
			else if(h==5)
			{
			setcolor(7);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			setcolor(15);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			h=h-4;
			}
			v=getch();
			}
			else if(v=='w'||v=='W')
			{
			if(h==5)
			{
			setcolor(7);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			setcolor(15);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			h--;
			}
			else if(h==4)
			{
			setcolor(7);
			rectangle(45,170,400,200);
			outtextxy(50,180,"4.VIOLET LINE");
			setcolor(15);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			h--;
			}
			else if(h==3)
			{
			setcolor(7);
			rectangle(45,130,400,160);
			outtextxy(50,140,"3.RED LINE");
			setcolor(15);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			h--;
			}
			else if(h==2)
			{
			setcolor(7);
			rectangle(45,90,400,120);
			outtextxy(50,100,"2.YELLOW LINE");
			setcolor(15);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			h--;
			}
			else if(h==1)
			{
			setcolor(7);
			rectangle(45,50,400,80);
			outtextxy(50,60,"1.BLUE LINE");
			setcolor(15);
			rectangle(45,210,400,240);
			outtextxy(50,220,"5.GREEN LINE");
			h=h+4;
			}
			v=getch();
			}
			else if(v=='B'||v=='b')
			exit(0);
			else
			recall();
			}
			restorecrtmode();
			switch(h)
			{
			case 1:
			{
			clrscr();
			textcolor(7);
			cprintf("BLUE LINE\r\n\r\n01.Vaishali                 02.Kaushambi                03.Anand Vihar ISBT \r\n04.Karkarduma               05.Preet Vihar              06.Nirman Vihar     \r\n07.Laxmi Nagar              08.Yamuna Bank              09.Akshardham       \r\n10.Mayur Vihar 1            11.Mayur Vihar Extn.        12.New Ashok Nagar  \r\n13.Noida Sector 15          14.Noida Sector 16          15.Noida Sector 18  \r\n16.Botanical Garden         17.Golf Course              18.Noida City Centre\r\n19.Indraprastha             20.Pragati Maidan           21.Mandi House      \r\n22.Barakhamba Road          23.Rajiv Chowk              24.RK Ashram Marg   \r\n25.Jhandewalan              26.Karol Bagh               27.Rajendra Place   \r\n28.Patel Nagar              29.Shadipur                 ");
			cprintf("30.Kirti Nagar      \r\n31.Moti Nagar               32.Ramesh Nagar             33.Rajouri Garden   \r\n34.Tagore Garden            35.Subhash Nagar            36.Tilak Nagar      \r\n37.Janakpuri East           38.Janakpuri West           39.Uttam Nagar East \r\n40.Uttam Nagar West         41.Nawada                   42.Dwarka Mor       \r\n43.Dwarka                   44.Dwarka Sec 14            45.Dwarka Sec 13    \r\n46.Dwarka Sec 12            47.Dwarka Sec 11            48.Dwarka Sec 10    \r\n49.Dwarka Sec 9             50.Dwarka Sec 8             51.Dwarka Sec 21    \r\n");
			cprintf("\r\nEnter serial number of  final station= ");
			scanf("%d",&b);
			if(b>51)
			{
			cprintf("\r\n        Desired station does not lies on Blue Line");
			getch();
			setgraphmode(getgraphmode());
			final();
			}
			break;
			}
			case 2:
			{
			clrscr();
			textcolor(7);
			cprintf("YELLOW LINE\r\n\r\n52.New Delhi                 53.Chawri Bazar              54.Chandni Chowk      \r55.Kashmere Gate             56.Civil Lines               57.Vidhan Sabha      \r\n58.Vishwavidyalaya           59.GTB Nagar                 60.Model Town        \r\n61.Azadpur                   62.Adarsh Nagar              63.Jahangirpuri      \r\n64.Patel Chowk               65.Central Secretariate      66.Udhyog Bhawan     \r\n67.Race Course               68.Jor Bagh                  69.INA               \r\n70.AIIMS                     71.Green Park                72.Hauz Khas Enclave \r\n73.Malviya Nagar             74.Saket                     75.Qutab Minar       \r\n76.Chhatarpur                77.Sultanpur                 78.Ghitorni          \r\n79.Arjangarh                 80.Guru Dronacharya          81.Sikandarpur       \r\n82.MG Road                   83.IFFOC Chowk               84.Huda City Centre\r\n");
			cprintf("\r\nEnter serial number of  final station= ");
			scanf("%d",&b);
			if(b<52||b>84)
			{
			cprintf("\r\n        Desired station does not lies on Yellow Line");
			getch();
			setgraphmode(getgraphmode());
			final();
			}
			break;
			}
			case 3:
			{
			clrscr();
			textcolor(7);
			cprintf("RED LINE\r\n\r\n85.Shastri Park            86.Seelampur               87.Welcome         \r\n88.Shahdara                89.Mansarovar Park         90.Jhilmil         \r\n91.Dilshad Garden          92.Tis Hazari              93.Pulbangash      \r\n94.Pratap Nagar            95.Shastri Nagar           96.Inder Lok       \r\n97.Kanhaiya Nagar          98.Keshav Puram            99.Netaji Subhash Place\r\n100.Kohat Enclave          101.Pitampura              102.Rohini East     \r\n103.Rohini West            104.Rithala\r\n");
			cprintf("\r\nEnter serial number of  initial station= ");
			scanf("%d",&b);
			if(b<85||b>104)
			{
			cprintf("\r\n        Desired station does not lies on Red Line");
			getch();
			setgraphmode(getgraphmode());
			final();
			}
			break;
			}
			case 4:
			{
			clrscr();
			textcolor(7);
			cprintf("VIOLET LINE\r\n\r\n105.Khan Market         106.JLN Stadium         107.Jangpura      \r\n108.Lajpat Nagar        109.Moolchand           110.Kailash Colony\r\n111.Nehru Place         112.Kalkaji Mandir      113.Govindpuri    \r\n114.Okhla               115.Jasola              116.Sarita Vihar  \r\n117.Mohan Estate        118.Tughalkabad         119.Badarpur\r\n\r\n");
			cprintf("\r\nEnter serial number of  final station= ");
			scanf("%d",&b);
			if(b<105||b>=120)
			{
			cprintf("\r\n        Desired station does not lies on Violet Line");
			getch();
			setgraphmode(getgraphmode());
			final();
			}
			break;
			}
			case 5:
			{
			clrscr();
			textcolor(7);
			cprintf("GREEN LINE\r\n\r\n120.Satrguru Ram Singh Marg  121.Ashok Park Main         122.Punjabi Bagh          \r123.Shivaji Park             124.Madipur                 125.Paschim Vihar         \r126.Sehdev Park              127.Peera Garhi             128.Udyog Nagar           \r129.Surajmal Stadium         130.Nangloi                 131.Nangloi Rly Station   \r132.Rajdhani Park            133.Mundka\r\n");
			cprintf("\r\nEnter serial number of  final station= ");
			scanf("%d",&b);
			if(b<120||b>133)
			{
			cprintf("\r\n        Desired station does not lies on Green Line");
			getch();
			setgraphmode(getgraphmode());
			final();
			}
			break;
			}
			}
			setgraphmode(getgraphmode());
			clearviewport();
			return b;
}
void instructions()
{
cleardevice();
setcolor(WHITE);
settextstyle(DEFAULT_FONT,0,2);
outtextxy(200,10,"INSTRUCTIONS");
settextstyle(DEFAULT_FONT,0,1);
outtextxy(10,60,"1.To move up and down in any menu use 'W' and 'S' respectively");
outtextxy(10,90,"only. Dont't use arrow keys in any case. If by mistake you press");
outtextxy(10,120,"arrow keys also, program will return on first menu and then start");
outtextxy(10,150,"your working again.");
outtextxy(10,180,"2.In case of entering serial numbers of initial and final stations");
outtextxy(10,210,"use number keys only. Even then if you press any alphabet or anything");
outtextxy(10,240,"else, program will return you to the main menu. go to exit and now you");
outtextxy(10,270,"have to run the program again. Sorry for any inconvenience caused.");
outtextxy(10,300,"3.While searching a line for a station be careful for where to give");
outtextxy(10,330,"space and where not to. For help see the data file and replace every '.'");
outtextxy(10,360,"with ' ' and then use. Secondly there are some abbreviations");
outtextxy(10,390,"used like 'grdn' for 'garden' and 'sec' for 'sector',");
outtextxy(10,420,"so be careful while using it");
outtextxy(10,450,"For further details check developers option and call us.");
getch();
}
void recall()
{
char d[20];
int t=0, q=0, a, b, g, p=0;
static int r=1, u=1;
setbkcolor(8);
cleardevice();
setcolor(7);
setfillstyle(SOLID_FILL,CYAN);
bar(0,300,400,320);
bar(0,340,400,360);
bar(0,380,400,400);
setcolor(WHITE);
settextstyle(DEFAULT_FONT,0,1);
outtextxy(5,310,"D: DEVELOPERS");
outtextxy(5,350,"C: CREDITS");
outtextxy(5,390,"I: INSTRUCTIONS");
setcolor(7);
settextstyle(DEFAULT_FONT,0,2);
outtextxy(5,15,"Enter 'S'to move down and 'W'to move up");
rectangle(30,60,600,95);
outtextxy(40,70,"1.TO SEE MAP");
rectangle(30,105,600,140);
outtextxy(40,120,"2.TO SEE ROUTE DETAILS");
rectangle(30,150,600,180);
outtextxy(40,160,"3.PLACES TO VISIT THROUGH METRO");
rectangle(30,190,600,220);
outtextxy(40,200,"4.EXIT");
if(r==1)
{
setcolor(15);
rectangle(30,60,600,95);
outtextxy(40,70,"1.TO SEE MAP");
}
else if(r==2)
{
setcolor(15);
rectangle(30,105,600,140);
outtextxy(40,120,"2.TO SEE ROUTE DETAILS");
}
else if(r==3)
{
setcolor(15);
rectangle(30,150,600,180);
outtextxy(40,160,"3.PLACES TO VISIT THROUGH METRO");
}
else if(r==4)
{
setcolor(15);
rectangle(30,190,600,220);
outtextxy(40,200,"4.EXIT");
}
v=getch();
while(v!='\r')
{
if(v=='s'||v=='S')
{
if(r==1)
{
setcolor(7);
rectangle(30,60,600,95);
outtextxy(40,70,"1.TO SEE MAP");
setcolor(15);
rectangle(30,105,600,140);
outtextxy(40,120,"2.TO SEE ROUTE DETAILS");
r++;
}
else if(r==2)
{
setcolor(7);
rectangle(30,105,600,140);
outtextxy(40,120,"2.TO SEE ROUTE DETAILS");
setcolor(15);
rectangle(30,150,600,180);
outtextxy(40,160,"3.PLACES TO VISIT THROUGH METRO");
r++;
}
else if(r==3)
{
setcolor(7);
rectangle(30,150,600,180);
outtextxy(40,160,"3.PLACES TO VISIT THROUGH METRO");
setcolor(15);
rectangle(30,190,600,220);
outtextxy(40,200,"4.EXIT");
r++;
}
else if(r==4)
{
setcolor(7);
rectangle(30,190,600,220);
outtextxy(40,200,"4.EXIT");
setcolor(15);
rectangle(30,60,600,95);
outtextxy(40,70,"1.TO SEE MAP");
r=r-3;
}
v=getch();
}
else if(v=='w'||v=='W')
{
if(r==2)
{
setcolor(7);
rectangle(30,105,600,140);
outtextxy(40,120,"2.TO SEE ROUTE DETAILS");
setcolor(15);
rectangle(30,60,600,95);
outtextxy(40,70,"1.TO SEE MAP");
r--;
}
else if(r==3)
{
setcolor(7);
rectangle(30,150,600,180);
outtextxy(40,160,"3.PLACES TO VISIT THROUGH METRO");
setcolor(15);
rectangle(30,105,600,140);
outtextxy(40,120,"2.TO SEE ROUTE DETAILS");
r--;
}
else if(r==4)
{
setcolor(7);
rectangle(30,190,600,220);
outtextxy(40,200,"4.EXIT");
setcolor(15);
rectangle(30,150,600,180);
outtextxy(40,160,"3.PLACES TO VISIT THROUGH METRO");
r--;
}
else if(r==1)
{
setcolor(7);
rectangle(30,60,600,95);
outtextxy(40,70,"1.TO SEE MAP");
setcolor(15);
rectangle(30,190,600,220);
outtextxy(40,200,"4.EXIT");
r=r+3;
}
v=getch();
}
else if(v=='B'||v=='b')
exit(0);
else if(v=='d'||v=='D')
{
setcolor(7);
cleardevice();
settextstyle(DEFAULT_FONT,0,1);
setcolor(WHITE);
outtextxy(250,140,"DEVELOPED BY:-");
outtextxy(150,200,"AKASH GUPTA-> Ph:9873320092");
outtextxy(150,240,"ARJUN PRAKASH-> Ph:9811107273");
outtextxy(150,280,"KARTIK SAXENA-> Ph:9873997579");
outtextxy(150,320,"RAHUL AJAY-> Ph:9911944787");
getch();
recall();
}
else if(v=='c'||v=='C')
{
setcolor(7);
cleardevice();
settextstyle(DEFAULT_FONT,0,1);
setcolor(WHITE);
outtextxy(250,140,"CREDITS:-");
outtextxy(110,200,"Special thanks to Delhi NCR Metro application on");
outtextxy(110,230,"android, turbo c to make this program and run");
outtextxy(110,260,"it successfully");
getch();
recall();
}
else if(v=='i'||v=='I')
{
instructions();
recall();
}
else
recall();
}
switch(r)
{
	case 1:
		{
			u=map();
			switch(u)
			{
			case 1:
			{
			map1();
			recall();
			break;
			}
			case 2:
			{
			map2();
			recall();
			break;
			}
			case 3:
			{
			map3();
			recall();
			break;
			}
			case 4:
			{
			map4();
			recall();
			break;
			}
			case 5:
			{
			map5();
			recall();
			break;
			}
			case 6:
			{
			recall();
			break;
			}
			}
			break;
		}
	case 2:
		{
			g=an();
			switch(g)
			{
			case 1:
			{
			setgraphmode(getgraphmode());
			a=initial();
			setgraphmode(getgraphmode());
			b=final();
			restorecrtmode();
			break;
			}
			case 2:
			{
			restorecrtmode();
			clrscr();
			l=0;
			i=0;
			cprintf("\n\n       Enter the name of station: ");
			fflush(stdin);
			gets(d);
			if(strcmpi(d,"rajiv chowk")==0)
			cprintf("\n\n        Desired station lies on the junction of BLUE and YELLOW line");
			else if(strcmpi(d,"Central secretariate")==0)
			cprintf("\n\n        Desired station lies on the junction of VIOLET and YELLOW line");
			else if(strcmpi(d,"Kashmere gate")==0)
			cprintf("\n\n        Desired station lies on the junction of RED and YELLOW line");
			else if(strcmpi(d,"kirti nagar")==0)
			cprintf("\n\n        Desired station lies on the junction of BLUE and GREEN line");
			else if(strcmpi(d,"inder lok")==0)
			cprintf("\n\n        Desired station lies on the junction of RED and GREEN line");
			else if(strcmpi(d,"Yamuna bank")==0)
			{
			textcolor(CYAN);
			cprintf("\n\n        Desired station lies on BLUELINE");
			}
			else
			{
			temp=first;
			while(temp!=NULL)
			{
			if(strcmpi(temp->stat,d)==0)
			{
			l=1;
			textcolor(CYAN);
			cprintf("\n\n        Desired station lies on BLUELINE");
			break;
			}
			temp=temp->rptr;
			}
			temp=first;
			while(strcmpi(temp->stat,"Yamuna bank")!=0)
			{
			temp=temp->rptr;
			}
			while(temp!=NULL)
			{
			if(strcmpi(temp->stat,d)==0)
			{
			l=1;
			textcolor(CYAN);
			cprintf("\n\n        Desired station lies on BLUELINE");
			break;
			}
			temp=temp->ptr;
			}
			temp=first;
			while(strcmpi(temp->stat,"rajiv chowk")!=0)
			{
			temp=temp->rptr;
			}
			temp2=temp;
			temp3=temp;
			while(temp2!=NULL)
			{
			if(strcmpi(temp2->stat,d)==0)
			{
			l=1;
			textcolor(YELLOW);
			cprintf("\n\n        Desired station lies on YELLOWLINE");
			break;
			}
			temp2=temp2->ptr1;
			}
			while(temp3!=NULL)
			{
			if(strcmpi(temp3->stat,d)==0)
			{
			l=1;
			textcolor(YELLOW);
			cprintf("\n\n        Desired station lies on YELLOWLINE");
			break;
			}
			temp3=temp3->ptr2;
			}
			temp=first;
			while(strcmpi(temp->stat,"Rajiv Chowk")!=0)
			{
			temp=temp->rptr;
			}
			while(strcmpi(temp->stat,"kashmere Gate")!=0)
			{
			temp=temp->ptr1;
			}
			temp1=temp;
			temp2=temp;
			while(temp1!=NULL)
			{
			if(strcmpi(temp1->stat,d)==0)
			{
			l=1;
			textcolor(RED);
			cprintf("\n\n        Desired station lies on REDLINE");
			break;
			}
			temp1=temp1->rptr;
			}
			while(temp2!=NULL)
			{
			if(strcmpi(temp2->stat,d)==0)
			{
			l=1;
			textcolor(RED);
			cprintf("\n\n        Desired station lies on REDLINE");
			break;
			}
			temp2=temp2->ptr;
			}
			temp=first;
			while(strcmpi(temp->stat,"Rajiv chowk")!=0)
			{
			temp=temp->rptr;
			}
			while(strcmpi(temp->stat,"Central secretariate")!=0)
			{
			temp=temp->ptr2;
			}
			while(temp!=NULL)
			{
			if(strcmpi(temp->stat,d)==0)
			{
			l=1;
			textcolor(BLUE);
			cprintf("\n\n        Desired station lies on VIOLETLINE");
			break;
			}
			temp=temp->rptr;
			}
			temp=first;
			while(strcmpi(temp->stat,"kirti nagar")!=0)
			{
			temp=temp->rptr;
			}
			while(temp!=NULL)
			{
			if(strcmpi(temp->stat,d)==0)
			{
			l=1;
			textcolor(GREEN);
			cprintf("\n\n        Desired station lies on GREENLINE");
			break;
			}
			temp=temp->ptr;
			}
			if(l!=1)
			{
			cprintf("\r\n\n\n       Station Not Found");
			}
			}
			textcolor(7);
			getch();
			setgraphmode(getgraphmode());
			recall();
			break;
			}
			case 3:
			{
			setgraphmode(getgraphmode());
			recall();
			}
			}
			if(a>0&&a<=8)
			{
				temp=first;
				for(i=1;i<a;i++)
				{
					temp=temp->rptr;
				}
				q=0;
				back1=temp;
			}
			else if(a>=19&&a<52)
			{
				temp=first;
				for(i=1;i<a-10;i++)
				{
					temp=temp->rptr;
				}
				q=1;
				back1=temp;
			}
			else if(a>8&&a<=18)
			{
				temp=first;
				while(strcmpi(temp->stat,"yamuna bank")!=0)
				{
					temp=temp->rptr;
				}
				temp1=temp;
				for(i=1;i<a-7;i++)
				{
					temp1=temp1->ptr;
				}
				q=2;
				back1=temp1;
			}
			else if(a>51&&a<64)
			{
				temp=first;
				for(i=1;i<=12;i++)
				{
					temp=temp->rptr;
				}
				temp2=temp;
				for(i=1;i<=a-51;i++)
				{
				temp2=temp2->ptr1;
				}
				q=3;
				back1=temp2;
			}
			else if(a>=64&&a<=84)
			{
				temp=first;
				for(i=1;i<=12;i++)
				{
					temp=temp->rptr;
				}
				temp3=temp;
				for(i=1;i<=a-63;i++)
				{
					temp3=temp3->ptr2;
				}
				q=3;
				back1=temp3;
			}
			else if(a>=85&&a<=104)
			{
				temp=first;
				while(strcmpi(temp->stat,"rajiv chowk")!=0)
				{
					temp=temp->rptr;
				}
				while(strcmpi(temp->stat,"Kashmere Gate")!=0)
				{
					temp=temp->ptr1;
				}
				if(a>=85&&a<=91)
				{
					for(i=0;i<a-84;i++)
					{
						temp=temp->ptr;
					}
					back1=temp;
					q=4;
				}
				else
				{
					for(i=0;i<a-91;i++)
					{
						temp=temp->rptr;
					}
					back1=temp;
					q=4;
				}
			}
			else if(a>=105&&a<120)
			{
				temp=first;
				while(strcmpi(temp->stat,"rajiv chowk")!=0)
				{
					temp=temp->rptr;
				}
				while(strcmpi(temp->stat,"Central Secretariate")!=0)
				{
					temp=temp->ptr2;
				}
				for(i=0;i<a-104;i++)
				{
					temp=temp->rptr;
				}
				back1=temp;
				q=5;
			}
			else if(a>=120&&a<=133)
			{
				temp=first;
				while(strcmpi(temp->stat,"Kirti nagar")!=0)
				{
					temp=temp->rptr;
				}
				for(i=0;i<a-119;i++)
				{
					temp=temp->ptr;
				}
				back1=temp;
				q=6;
			}
			else
			{
				cprintf("Enter correct choice");
				getch();
				recall();
				break;
			}
			if(b<=8)
			{
				temp=first;
				for(i=1;i<b;i++)
				{
					temp=temp->rptr;
				}
				t=0;
				back2=temp;
			}
			else if(b>=19&&b<52)
			{
				temp=first;
				for(i=1;i<b-10;i++)
				{
					temp=temp->rptr;
				}
				t=1;
				back2=temp;
			}
			else if(b>8&&b<=18)
			{
				temp=first;
				while(strcmpi(temp->stat,"yamuna bank")!=0)
				{
					temp=temp->rptr;
				}
				temp1=temp;
				for(i=1;i<b-7;i++)
				{
					temp1=temp1->ptr;
				}
				t=2;
				back2=temp1;
			}
			else if(b>51&&b<64)
			{
				temp=first;
				for(i=1;i<=12;i++)
				{
					temp=temp->rptr;
				}
				temp2=temp;
				for(i=1;i<=b-51;i++)
				{
				temp2=temp2->ptr1;
				}
				t=3;
				back2=temp2;
			}
			else if(b>=64&&b<=84)
			{
				temp=first;
				for(i=1;i<=12;i++)
				{
					temp=temp->rptr;
				}
				temp3=temp;
				for(i=1;i<=b-63;i++)
				{
					temp3=temp3->ptr2;
				}
				t=3;
				back2=temp3;
			}
			else if(b>=85&&b<=104)
			{
				temp=first;
				while(strcmpi(temp->stat,"rajiv chowk")!=0)
				{
					temp=temp->rptr;
				}
				while(strcmpi(temp->stat,"Kashmere Gate")!=0)
				{
					temp=temp->ptr1;
				}
				if(b>=85&&b<=91)
				{
					for(i=0;i<b-84;i++)
					{
						temp=temp->ptr;
					}
					back2=temp;
					t=4;
				}
				else
				{
					for(i=0;i<b-91;i++)
					{
						temp=temp->rptr;
					}
					back2=temp;
					t=4;
				}
			}
			else if(b>=105&&b<120)
			{
				temp=first;
				while(strcmpi(temp->stat,"rajiv chowk")!=0)
				{
					temp=temp->rptr;
				}
				while(strcmpi(temp->stat,"Central Secretariate")!=0)
				{
					temp=temp->ptr2;
				}
				for(i=0;i<b-104;i++)
				{
					temp=temp->rptr;
				}
				back2=temp;
				t=5;
			}
			else if(b>=120&&b<=133)
			{
				temp=first;
				while(strcmpi(temp->stat,"Kirti nagar")!=0)
				{
					temp=temp->rptr;
				}
				for(i=0;i<b-119;i++)
				{
					temp=temp->ptr;
				}
				back2=temp;
				t=6;
			}
			else
			{
				cprintf("Enter correct choice");
				getch();
				recall();
				break;
			}
			clrscr();
			textcolor(7);
			cprintf("Initial station selected= %s",back1->stat);
			cprintf("\r\n\r\nFinal station selected= %s",back2->stat);
			cprintf("\r\n\r\nStations need to be travelled= ");

			if(t==1&&q==0)
			{
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				textcolor(CYAN);
				cprintf("%s",back2->stat);
			}
			else if(q==6&&t==0)
			{
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==0&&t==6)
			{
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(GREEN);
				cprintf("%s",back1->stat);
			}
			else if(q==6&&t==1)
			{
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				if(b>=19&&b<=23)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==1&&t==6)
			{
				if(a>=19&&a<=23)
				{
					while(strcmpi(back1->stat,"kirti nagar")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(GREEN);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(strcmpi(back1->stat,"kirti nagar")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(GREEN);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==6&&t==2)
			{
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"Yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
				       p++;
				       textcolor(CYAN);
				       cprintf("%s-> ",back1->stat);
				       back1=back1->ptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==2&&t==6)
			{
				while(strcmpi(back1->stat,"Yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(GREEN);
				cprintf("%s",back1->stat);
			}
			else if(q==6&&t==3)
			{
				while(strcmpi(back1->stat,"Ashok park main")!=0)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				if(b>63&&b<=84)
				{
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr2;
				}
				textcolor(YELLOW);
				cprintf("%s",back1->stat);
				}
				else
				{
				back1=back1->lptr1;
				while(strcmpi(back1->stat,"kashmere gate")!=0)
				{
					p++;
					textcolor(RED);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				if(b>=52&&b<=55)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
				       textcolor(YELLOW);
				       cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
				       textcolor(YELLOW);
				       cprintf("%s",back1->stat);
				}
				}
			}
			else if(q==3&&t==6)
			{
				if(a>63&&a<=84)
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(strcmpi(back1->stat,"kirti nagar")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(GREEN);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
				else if(a>=52&&a<=55)
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					while(strcmpi(back1->stat,"Inder lok")!=0)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(GREEN);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
				       textcolor(GREEN);
				       cprintf("%s",back1->stat);
				}
				else
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(strcmpi(back1->stat,"Inder lok")!=0)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(GREEN);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
				       textcolor(GREEN);
				       cprintf("%s",back1->stat);
				}
			}
			else if(q==6&&t==4)
			{
				while(strcmpi(back1->stat,"ashok park main")!=0)
				{
				       p++;
				       textcolor(GREEN);
				       cprintf("%s-> ",back1->stat);
				       back1=back1->lptr;
				}
				back1=back1->lptr1;
				if(b>=85&&b<=91)
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->lptr;
					}
					while(back1!=back2)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->ptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else if(b>91&&b<=96)
				{
					while(back1!=back2)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->lptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->rptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==4&&t==6)
			{
				if(a>=85&&a<=91)
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->lptr;
					}
					while(strcmpi(back1->stat,"inder lok")!=0)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->rptr;
					}
					while(back1!=back2)
					{
					       p++;
					       textcolor(GREEN);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->ptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
				else if(a>91&&a<=96)
				{
					while(strcmpi(back1->stat,"inder lok")!=0)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->rptr;
					}
					while(back1!=back2)
					{
					       p++;
					       textcolor(GREEN);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->ptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(strcmpi(back1->stat,"inder lok")!=0)
					{
					       p++;
					       textcolor(RED);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->lptr;
					}
					while(back1!=back2)
					{
					       p++;
					       textcolor(GREEN);
					       cprintf("%s-> ",back1->stat);
					       back1=back1->ptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==6&&t==5)
			{
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"central secretariate")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr2;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				textcolor(BLUE);
				cprintf("%s",back1->stat);
			}
			else if(q==5&&t==6)
			{
				while(strcmpi(back1->stat,"central secretariate")!=0)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"kirti nagar")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(GREEN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(GREEN);
				cprintf("%s",back1->stat);
			}
			else if(q==6&&t==6)
			{
				if(a>b)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(GREEN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(GREEN);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(GREEN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==3&&t==3)
			{
				if(a>=b&&(a>=64&&a<=84)&&(b>23&&b<64))
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
				}
				else if(a>=b)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
						textcolor(YELLOW);
						cprintf("%s",back1->stat);
				}
				else if(a<b&&(a>23&&a<64)&&(b>23&&b<64))
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
				}
				else if(a<b&&(a>=64&&a<=84)&&(b>=64&&b<=84))
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==4&&t==4)
			{
				if(a>=b&&(a>91&&a<=104)&&(b>=85&&b<=91))
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{

						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else if(a>=b)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else if(a<b&&(a>=85&&a<=91)&&(b>=85&&b<=91))
				{
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else if(a<b&&(a>91&&a<=104)&&(b>91&&b<=104))
				{
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==0&&t==4)
			{
				while(strcmpi(back1->stat,"Rajiv Chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(strcmpi(back1->stat,"Kashmere Gate")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr1;
				}
				if(b>=85&&b<=91)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==4&&t==0)
			{
				while(strcmpi(back1->stat,"Kashmere gate")!=0)
				{
					p++;
					textcolor(RED);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==1&&t==4)
			{
				if(a>=19&&a<=23)
				{
					while(strcmpi(back1->stat,"Rajiv chowk")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					if(b>=85&&b<=91)
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->ptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
					else
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->rptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
				}
				else
				{
					while(strcmpi(back1->stat,"Rajiv chowk")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					if(b>=85&&b<=91)
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->ptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
					else
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->rptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
				}
			}
			else if(q==4&&t==1)
			{
				while(strcmpi(back1->stat,"Kashmere gate")!=0)
				{
					p++;
					textcolor(RED);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				if(b>=19&&b<=23)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==2&&t==4)
			{
				while(strcmpi(back1->stat,"Yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"Rajiv chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(strcmpi(back1->stat,"Kashmere gate")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr1;
				}
				if(b>=85&&b<=91)
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->ptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
					else
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->rptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
			}
			else if(q==4&&t==2)
			{
				while(strcmpi(back1->stat,"Kashmere gate")!=0)
				{
					p++;
					textcolor(RED);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==4&&t==3)
			{
				while(strcmpi(back1->stat,"kashmere gate")!=0)
				{
					p++;
					textcolor(RED);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				if(b>63&&b<=84)
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
				       textcolor(YELLOW);
				       cprintf("%s",back1->stat);
				}
				else if(b>=52&&b<=55)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
				       textcolor(YELLOW);
				       cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
				       textcolor(YELLOW);
				       cprintf("%s",back1->stat);
				}
			}
			else if(q==3&&t==4)
			{
				if(a>63&&a<=84)
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					if(b>=85&&b<=91)
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->ptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
					else
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->rptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
				}
				else if(a>=52&&a<=55)
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					if(b>=85&&b<=91)
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->ptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
					else
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->rptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
				}
				else
				{
					while(strcmpi(back1->stat,"kashmere gate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					if(b>=85&&b<=91)
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->ptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
					else
					{
						while(back1!=back2)
						{
							p++;
							textcolor(RED);
							cprintf("%s-> ",back1->stat);
							back1=back1->rptr;
						}
						textcolor(RED);
						cprintf("%s",back1->stat);
					}
				}
			}
			else if(q==0&&t==5)
			{
				while(strcmpi(back1->stat,"Rajiv chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(strcmpi(back1->stat,"Central secretariate")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr2;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				textcolor(BLUE);
				cprintf("%s",back1->stat);
			}
			else if(q==5&&t==0)
			{
				while(strcmpi(back1->stat,"Central Secretariate")!=0)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"Rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==1&&t==5)
			{
				if(a>=19&&a<=23)
				{
					while(strcmpi(back1->stat,"Rajiv chowk")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					while(strcmpi(back1->stat,"Central Secretariate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(BLUE);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(BLUE);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(strcmpi(back1->stat,"Rajiv chowk")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(strcmpi(back1->stat,"central secretariate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(BLUE);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(BLUE);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==5&&t==1)
			{
				while(strcmpi(back1->stat,"Central secretariate")!=0)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				if(b>=19&&b<=23)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==2&&t==5)
			{
				while(strcmpi(back1->stat,"Yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"Rajiv chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(strcmpi(back1->stat,"central secretariate")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr2;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				textcolor(BLUE);
				cprintf("%s",back1->stat);
			}
			else if(q==5&&t==2)
			{
				while(strcmpi(back1->stat,"central secretariate")!=0)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==3&&t==5)
			{
				if(a>=52&&a<=63)
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(strcmpi(back1->stat,"central secretariate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(BLUE);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(BLUE);
					cprintf("%s",back1->stat);
				}
				else if(a>=64&&a<=65)
				{
					while(strcmpi(back1->stat,"Central secretariate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(BLUE);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(BLUE);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(strcmpi(back1->stat,"Central secretariate")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(BLUE);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(BLUE);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==5&&t==3)
			{
				while(strcmpi(back1->stat,"central secretariate")!=0)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				if(b>=52&&b<=63)
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
				}
				else if(b>=64&&b<=65)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==4&&t==5)
			{
				while(strcmpi(back1->stat,"kashmere gate")!=0)
				{
					p++;
					textcolor(RED);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"central secretariate")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr2;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				textcolor(BLUE);
				cprintf("%s",back1->stat);
			}
			else if(q==5&&t==4)
			{
				while(strcmpi(back1->stat,"central secretariate")!=0)
				{
					p++;
					textcolor(BLUE);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"kashmere gate")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr1;
				}
				if(b>=85&&b<=91)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(RED);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(RED);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==5&&t==5)
			{
				if(a>=b)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(BLUE);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(BLUE);
					cprintf("%s",back1->stat);
			}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(BLUE);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(BLUE);
					cprintf("%s",back1->stat);
				}
			}
			else if(t==2&&q==0)
			{
				while(strcmpi(back1->stat,"yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==2&&t==3)
			{
				while(strcmpi(back1->stat,"yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				if(b>23&&b<64)
				{
				while(back1!=back2)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr1;
				}
				textcolor(YELLOW);
				cprintf("%s",back1->stat);
				}
				else
				{
				while(back1!=back2)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr2;
				}
				textcolor(YELLOW);
				cprintf("%s",back1->stat);
				}
			}
			else if(q==3&&t==2)
			{
				while(strcmpi(back1->stat,"RAJIV CHOWK")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(strcmpi(back1->stat,"yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==1&&t==3)
			{
				if(a<23&&a>18)
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					if(b>23&&b<64)
					{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
					}
					else
					{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
					}
				}
				else
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					if(b>23&&b<64)
					{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr1;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
					}
					else
					{
					while(back1!=back2)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr2;
					}
					textcolor(YELLOW);
					cprintf("%s",back1->stat);
					}
				}
			}
			else if(q==3&&t==1)
			{
				if(b<23&&b>18)
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
				}
				else
				{
					while(strcmpi(back1->stat,"rajiv chowk")!=0)
					{
						p++;
						textcolor(YELLOW);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
				}
			}
			else if(t==2&&q==1)
			{
				while(strcmpi(back1->stat,"yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(t==1&&q==2)
			{
				while(strcmpi(back1->stat,"yamuna bank")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==1&&t==1)
			{
				if(a>=b)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==1&&t==0)
			{

				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==2&&t==0)
			{
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==3&&t==0)
			{
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				while(back1!=back2)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->lptr;
				}
				textcolor(CYAN);
				cprintf("%s",back1->stat);
			}
			else if(q==0&&t==0)
			{
				if(a>=b)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->rptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==2&&t==2)
			{
				if(a>=b)
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->lptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
				else
				{
					while(back1!=back2)
					{
						p++;
						textcolor(CYAN);
						cprintf("%s-> ",back1->stat);
						back1=back1->ptr;
					}
					textcolor(CYAN);
					cprintf("%s",back1->stat);
				}
			}
			else if(q==0&&t==3)
			{
				while(strcmpi(back1->stat,"rajiv chowk")!=0)
				{
					p++;
					textcolor(CYAN);
					cprintf("%s-> ",back1->stat);
					back1=back1->rptr;
				}
				if(b>23&&b<64)
				{
				while(back1!=back2)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr1;
				}
				textcolor(YELLOW);
				cprintf("%s",back1->stat);
				}
				else
				{
				 while(back1!=back2)
				{
					p++;
					textcolor(YELLOW);
					cprintf("%s-> ",back1->stat);
					back1=back1->ptr2;
				}
				textcolor(YELLOW);
				cprintf("%s",back1->stat);
				textcolor(CYAN);
				}
			}
			textcolor(7);
			cprintf("\r\n\r\nTotal stops= %d",p);
			cprintf("\r\n\r\nEstimated time of journey is= %d minutes",p*3);
			cprintf("\r\n\r\n* Fare will be= Rs: %d",7+p*1);
			cprintf("\r\n\r\n* Fare is estimated. May differ from actual fare.");
			getch();
			setgraphmode(getgraphmode());
			recall();
			break;
		}
		case 3:
		{
			te=fi;
			setcolor(7);
			cleardevice();
			j=20;
			for(i=0;i<8;i++)
			{
			if(strcmpi(te->stat2,"\0")==0)
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			line(0,j+70,620,j+70);
			}
			else
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			outtextxy(450,j+60,te->stat2);
			line(0,j+70,620,j+70);
			}
			te=te->pt;
			j=j+50;
			}
			v=getch();
			if(v=='\r')
			{
			cleardevice();
			j=20;
			for(i=8;i<16;i++)
			{
			if(strcmpi(te->stat2,"\0")==0)
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			line(0,j+70,620,j+70);
			}
			else
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			outtextxy(450,j+60,te->stat2);
			line(0,j+70,620,j+70);
			}
			te=te->pt;
			j=j+50;
			}
			}
			else
			recall();
			v=getch();
			if(v=='\r')
			{
			cleardevice();
			j=20;
			for(i=16;i<24;i++)
			{
			if(strcmpi(te->stat2,"\0")==0)
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			line(0,j+70,620,j+70);
			}
			else
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			outtextxy(450,j+60,te->stat2);
			line(0,j+70,620,j+70);
			}
			te=te->pt;
			j=j+50;
			}
			}
			else
			recall();
			v=getch();
			if(v=='\r')
			{
			cleardevice();
			j=20;
			for(i=24;i<32;i++)
			{
			if(strcmpi(te->stat2,"\0")==0)
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			line(0,j+70,620,j+70);
			}
			else
			{
			settextstyle(DEFAULT_FONT,0,2);
			outtextxy(10,j+30,te->pla);
			settextstyle(DEFAULT_FONT,0,1);
			outtextxy(10,j+60,"Nearest Metro Station:");
			outtextxy(300,j+60,te->stat1);
			outtextxy(450,j+60,te->stat2);
			line(0,j+70,620,j+70);
			}
			te=te->pt;
			j=j+50;
			}
			}
			else
			recall();
			getch();
			setgraphmode(getgraphmode());
			recall();
			break;
			}
case 4:
{
cleardevice();
settextstyle(DEFAULT_FONT,0,3);
setcolor(7);
outtextxy(200,160,"THANK YOU.");
outtextxy(180,260," VISIT AGAIN.");
outtextxy(200,360," GOOD BYE.");
getch();
exit(0);
}
}
}