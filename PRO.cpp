#include<conio.h>
#include<cstdio>
#include<iostream>
#include<string.h>
using namespace std;
static int p=0;

class a
{
	char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
	int s;
	
	public:
		void install();
		void allotement();
		void empty();
		void show();
		void avail();
		void position(int i);
}
 bus[10];
 void vlin(char ch)
 
 {
 	for(int i=80;i>0;i--)
 	
 	cout<<ch;
 }
 
 void a::install()
 {
 	cout<<"enter bus numberm:";
 	cin>>bus[p].busn;
 	cout<<"enter driver name :";
 	cin>>bus[p].driver;
 	cout<<"\n arrival time :";
 	cin>>bus[p].arrival;
 	cout<<"\n departure";
 	cin>>bus[p].depart;
 	cout<<"To \t\\t\t";
 	cin>>bus[p].from;
 	cout<<"To \t\\t\t";
 	cin>>bus[p].to;
 	bus[p].empty();
 	p++;
 }
 void a::allotement()
 {
 	int s;
 	char number[5];
 	top:
 		cout<<"bus no :";
 		cin>>number;
 		int n;
 		for(n=0;n<=p;n++)
 		{
 			if(strcmp(bus[n].busn,number)==0)
 			break;
 			
 }
 while(n<=p)
 {
 	cout<<"\nSeat numb ";
 	cin>>s;
 	if (s>32)
 	{
 		cout<<"\nnot available";
 		
	 }
	 else
	 {
	 	if(strcmp(bus[n].s[s/4][(s%4)-1],"Empty")==0)
	 	{
	 		cout<<"p name :";
	 		cin>>bus[n].s[s/4][(s%4)-1];
	 		break;
		 }
		 else
		 cout<<"OCCUPIED";
	 }
 }
  if(n>p)
  {
  	cout<<"Enter correct bus no \n";
  	goto top;
  }
 }
 void a::empty()
 {
 	for(int i=0;i<8;i++)
 	{
 		for(int j=0;j<4;j++)
 		{
 			strcpy(bus[p].s[i][j],"Empty");
 			
		 }
	 }
 }
 void a::show()
 {
 	int n;
 	char number[5];
 	cout<<"enter bus no";
 	cin>>number;
 	for(n=0;n<=p;n++)
 	{
 		if(strcmp(bus[n].busn,number)==0)
 		break;
 		
	 }
	 while(n<=p)
	 {
	 	vline("*");
	 	cout<<bus[n].busn<<bus[n].driver<<bus[n].depart<<bus[n].from<<bus[n].to;
	 	vline("*");
	 	bus[0].position(n);
	 	int a=1;
	 	for(int i=0;i<8;i++)
	 	{
	 		for(int j=0;j<4;j++){
			 
	 		a++
	 		if(strcmp(bus[n].s[i][j],"Empty")!=0)
	 		cout<<a-1<<bus[n].s[i][j];
	 	
		 }
	 }
	 break;
}
  if(n>p)
  {
  	cout<<"Enter correct";
  }
}
void a::position(int i)
{
	int u=0,p=0;
	for(int i=0;i<8;i++)
	{
		cout<<"\n";
		for(int j=0;j<4;j++)
		{
			u++;
			if(strcmp(bus[1].s[i][j],"Empty")==0)
			{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[1].s[i][j];
				p++;
			}
			else{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[1].s[i][j];
			}
		}
	}
	cout<<p<<bus[1].busn;
}
void a::avail()
{
	for(int n=0;n<p;n++)
	{
		vline('*');
		cout<<bus[n].busn<<bus[n].driver<<bus[n].arrival<<bus[n].depart<<bus[n].from<<bus[n].to;
		vline('*');
		vline('_');
	}
}
	 int main()
	 {
	 	system("cls");
	 	int k;
	 	while(1)
	 	{
	 		cout<<"\n\n\n\n\n"
	 		<<"2.reservation\n\t\t\t"
	 		<<"3.show\n\t\t\t"
	 		<<"4.buses available.  \n\t\t\t"
	 		<<"5.exit";
	 		cout<<"\n enter choice:";
	 		cin>>k;
	 		switch(k)
	 		{
	 			case 1: bus[p].install();
	 			break;
	 			case 2: bus[p].allotement();
			    break;
			    case 3: bus[0].show();
			    break;
			    case 4: bus[0].avail();
			    break;
			    case 5: exit(0);
			 }
	 		
 }
	 }
	 return 0;
}
 
 
