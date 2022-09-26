[1:29 PM, 9/26/2022] Tarun: #include<iostream>
using namespace std;
class ebill
{
public:
int cons_no,pre_read,cur_read,eb_type,usedunits;
string cons_name;
float amount=0;
void input(void);
void calculation();
void display();
};
void ebill::input()
{
cout<<"ENTER CUSTOMER NUMBER => ";
cin>>cons_no;
cout<<"\nENTER CONSUMER NAME => ";
cin>>cons_name;
cout<<"\nENTER THE PREVIOUS MONTH UNITS READING => ";
cin>>pre_read;
cout<<"\nENTER THE CURRENT MONTH UNITS READING => ";
cin>>cur_read;
cout<<"\nENTER THE EB TYPE\n1 - domestic\n2 - commercial\n";
cin>>eb_type;
}
void ebill::calculation()
{
if(eb_type==1)
{
usedunits=cur_read-pre_read;
if(usedunits<=100)
amount=(usedunits*1);
if(usedunits>100&&usedunits<=200)
amount=100+((usedunits-100)*2.5);
if(usedunits>200&&usedunits<=500)
amount=350+((…
[1:30 PM, 9/26/2022] Tarun: #include<iostream>
using namespace std;
int main()
{
int a,b,input;
float div;
cout<<"CALCULATOR\n\n1 - add\n2 - substract\n3 - multiplication\n4 - division\n5 
- modulas\n";
cout<<"ENTER THE OPERATION => ";
cin>>input;
cout<<"\nNUMBER 1 : ";
cin>>a;
cout<<"\nNUMBER 2 : ";
cin>>b;
switch(input)
{
case 1:
cout<<a<<" + "<<b<<" = "<<(a+b);
break;
case 2:
cout<<a<<" - "<<b<<" = "<<(a-b);
break;
case 3:
cout<<a<<" x "<<b<<" = "<<(a*b);
break;
case 4:
div=(float)a/(float)b;
cout<<a<<" / "<<b<<" = "<<div;
break;
case 5:
cout<<a<<" % "<<b<<" = "<<(a%b);
break;
default:
cout<<"ENTERED OPERATION IS INVALID ...!!";
}
}
