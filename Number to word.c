#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <MMSystem.h>
int main()
{
	int  a,b,c,d,num;
	printf("Enter Your Number < 1000 :");
	scanf("%d",&num);
	a=(num)/100;
	b=(num)%100;
	c=(b)/10;
	d=(b)%10;
	
	switch(a)
	{ case 1: if(a==1)
		printf("One Hundred ");
		PlaySound("100.wav",NULL,SND_SYNC);break;
		case 2:if(a==2)
		printf("Two Hundred ");
		PlaySound("200.wav",NULL,SND_SYNC);break;
		case 3:if(a==3)
		printf("Three Hundred ");
		PlaySound("300.wav",NULL,SND_SYNC);break;
		case 4:if(a==4)
		printf("Four Hundred ");
		PlaySound("400.wav",NULL,SND_SYNC);break;
		case 5:if(a==5)
		printf("Five Hundred ");
		PlaySound("500.wav",NULL,SND_SYNC);break;
		case 6:if(a==6)
		printf("Six Hundred ");
		PlaySound("600.wav",NULL,SND_SYNC);break;
		case 7:if(a==7)
		printf("Seven Hundred ");
		PlaySound("700.wav",NULL,SND_SYNC);break;
		case 8:if(a==8)
		printf("Eight Hundred ");
		PlaySound("800.wav",NULL,SND_SYNC);break;
		case 9:if(a==9)
		printf("Nine Hundred ");
		PlaySound("900.wav",NULL,SND_SYNC);break;}
			
		switch(b)
		{ 
			case 10:if(b==10)
			printf(" Ten");
			PlaySound("10.wav",NULL,SND_SYNC);break;
			case 11: if(b==11)
			printf(" Eleven");PlaySound("11.wav",NULL,SND_SYNC);break;
			case 12: if(b==12)
			printf(" Twelve");PlaySound("12.wav",NULL,SND_SYNC);break;
			case 13: if(b==13)
			printf(" Thirteen");PlaySound("13.wav",NULL,SND_SYNC);break;
			case 14: if(b==14)
			printf(" Fourteen");PlaySound("14.wav",NULL,SND_SYNC);break;
			case 15: if(b==15)
			printf(" Fifteen");PlaySound("15.wav",NULL,SND_SYNC);break;
			case 16:if(b==16)
			printf(" Sixteen");PlaySound("16.wav",NULL,SND_SYNC);break;
			case 17: if(b==17)
			printf(" Seventeen");PlaySound("17.wav",NULL,SND_SYNC);break;
			case 18: if(b==18)
			printf(" Eighteen");PlaySound("18.wav",NULL,SND_SYNC);break;
			case 19: if(b==19)
			printf(" Nineteen");PlaySound("19.wav",NULL,SND_SYNC);break;
			}
			switch(c)
			{
			case 2:if(c==2)
			printf(" Twenty");PlaySound("20.wav",NULL,SND_SYNC);break;
			case 3: if(c==3)
			printf(" Thirty");PlaySound("30.wav",NULL,SND_SYNC);break;
			case 4: if(c==4)
			printf(" Fourty");PlaySound("40.wav",NULL,SND_SYNC);break;
			case 5: if(c==5)
			printf(" Fifty");PlaySound("50.wav",NULL,SND_SYNC);break;
			case 6: if(c==6)
			printf(" Sixty");PlaySound("60.wav",NULL,SND_SYNC);break;
			case 7: if(c==7)
			printf(" Seventy");PlaySound("70.wav",NULL,SND_SYNC);break;
			case 8: if(c==8)
			printf(" Eighty");PlaySound("80.wav",NULL,SND_SYNC);break;
			case 9: if(c==9)
			printf(" Ninty");PlaySound("90.wav",NULL,SND_SYNC);break;}
			if (c!=1){
			
				switch(d)
			{ case 0:if(d==0)
				printf("");break;
			case 1: if(d==1)
		     printf(" One");PlaySound("1.wav",NULL,SND_SYNC);break;
		      case 2:if(d==2)
		       printf(" Two");PlaySound("2.wav",NULL,SND_SYNC);break;
		        case 3:if(d==3)
		    printf(" Three");PlaySound("3.wav",NULL,SND_SYNC);break;
		case 4:if(d==4)
		printf(" Four");PlaySound("4.wav",NULL,SND_SYNC);break;
		case 5:if(d==5)
		printf(" Five");PlaySound("6.wav",NULL,SND_SYNC);break;
		case 6:if(d==6)
		printf(" Six");PlaySound("6.wav",NULL,SND_SYNC);break;
		case 7:if(d==7)
		printf(" Seven");PlaySound("7.wav",NULL,SND_SYNC);break;
		case 8:if(d==8)
		printf(" Eight");PlaySound("8.wav",NULL,SND_SYNC);break;
		case 9:if(d==9)
		printf(" Nine");PlaySound("9.wav",NULL,SND_SYNC);break;
			}}

			
		if(num==0)
		{
		printf("Zero");
		PlaySound("0.wav",NULL,SND_SYNC);
		}
		return 0;
		}
