# include "iGraphics.h"
#include<string.h>
char str1[100],str2[100],str3[100],str4[100];
int l1=0, l2=0;
int x,y;
int mode1=0,mode2=0;


int mon=1,year=2000;
int h1=1,h2=2,m1=2,m2=3,s1=0,s2=0,t=0;
void drawbox()
{
    iRectangle(10,500,150,30);
    iRectangle(200,500,150,30);
}
int daysofamonth(int mon,int year){

int value;
if(mon==1 || mon==3|| mon==5|| mon==7 || mon==8 || mon==10 || mon==12)
    value=31;
else if(mon==4 || mon==6 || mon==9 || mon==11)
    value=30;
else if(mon==2)
{

    if(year%400==0 || (year%4==0 && year%100!=0))
        value=29;
    else
        value=28;
}

    return value;
}
int firstdayofmonth(int mon,int year)
{
    int value;
    if(mon==2)
    {
        mon=14;
        year=year-1;

    }
    if(mon==1){
        mon=13;
        year=year-1;
    }
   value=(1+(26*(mon+1)/10)+year+(year/4)+(6*(year/100))+(year/400))%7;
   return value;
}
void printdays(int a,int b)
{
a=a-7;
    if(b==1)
        iText(a,350,"Sat",GLUT_BITMAP_TIMES_ROMAN_24);
    if(b==2)
        iText(a,350,"Sun",GLUT_BITMAP_TIMES_ROMAN_24);
    if(b==3)
        iText(a,350,"Mon",GLUT_BITMAP_TIMES_ROMAN_24);
    if(b==4)
        iText(a,350,"Tue",GLUT_BITMAP_TIMES_ROMAN_24);
    if(b==5)
        iText(a,350,"Wed",GLUT_BITMAP_TIMES_ROMAN_24);
    if(b==6)
        iText(a,350,"Thu",GLUT_BITMAP_TIMES_ROMAN_24);
    if(b==7)
        iText(a,350,"Fri",GLUT_BITMAP_TIMES_ROMAN_24);

}


void digitalclock(int r,int p)
{int o;

    if(r==1)

    o=600;
    if(r==2)
        o=670;
    else if(r==3)
        o=740;
    else if(r==4)
        o=810;
    else if(r==5)
        o=880;
    else if(r==6)
        o=950;
    if(p==0)
    {
iSetColor(230,15,17);
        iLine(o,300,o+50,300);
        iLine(o+50,300,o+50,400);
        iLine(o+50,400,o,400);
        iLine(o,400,o,300);
    }
    if(p==1)
    {iSetColor(255,0,0);

        iLine(o,400,o,300);

    }
    if(p==2)
    {iSetColor(12,12,237);

        iLine(o,400,o+50,400);
        iLine(o+50,400,o+50,350);
        iLine(o,350,o+50,350);
        iLine(o,350,o,300);
        iLine(o,300,o+50,300);
    }
if(p==3)
{iSetColor(213,23,45);

    iLine(o,300,o+50,300);
    iLine(o,400,o+50,400);
    iLine(o,350,o+50,350);
    iLine(o+50,400,o+50,300);
}
if(p==4)
{iSetColor(200,12,16);

    iLine(o,400,o,350);
    iLine(o,350,o+50,350);
    iLine(o+50,400,o+50,300);

}
if(p==5)
{iSetColor(234,21,12);

    iLine(o,400,o+50,400);
    iLine(o,400,o,350);
    iLine(o,350,o+50,350);
    iLine(o+50,350,o+50,300);
    iLine(o,300,o+50,300);

}
if(p==6)
{iSetColor(255,255,0);
    iLine(o,400,o+50,400);
    iLine(o,400,o,300);
    iLine(o,350,o+50,350);
    iLine(o,300,o+50,300);
    iLine(o+50,350,o+50,300);

}
if(p==7)
{iSetColor(0,255,255);
    iLine(o,400,o+50,400);
    iLine(o+50,400,o+50,300);
}
if(p==8)
{iSetColor(255,0,255);

    iLine(o,300,o,400);
    iLine(o,300,o+50,300);
    iLine(o,400,o+50,400);
    iLine(o+50,300,o+50,400);
    iLine(o,350,o+50,350);

}
if(p==9)
{iSetColor(0,255,0);

    iLine(o,300,o+50,300);
    iLine(o,400,o+50,400);
    iLine(o+50,300,o+50,400);
    iLine(o,350,o,400);
    iLine(o,350,o+50,350);

}


}
void changetime(){




t++;






    iLine(725,111,665,335);
s2++;
if(s2>9)
{
    s1++;
    s2=0;
}
if(s1>5)
{
    m2++;
    s1=0;
}
if(m2>9)
{
    m2=0;
    m1++;

}

if(m1>5)
{m1=0;
    h2++;
    if(h2>2 && h1==1)
    {
        h1=0;
        h2=1;
    }
     if(h2>9)

    {
        h1=1;
        h2=0;
    }

}

}
/*void changer()
{




    iText(34,35,"S0 COOL",GLUT_BITMAP_TIMES_ROMAN_24);





}*/
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw() {
	//place your drawing codes here
	iClear();
    drawbox();
    iText(100,420,str2);
    iText(200,420,str4);
    iText(50,510,str1);
    iText(230,510,str3);

	//iFilledRectangle(10, 30, 20, 20);
	int i=0,j=1;
	iText(10,550,"Enter a year");
	iText(200,550,"Enter a month");


if(t%3==0)
{
    iLine(725,335,725,350);
    iLine(725,315,725,300);
    iLine(865,315,865,300);
    iLine(865,335,865,350);


}
	iRectangle(42,60,460,360);

	char days[]={'0','0','\0'};
	int p,q;

	int c;

	for(q=310;q>=60;q=q-50)
    {

        for(p=50;p<=470;p=p+70,i++)
        {if(i==firstdayofmonth(mon,year))
        {
            days[1]='1';
            c=1;

            iText(p,q,days,GLUT_BITMAP_TIMES_ROMAN_24);
            continue;
        }

        if (i<firstdayofmonth(mon,year)){

            continue;
        }

        days[1]+=1;
        if(days[1]>'9')
        {

            days[1]='0';
            days[0]+=1;
        }


        if(i-firstdayofmonth(mon,year)==daysofamonth(mon,year)){
            break;
        }


        iText(p,q,days,GLUT_BITMAP_TIMES_ROMAN_24);



        }
    }
    for(x=50;x<=470;x=x+70){
        printdays(x,j);
        j++;}
digitalclock(1,h1);
digitalclock(2,h2);
digitalclock(3,m1);
digitalclock(4,m2);
digitalclock(5,s1);
digitalclock(6,s2);
iRectangle(530,290,600,120);



/*if(t%50==0)
{



iLine(725,350,725,335);
iLine(725,315,725,300);
iLine(865,350,865,335);
iLine(865,315,865,300);*/



/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
}void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)



		//place your codes here
		{
		    if(mx>=10 && mx<=(150) &&  my <=(500+30) && my>=500 && mode1==0)
            {
                mode1=1;
            }
            if(mx>=200 && mx<=(200+150) && my>=500 && my<=(500+30) && mode2==0)
            {
                mode2=1;
            }
		}
		//	("x = %d, y= %d\n",,my);
		//x += 10;
		//y += 10;
}
	//if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//x -= 10;
		//y -= 10;



/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	/*if (key == 'q') {
		exit(0);
	}*/
	//place your codes for other keys here
	int i;
	if(mode1==1)

	{
	    if(key=='\r')
	    {
	        mode1=0;
	        strcpy(str2,str1);
	        printf("%s\n",str2);
	        year=atoi(str2);
	        printf("%d is year\n",year);
	        for(i=0;i<l1;i++)
                str1[i]=0;
            l1=0;
	    }
	    else if(key=='\b')
        {
            if(l1>0)
            {
                l1--;
                str1[l1]=0;
            }
        }
        else
        {
            str1[l1]=key;
            l1++;
        }
	}
	if(mode2==1)
    {

        if(key=='\r')
        {
            mode2=0;
            strcpy(str4,str3);
            printf("%s\n",str4);
            mon=atoi(str4);
            printf("%d is mon\n",mon);
            for(i=0;i<l2;i++)
                str3[i]=0;
            l2=0;

        }
        else if(key=='\b')
        {
            if(l2>0)
            {
                l2--;
                str3[l2]=0;
            }
        }
        else{
            str3[l2]=key;
            l2++;
        }

    }
}

/*
	function iSpecialKeyboard() is called  user hits special keys like-
	function keys, home, end, pg up, pg down, a etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
    int a,b,c,d,e,f;
    int hour,minute,second;
    time_t sec;
    sec=time(NULL);
    second=sec%60;
    sec=sec/60;
    minute=sec%60;
    sec=sec/60;
    hour=sec%24;
    hour=hour+6;
    hour=hour%12;
    if(hour==0)
    {
        hour=12;
    }
    h2=hour%10;
    h1=hour/10;
    m1=minute/10;
    m2=minute%10;
    s2=second%10;
    s1=second/10;

   /* a=sec/3600;


    b=a%24;

b=b+6;
b=b%12;

    h2=b%10;
    h1=b/10;
    c=sec%3600;
    d=c/60;
    m2=d%10;
    m1=d/10;
    e=c%60;
    s2=e%10;
    s1=e/10;*/
    /*c=sec%60;
    sec=sec/60;
    s2=c%10;
    s1=c/10;
    a=sec/60;
    b=sec%60;
    m2=b%10;
    m1=b/10;
    h2=a%10;
    h1=a/10;*/









iSetTimer(1000,changetime);
    //s("%d %d",&m,&year);
	//place your own initialization codes here.
	iInitialize(1200, 600, "demo");

	return 0;
}
