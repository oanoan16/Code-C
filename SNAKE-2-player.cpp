#include <stdio.h>
#include <windows.h>
#include <conio.h >
#include<stdlib.h>
#include<time.h>
//ham con tro
void gotoxy(int m,int n)
{
   COORD pos = {m,n} ;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos ) ;
}
//ham mau sac; 
void TextColor(int x) 
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) , x);
}
//tao khung game
void taokhung(){
	gotoxy(0,0);
	for(int i=0;i<80;i++){
		printf("%c", 171);
	}
	for(int i=0;i<20;i++){
		gotoxy(80,i+1);
		printf("%c", 171);
	}
	gotoxy(0,20);
	for(int i=0;i<80;i++){
		printf("%c", 171);
	}
	for(int i=0;i<20;i++){
		gotoxy(0,i+1);
		printf("%c", 171);
	}	
}
// phim control
enum tools {UP,RIGHT,DOWN,LEFT};
// toa do
struct toado
{
	int x, y;
};
// snake
struct Snake1
{
	tools move;//phim dieu huong
	toado dot[200];//ran co MAX=200 dot
	int n;//hien tai co n dot
	
};
struct Snake2
{
	tools move;
	toado dot[200];
	int m;
};
// thuc an
struct fruit
{
	toado gold;//toa do cua thuc an
};
struct eat
{
	toado gold;
};
void khoitaoran(Snake1 &snake1, Snake2 &snake2)
{
	snake1.n=4;//so dot =4
	// dot 0
	snake1.dot[0].x=13;
	snake1.dot[0].y=10;
	// dot 1
	snake1.dot[1].x=12;
	snake1.dot[1].y=10;
	//dot 2
	snake1.dot[2].x=11;
	snake1.dot[2].y=10;
	// dot 3
	snake1.dot[3].x=10;
	snake1.dot[3].y=10;	
    snake1.move=RIGHT;//snake huong phai
  // ran 2
    snake2.m=4;
    snake2.dot[0].x=60;
    snake2.dot[0].y=5;
    snake2.dot[1].x=59;
    snake2.dot[1].y=5;
	snake2.dot[2].x=58;
	snake2.dot[2].y=5;
	snake2.dot[3].y=57;
	snake2.dot[3].y=5;
	snake2.move=DOWN;  
}
// ham hien thi
void hienthiran(Snake1 snake1, Snake2 snake2)
{	

    system("cls");
	//xoa man hinh
    TextColor(4);
    taokhung();
    gotoxy(snake1.dot[0].x,snake1.dot[0].y);
    TextColor(13);
    printf("%c", 165);//ki tu dau ran
	for(int k=1;k<snake1.n;k++){                                                 // DESIGN BY CAN NGOC BINH
		if(k%2==1){
		gotoxy(snake1.dot[k].x,snake1.dot[k].y);
		TextColor(10);                                                         
		printf("*");}
		else{
		gotoxy(snake1.dot[k].x,snake1.dot[k].y);
		TextColor(12);
		printf("*");
		}
		//ham hien thi cac dot ran mau dan xen			
	}
	gotoxy(snake2.dot[0].x,snake2.dot[0].y);
	printf("%c", 159);
	for(int j=1; j<snake2.m ;j++){
		gotoxy(snake2.dot[j].x,snake2.dot[j].y);
		printf("%c", 169);
	}	
}
void hienthidiem(int diem1, int diem2)
{
	gotoxy(40,5);
	printf("snake1: %d", diem1);
	gotoxy(40,6);
	printf("snake2: %d", diem2);
	if(diem1 > diem2)
	{
		gotoxy(40,7);
		printf("snake1 WIN, con ga snake2--NHUC");
	}
	if(diem2 > diem1)
	{
		gotoxy(40,7);
		printf("snake2 WIN, con ga snake1--NHUC");
	}
	if(diem2 == diem1)
	{
		gotoxy(40,7);
		printf("HOA");
	}
}
void control(Snake1 &snake1, Snake2 &snake2)//dieu khien ran
{	
    //cap trang thai cho cac dot sau
    for(int j=snake1.n-1; j>0; j--)    
     {
     	snake1.dot[j].x=snake1.dot[j-1].x;
     	snake1.dot[j].y=snake1.dot[j-1].y;
		 }
	//truyen trang thai cho snake 2	 	
	for(int i=snake2.m-1; i>0 ;i--)
	{
		snake2.dot[i].x=snake2.dot[i-1].x;
		snake2.dot[i].y=snake2.dot[i-1].y;
		 }	 
	if(kbhit())	//bat su kien ban phim	
	{	
		int key=getch();// tom lay phim
		switch(key){
			//len
			case 72:									
			    snake1.move=UP;
			    break;
			//xuong 
			case 80:
			    snake1.move=DOWN;
				break;
			//trai
			case 75:
			    snake1.move=LEFT;
			    break; 
			//phai
			case 77:
			    snake1.move=RIGHT;
			    break;
			case 97:
			    snake2.move=LEFT;
			    break;
			case 115:
			    snake2.move=DOWN;
			    break;
			case 100:
			    snake2.move=RIGHT;
			    break;
			case 119:
			    snake2.move=UP;
			    break;
	    }
    }
    // dieu khien ran
	if (snake1.move==UP) snake1.dot[0].y--; 
	if (snake1.move==DOWN) snake1.dot[0].y++;
	if (snake1.move==LEFT) snake1.dot[0].x--;
	if (snake1.move==RIGHT) snake1.dot[0].x++;
	if (snake2.move==UP) snake2.dot[0].y--; 
	if (snake2.move==DOWN) snake2.dot[0].y++;
	if (snake2.move==LEFT) snake2.dot[0].x--;
	if (snake2.move==RIGHT) snake2.dot[0].x++;  
}
//xu li ran an fruit
void initgame(Snake1 &snake1, Snake2 &snake2, fruit &fr,
eat &eat, int &count1, int &count2){
	srand(time(NULL));
	gotoxy(fr.gold.x,fr.gold.y);
	TextColor(14);
	printf("$");
	gotoxy(eat.gold.x,eat.gold.y);
	printf("$");
	if(snake1.dot[0].x == fr.gold.x &&
	snake1.dot[0].y == fr.gold.y
    || snake1.dot[0].x == eat.gold.x &&
	snake1.dot[0].y == eat.gold.y)
	{
		fr.gold.x = rand() % 79 + 1;
	    fr.gold.y = rand() % 19 + 1;
		eat.gold.x= rand() % 79 +1;	
		eat.gold.y= rand() % 19 +1;
		snake1.n++;
		count1++;	// ran +1 dot	
	}
	if(snake2.dot[0].x == fr.gold.x &&
	snake2.dot[0].y == fr.gold.y
    || snake2.dot[0].x == eat.gold.x &&
	snake2.dot[0].y == eat.gold.y)
	{
		fr.gold.x = rand() % 79 + 1;
	    fr.gold.y = rand() % 19 + 1;
		eat.gold.x= rand() % 79 +1;	
		eat.gold.y= rand() % 19 +1;
		snake2.m++;
		count2++;	// ran +1 dot	
	}	
}
// thua game
void lose(Snake1 &snake1, Snake2 &snake2, int &out,
int a, int b)
{
	//snake1 tu an minh
	for(int j=1;j<snake1.n;j++)
	{
		if(snake1.dot[0].x == snake1.dot[j].x
		&& snake1.dot[0].y == snake1.dot[j].y)
		{
			gotoxy(40,10);
			TextColor(9);
			printf("CHOI THI NGU!!!");
			out=2;
			gotoxy(40,13);
			printf("nhan phim bat ki de thoat");
			hienthidiem(a,b);		
		}
	}
	// snake2 tu an minh
	for(int k=1; k < snake2.m; k++)
	{	
	    if(snake2.dot[0].x == snake2.dot[k].x
		&& snake2.dot[0].y == snake2.dot[k].y)
		{
			gotoxy(40,10);
			TextColor(9);
			printf("CHOI THI NGU!!!");
			out=2;
			gotoxy(40,13);
			printf("nhan phim bat ki de thoat");
			hienthidiem(a,b);
		}	
	}
	// snake dam vao tuong
	if(snake1.dot[0].x==0 || snake1.dot[0].x==80
	|| snake1.dot[0].y==0 || snake1.dot[0].y==20
	|| snake2.dot[0].x==0 || snake2.dot[0].x==80
	|| snake2.dot[0].y==0 || snake2.dot[0].y==20)
	{
			gotoxy(40,12);
			printf("CHOI THI NGU!!!");
			out=2;
			gotoxy(40,13);
			printf("nhan phim bat ki de thoat");
			hienthidiem(a,b);
	}
	//2 snake can nhau
	for(int j=0;j<snake1.n + snake2.m;j++)
	{
		if(snake1.dot[0].x == snake2.dot[j].x
		&& snake1.dot[0].y == snake2.dot[j].y
		|| snake2.dot[0].x == snake1.dot[j].x
		&& snake2.dot[0].y == snake1.dot[j].y)
		{
		    if(snake1.n > snake2.m)
		    {
		    	hienthidiem(a,b);
		    	gotoxy(40,8);
		    	printf("SNAKE1 knock out SNAKE2");
			}
		    if(snake2.m > snake1.n) 
		    {
		    	hienthidiem(a,b);
		    	gotoxy(40,8);
		    	printf("SNAKE2 knock out SNAKE1");			    	
			}
			if(snake2.m == snake1.n) hienthidiem(a,b);			
			out=2;
		}
	}
}
int main(){
	int count1=0, count2=0;
	toado td;
	fruit fr;
	eat eat;
	fr.gold.x=15;
	fr.gold.y=15;
	eat.gold.x=60;
	eat.gold.y=13;
	Snake1 snake1;
	Snake2 snake2;   
    khoitaoran(snake1, snake2);	    
	int out=1;  
	while(out==1){
		//hienthira	
		hienthiran(snake1, snake2);	    
//		//dieukhien			
		control(snake1, snake2);
//		//xuli	
		initgame(snake1, snake2, fr, eat, count1, count2);
////		//thua game	
		lose(snake1, snake2 ,out, count1, count2);
	    Sleep(28);
	}
}
                                       // densign by CAN NGOC BINH
