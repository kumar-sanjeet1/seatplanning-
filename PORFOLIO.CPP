#include<iostream.h>
#include<conio.h>

class portfolio
{
public:

void selection()
{
cout<<" Welcome to the sanjeet' profile \n";
cout<<"please choose the option metion below \n";
cout<<"--------------------------------------------------------------------\n" ;
cout<<"1: Eductaion\n";
cout<<"2: Technical skills\n";
cout<<"3: Trainings\n";
cout<<"4: projects\n";
cout<<"5: Other skills\n";
cout<<"6: Extra-curricular Activities\n";
cout<<"7: Personal Details\n";
}

void education()
{
cout<<"-----Education Details------\n";
cout<<"-----------------------------------------------------------------------------\n";
cout<<"B.tech ||    Guru nanak dev University ||   62.47%    ||     2013-2017|"<<endl;
cout<<"12th   ||    DR modern public school   ||   58%       ||	         2013|\n";
cout<<"10th   ||    DR modern public school   ||   47.10%    ||          2012|\n";
cout<<"-----------------------------------------------------------------------------";
}
void technical()
{
cout<<"Technical details\n";
cout<<"-----------------------------------------------------------\n";
cout<<"programming languages\n";
cout<<"c\n";
cout<<"c++\n";
cout<<"java\n";
cout<<"\n";
cout<<"Web technologies\n";
cout<<"HTML\n";
cout<<"CSS\n";
}
void training()
{
cout<<"-----------Tranings and workshops-------\n";
cout<<"\n";
cout<<"1: Two month traning on c/c++ with certification\n";
cout<<"2: Attended 2 days workshop on webites devlopment \n";
cout<<"3: java course online from udemy\n";
cout<<"4: Attended one-day workshop one graphics design \n";
cout<<"5: Attended one-day workshop on digital marketing \n";
}
void projects()
{
cout<<"-----------projects---------\n";
cout<<"\n";
cout<<" 1:               Seat planner \n";
cout<<"Arrange the seats according to the users choice ,It arrange the seating plan according to the alloted seats\n";
cout<<" 2:     portfolio \n";
cout<<" you are seeing this project ,lol\n";
}
void oskills()
{
cout<<"--------------Other skills-----------\n\n";

cout<<"      Applications: Ms Word,powerpoint\n";
cout<<"      Web Application: wordpress\n";
cout<<"      Graphics Applications : Adobe photoshop,Adobe Illustrator\n";
}

void exact()
{
cout<<"--------- Extra-curricular Activities --------\n\n";
cout<<" Hobbies include Internet surfing, Sketiching.\n";
cout<<" part time blog writer works on 'tipstricks4android.blogspot.in'\n";
cout<<"websites development works on http://letmehold.com\n";
}
void personal()
{
cout<<"-----------Personal Details---------\n\n";
cout<<"          Name : sanjeet kumar\n";
cout<<"          Email: sanjeet.love62gmail.com\n";
cout<<"          Phone: 9780898323\n";
}

};
void main()
{
clrscr();
int sel;
portfolio p1;
p1.selection();
cin>>sel;
switch(sel)
{
case 1:
p1.education();
break;
case 2:
p1.technical();
break;
case 3:
p1.training();
break;
case 4:
p1.projects();
break;

case 5:
p1.oskills();
break;
case 6:
p1.exact();
break;
case 7:
p1.personal();
break;
default:
cout<<"No entry found\n";
}

getch();
}

