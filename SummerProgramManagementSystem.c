#include <stdio.h>

int seat_cs=0;
int seat_it=0;
int seat_cce=0;
int c1=0,c2=0;
int i1=0,i2=0;
int e1=0,e2=0;


void checkCS();
void checkIT();
void checkCCE();
void display();



void main()
{
	char c;
	printf("Press Y to continue and N to stop ");
	scanf("%c",&c);
	while(c=='Y'){
	int opt,check;
	printf("Which branch code do you wish to choose, Press 1 for CS, 2 for IT,3 for CCE ");
	scanf("%d",&opt);
	switch (opt)
	{
		case 1: checkCS();
		        break;

		case 2: checkIT();
		        break;
		        
		case 3: checkCCE();
		        break;                

	}


    printf("Press 1 you want to withdraw and 0 to continue \n");
    scanf("%d",&check);
    if(check==1)
    {
    	int flag1,flag2;
    	printf("Enter branch name and subject code \n");
        scanf("%d%d",&flag1,&flag2);

        if(flag1==1)
        {
         seat_cs--;   
         if(flag2==101)
         c1--;
         else
         c2--;     
        }

       else if(flag1==2)
        {
         seat_it--;   
         if(flag2==201)
         c1--;
         else
         c2--;     
        }

        else
        {
         seat_cce--;   
         if(flag2==301)
         c1--;
         else
         c2--;     
        }

      }
      int flag2=1;
      printf("Press 1 to continue and 2 to stop ");
      scanf("%d",&flag2);
    	if(flag2==2)
        c='N';
    }
    display();                                                                                                                                                                                                                                                                                                                                      
}


void checkCS()
{
    int op1;
	printf("Which course code which you wish to choose, \nPress 101 for Machine Learning, 102 for Cloud Computing ");
	scanf("%d",&op1);
    switch (op1)
	{
		case 101: if(c1<=20){
		         c1++; 
		         seat_cs++; }
		         break;
		case 102: if(c2<=25){
		         c2++;
		         seat_cs++;}
		         break;        
	}
}

void checkIT()
{
    int op2;
	printf("Which course code which you wish to choose, \nPress 201 for JAVA, 202 for PYTHON ");
	scanf("%d",&op2);
    switch (op2)
	{
		case 201: if(i1<=30){
		         i1++;
		         seat_it++; }
		         break;
		case 202: if(i2<=32) {
		         i2++;
		         seat_it++; }
		         break;        
	}
}


void checkCCE()
{
    int op3;
	printf("Which course code which you wish to choose, \nPress 301 for Cyber Security, 302 for IOT ");
	scanf("%d",&op3);
    switch (op3)
	{
		case 301: if(e1<=16){
				 e1++;
				 seat_cce++; }
		         break;
		case 302: if(e2<=18){
		         e2++;
		         seat_cce++; }
		         break;        
	}
}


void display()
{
	printf("No. of seats left in CS %d \n",(40-seat_cs));
	printf("No. of seats left in Machine Learning %d \n",(20-c1));
	printf("No. of seats left in Cloud Computing %d \n",(25-c2));
	printf("No. of seats left in IT %d \n",(62-seat_it));
	printf("No. of seats left in Java %d \n",(30-i1));
	printf("No. of seats left in Python %d \n",(32-i2));
	printf("No. of seats left in CCE %d \n",(34-seat_cce));
	printf("No. of seats left in Cyber Security %d \n",(16-e1));
	printf("No. of seats left in IOT %d \n",(18-e2));
	
}
