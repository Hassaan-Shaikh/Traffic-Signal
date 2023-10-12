#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int h=0,j,i=0;

int fill1(int x, int y,int oc,int nc)
{
	int b=YELLOW;
	if(getpixel(x,y)!=b && getpixel(x,y)==oc)
	{
		putpixel(x,y,nc);
		fill1(x+1,y,oc,nc);
		fill1(x-1,y,oc,nc);
		fill1(x,y+1,oc,nc);
		fill1(x,y-1,oc,nc);
	}
	return 0;
}

int fill(int x, int y,int oc,int nc)
{
	if(getpixel(x,y)==oc)
	{
		putpixel(x,y,nc);
		fill(x+1,y,oc,nc);
		fill(x-1,y,oc,nc);
		fill(x,y+1,oc,nc);
		fill(x,y-1,oc,nc);
	}
	return 0;
}

int border()
{
	setcolor(YELLOW);
	rectangle(0,0,639,479);
	//setbkcolor(BLUE);
	return 0;
}

int car()
{
	border();
	setcolor(YELLOW);
	redsig();
	line(150+400-i,290,260+400-i,290);//carfronts
	line(150+400-i,290,110+400-i,330);
	line(110+400-i,330,80+400-i,330);
	line(80+400-i,330,80+400-i,367);
	line(80+400-i,367,128+400-i,367);
	arc(143+400-i,367,0,180,15);
	line(158+400-i,367,238+400-i,367);
	arc(253+400-i,367,0,180,15);
	line(268+400-i,367,300+400-i,367);
	line(150+400-i,305,127+400-i,330);//window
	line(150+400-i,305,200+400-i,305);
	line(200+400-i,305,200+400-i,330);
	line(127+400-i,330,200+400-i,330);
	line(210+400-i,305,210+400-i,330);//2nd window
	line(210+400-i,305,250+400-i,305);
	line(250+400-i,305,275+400-i,330);
	line(275+400-i,330,210+400-i,330);
	line(260+400-i,290,300+400-i,330);//endcar
	line(300+400-i,330,300+400-i,367);
	//setcolor();
	circle(143+400-i,369,12);//wheels
	circle(253+400-i,369,12);
	circle(143+400-i,369,8);
	circle(253+400-i,369,8);
	npc();
	road();
	zebra();
	//fill(5,410,BLACK,GREEN);
	/*fill1(543-i,348,BLACK,RED);
	fill1(543-i,310,BLACK,RED);
	fill(125+370-i,344,BLACK,RED);
	fill(125+370-i,354,BLACK,RED);
	fill(125+370-i,364,BLACK,RED);
	//fill(543-i,369,BLACK,WHITE);
	//fill(653-i,369,BLACK,WHITE);
	getch();*/
	return 0;
}

int carnonpc()
{
	border();
	rectangle(0,105,50,260);
	rectangle(20,260,30,340);
	redsig();
	line(150+400-i,290,260+400-i,290);//carfronts
	line(150+400-i,290,110+400-i,330);
	line(110+400-i,330,80+400-i,330);
	line(80+400-i,330,80+400-i,367);
	line(80+400-i,367,128+400-i,367);
	arc(143+400-i,367,0,180,15);
	line(158+400-i,367,238+400-i,367);
	arc(253+400-i,367,0,180,15);
	line(268+400-i,367,300+400-i,367);
	line(150+400-i,305,127+400-i,330);//window
	line(150+400-i,305,200+400-i,305);
	line(200+400-i,305,200+400-i,330);
	line(127+400-i,330,200+400-i,330);
	line(210+400-i,305,210+400-i,330);//2nd window
	line(210+400-i,305,250+400-i,305);
	line(250+400-i,305,275+400-i,330);
	line(275+400-i,330,210+400-i,330);
	line(260+400-i,290,300+400-i,330);//endcar
	line(300+400-i,330,300+400-i,367);
	circle(143+400-i,369,12);//wheels
	circle(253+400-i,369,12);
	//npc();
	road();
	zebra();
	/*fill1(543-i,348,BLACK,RED);
	fill1(543-i,310,BLACK,RED);
	fill(125+370-i,344,BLACK,RED);
	fill(125+370-i,354,BLACK,RED);
	fill(125+370-i,364,BLACK,RED);*/
	//fill(5,410,BLACK,GREEN);
	return 0;
}

int carnpc()
{
	border();
	setcolor(YELLOW);
	rectangle(0,105,50,260);
	rectangle(20,260,30,340);
	redsig();
	line(150+400-i,290,260+400-i,290);//carfronts
	line(150+400-i,290,110+400-i,330);
	line(110+400-i,330,80+400-i,330);
	line(80+400-i,330,80+400-i,367);
	line(80+400-i,367,128+400-i,367);
	arc(143+400-i,367,0,180,15);
	line(158+400-i,367,238+400-i,367);
	arc(253+400-i,367,0,180,15);
	line(268+400-i,367,300+400-i,367);
	line(150+400-i,305,127+400-i,330);//window
	line(150+400-i,305,200+400-i,305);
	line(200+400-i,305,200+400-i,330);
	line(127+400-i,330,200+400-i,330);
	line(210+400-i,305,210+400-i,330);//2nd window
	line(210+400-i,305,250+400-i,305);
	line(250+400-i,305,275+400-i,330);
	line(275+400-i,330,210+400-i,330);
	line(260+400-i,290,300+400-i,330);//endcar
	line(300+400-i,330,300+400-i,367);
	circle(143+400-i,369,12);//wheels
	circle(253+400-i,369,12);
	//npc();
	road();
	zebra();
	movenpc1();
	//fill(5,410,BLACK,GREEN);
	/*fill1(543-i,348,BLACK,RED);
	fill1(543-i,310,BLACK,RED);
	fill(125+370-i,344,BLACK,RED);
	fill(125+370-i,354,BLACK,RED);
	fill(125+370-i,364,BLACK,RED);*/
	return 0;
}

int npc()
{
	setcolor(WHITE);
	circle(90,250,10);
	line(90,260,90,300);
	line(90,260,80,295);
	line(90,260,100,295);
	line(90,300,80,340);
	line(90,300,100,340);
	return 0;
}

int redsig()
{
	setcolor(WHITE);
	rectangle(10,105,60,260);
	rectangle(30,260,40,340);
	circle(35,133,18);
	fill(35,134,BLACK,RED);
	circle(35,182,18);
	circle(35,230,18);
	return 0;
}

int greensig()
{
	setcolor(WHITE);
	rectangle(10,105,60,260);
	rectangle(30,260,40,340);
	circle(35,133,18);
	circle(35,182,18);
	circle(35,230,18);
	fill(35,230,BLACK,GREEN);
	return 0;
}

int zebra()
{
	setcolor(WHITE);
	line(40,340,40,400);
	line(140,340,140,400);
	line(40,350,140,350);
	line(40,360,140,360);
	line(40,370,140,370);
	line(40,380,140,380);
	line(40,390,140,390);
	line(40,400,140,400);
	fill(135,354,BLACK,WHITE);
	fill(135,374,BLACK,WHITE);
	fill(135,394,BLACK,WHITE);
	fill(45,354,BLACK,WHITE);
	fill(45,374,BLACK,WHITE);
	fill(45,394,BLACK,WHITE);
	return 0;
}

int road()
{
	setcolor(WHITE);
	line(0,340,650,340);
	line(0,400,650,400);
	return 0;
}

int movecar()
{
	do
	{
		for(j=0;j<90;j++)
		{
			//delay(15);
			//chc:
			cleardevice();
			border();
			redsig();
			setcolor(YELLOW);
			//fill(25,230,BLACK,GREEN);
			line(150+400-i,290,260+400-i,290);//carfronts
			line(150+400-i,290,110+400-i,330);
			line(110+400-i,330,80+400-i,330);
			line(80+400-i,330,80+400-i,367);
			line(80+400-i,367,128+400-i,367);
			arc(143+400-i,367,0,180,15);
			line(158+400-i,367,238+400-i,367);
			arc(253+400-i,367,0,180,15);
			line(268+400-i,367,300+400-i,367);
			line(150+400-i,305,127+400-i,330);//window
			line(150+400-i,305,200+400-i,305);
			line(200+400-i,305,200+400-i,330);
			line(127+400-i,330,200+400-i,330);
			line(210+400-i,305,210+400-i,330);//2nd window
			line(210+400-i,305,250+400-i,305);
			line(250+400-i,305,275+400-i,330);
			line(275+400-i,330,210+400-i,330);
			line(260+400-i,290,300+400-i,330);//endcar
			line(300+400-i,330,300+400-i,367);
			circle(143+400-i,369,12);//wheels
			circle(253+400-i,369,12);
			npc();
			road();
			zebra();
			//fill(650+i,310,BLACK,YELLOW);
			/*fill1(543-i,348,BLACK,RED);
			fill1(543-i,310,BLACK,RED);
			fill(125+370-i,344,BLACK,RED);
			fill(125+370-i,354,BLACK,RED);
			fill(125+370-i,364,BLACK,RED);*/
			i=i+4;
		}
		h++;
	} while(h<1);
	return 0;
}

void movecarg()
{
	do
	{
		for(j=0;j<90;j++)
		{
			//delay(15);
			//chc:
			cleardevice();
			border();
			greensig();
			setcolor(YELLOW);
			//fill(25,230,BLACK,GREEN);
			line(150+400-i,290,260+400-i,290);//carfronts
			line(150+400-i,290,110+400-i,330);
			line(110+400-i,330,80+400-i,330);
			line(80+400-i,330,80+400-i,367);
			line(80+400-i,367,128+400-i,367);
			arc(143+400-i,367,0,180,15);
			line(158+400-i,367,238+400-i,367);
			arc(253+400-i,367,0,180,15);
			line(268+400-i,367,300+400-i,367);
			line(150+400-i,305,127+400-i,330);//window
			line(150+400-i,305,200+400-i,305);
			line(200+400-i,305,200+400-i,330);
			line(127+400-i,330,200+400-i,330);
			line(210+400-i,305,210+400-i,330);//2nd window
			line(210+400-i,305,250+400-i,305);
			line(250+400-i,305,275+400-i,330);
			line(275+400-i,330,210+400-i,330);
			line(260+400-i,290,300+400-i,330);//endcar
			line(300+400-i,330,300+400-i,367);
			circle(143+400-i,369,12);//wheels
			circle(253+400-i,369,12);
			//fill(650+i,310,BLACK,YELLOW);
			npc();
			road();
			zebra();
			/*fill1(543-i,348,BLACK,RED);
			fill1(543-i,310,BLACK,RED);
			fill(125+370-i,344,BLACK,RED);
			fill(125+370-i,354,BLACK,RED);
			fill(125+370-i,364,BLACK,RED);*/
			i=i+4;
		}
		h++;
	} while(h<1);
}

int movenpc1()
{
	int i;
	i=0;
	for(i=0;i<200;i++)
	{
		delay(200);
		cleardevice();
		border();
		carnonpc();
		circle(90,250+i,10);
		line(90,260+i,90,300+i);
		line(90,260+i,80,295+i);
		line(90,260+i,100,295+i);
		line(90,300+i,80,340+i);
		line(90,300+i,100,340+i);
		i=i+4;
	}
	return 0;
}

void main()
{
	int gd=DETECT,gm;
	int choice;
	start:
	clrscr();
	initgraph(&gd,&gm," ");
	//movenpc1();
	car();
	movecar();
	do
	{
		clrscr();
		cleardevice();
		car();
		outtextxy(300,100,"Control Panel:");
		outtextxy(300,120,"0 - Exit program.");
		outtextxy(300,140,"1 - Move car (turn signal green).");
		outtextxy(300,160,"2 - Move pedestrian.");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:
			{
				exit(0);
				break;
			}
			case 1:
			{
				movecarg();
				i=0;
				goto start;
				//break;
			}
			case 2:
			{
				clrscr();
				cleardevice();
				carnpc();
				//outtextxy(300,100,"That didn't do anything.");
				//delay(2000);
				//goto chc;
				break;
			}
			default:
			{
				clrscr();
				cleardevice();
				car();
				outtextxy(300,100,"That is an invalid choice.");
				delay(2000);
				//goto chc;
				break;
			}
		}
	}while(choice!=0);
	getch();
	closegraph();
}
