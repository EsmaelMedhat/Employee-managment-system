#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;
struct enter{
string name,email,password;
};
string user_name;
vector<enter>account;
enter log[3];
int num;
int number=0;
struct emp{
string id,adress;
string name,job;
int salary,bonus;
};
emp dat[100];
void definshion(){
    log[0].name="OMAR MEDHAT";log[0].password="01068098315";log[0].email="omeldone@gmail.com";
log[1].name="ESMAEL MEDHAT";log[1].password="01990190998";log[1].email="alhabibybondk@gmail.com";
log[2].name="ESMAEL ALHABIBY";log[2].password="01556080613";log[2].email="esmaelalhabiby@gmail.com";
account.push_back(log[0]);
account.push_back(log[1]);
account.push_back(log[2]);
}
void run();
void check1();
void signup();
void check();
void tomenu();
void ALL(){
cout<<"_________________________________________________\n";
cout<<"_______________EMPLOYEE MANAGMNT_________________\n";
cout<<"_________________________________________________\n";
}

void addempdata(){
int v;
int datanum;
cout<<"\nHOW MANY EMPLIOYEES DO YOU WANT TO ADD?\n";
cin>>datanum;
number+=datanum;
if(number>0&&number<=100){
for(int i=0;i<number;i++)
{
cout<<"EMPIOYEE"<<i+1<<endl;
cout<<"\nname:";
cin.ignore(1,'\n');
getline(cin,dat[i].name);
cout<<"\njob:";
getline(cin,dat[i].job);
cout<<"\nid:";
getline(cin,dat[i].id);
cout<<"\nadress:";
getline(cin,dat[i].adress);
if(dat[i].job=="manager")dat[i].salary=5000;else if(dat[i].job=="clerk")dat[i].salary=3000;else if(dat[i].job=="worker")dat[i].salary=2000;else{dat[i].salary=404;}

}
}
else{
if(number>0||number>100){
cout<<"in valid number\n";
cout<<"try again :1    2:menu\n";
cout<<"choice :";
cin>>v;
if(v==1)
addempdata();
else{run();}
}
else{
    cout<<"that is not number \n";

}

}
}
void show()
{
if(number!=0)
    for(int i=0;i<number;i++){
cout<<"\nEMPIOYEE "<<i+1<<endl;
cout<<"\nName  :"<<dat[i].name;
cout<<"\nJob   :"<<dat[i].job;
 cout<<"\nId    :"<<dat[i].id;
cout<<"\nSalary:"<<dat[i].salary;
cout<<"\nAdress:"<<dat[i].adress;
cout<<endl;
    }
else{cout<<"\nthere is no data\n";}
}

void update(){
cout<<"enter employee id you want to update";
int x;
string m;
cin>>m;
for(int i=0;i<number;i++)
{
if(m==dat[i].id)
{x=i;

cout<<"\nname:"<<dat[x].name;
cout<<"\njob:"<<dat[x].job;
 cout<<"\nid"<<dat[x].id;
string nam;
string jo;
string idd;
cout<<"\nname:";
if(i==0){cin.ignore(1,'\n');}
getline(cin,nam);
cout<<"\njob:";
 getline(cin,jo);
 cout<<"\nid:";
getline(cin,idd);
dat[x].name=nam;
dat[x].job=jo;
dat[x].id=idd;
break;
}
else{
if(i==number-1)
cout<<"id is not true\n";

//try again;
}
}

}
void search(){
int n;
int mm;
string idi;
cout<<"\nenter employee ID you want :\n";
cin>>idi;
cout<<"\n";

for(int i=0;i<number;i++)
{
if(idi==dat[i].id)
{mm=i;
cout<<"\nEMPIOYEE "<<mm+1<<endl;
cout<<"\nName  :"<<dat[mm].name;
cout<<"\nJob   :"<<dat[mm].job;
 cout<<"\nId    :"<<dat[mm].id;
cout<<"\nSalary:"<<dat[mm].salary;
cout<<"\nAdress:"<<dat[mm].adress;
cout<<endl;
break;
}
 else{
if(i==number-1)
cout<<"not found\n";
   }
}
cout<<"\n1:TO retry  or  any num to menu\n";
cout<<"\nyour choice:";

cin>>n;
if(n==1){
system("cls");search();}
else{system("cls");run();
   }
}
int exit(){

    return 0;
}
void delet()
{
char chec;
cout<<"1 TO CLEAR ALL  2:To delete specific element  (any num to menu)\n";
cin>>chec;
if(chec=='1'){
number=0;
cout<<"\nall data is deleted\n";
}
else if(chec=='2')
{
    string id;
cout<<"\nenter id you want to delete  ";
cout<<"Id :";
cin>>id;
for(int i=0;i<number;i++)
{if(id==dat[i].id){
for(int j=i;j<number;j++ ){
dat[i].name=dat[i+1].name;
dat[i].name=dat[i+1].adress;
dat[i].name=dat[i+1].salary;
dat[i].name=dat[i+1].id;
dat[i].name=dat[i+1].job;
number--;
cout<<"\nsuccessfully daletation\n";
break;
}
if(i==number-i)
   cout<<"not found";
}
}
}

else{
    system("cls");
    run();
}

}
void des(){
cout<<"          "<<user_name<<endl;
ALL();
cout<<"ENTER 1 TO ADD EMPLOYEE DATA\n";
cout<<"ENTER 2 TO SEARCH             \n";
cout<<"ENTER 3 TO SHOW DATA           \n";
cout<<"ENTER 4 TO UPDATE DATA        \n";
cout<<"ENTER 5 TO DELETE DATA        \n";
cout<<"ENTER 6 TO LOG OUT             \n";
cout<<"ENTER 7 TO EXIT        \n";
}
void on(){
ALL();
cout<<"\n     1:Sign up \n";
cout<<"     2:Log in \n";
cout<<"     3:Exit   \n";
definshion();
int h;
cout<<"\n\nyourchoice :";
cin>>h;
if(h==1)
{
system("cls");signup();
}
if(h==2)
{
    system("cls");check1();
}
if(h==3)
{cout<<exit();
}
}

int main(){

on();
    return 0;

}
void tomenu(){
char n;
cout<<"enter any number to :menu \n";
cout<<"your choice:";
cin>>n;
if(n!=' '){
system("cls");
run();
}}
void run(){
int num;
des();
cout<<"\nyour choice:";
cin>>num;
if(num==1)
{
system("cls");
ALL();
addempdata();
tomenu();
}
if(num==2)
{system("cls");
    ALL();
    search();}
 if(num==3){system("cls");ALL();show();tomenu();}
 if(num==4){system("cls");ALL();update();tomenu();}
 if(num==5){system("cls");ALL();delet();tomenu();}
if(num==6){system("cls");on();}
if(num==7){cout<<exit();}
}
void check1()
{
int m;
cout<<"\n                                          Log in\n           ";
string email,password;
cout<<"\n\n          Email :";
cin>>email;
cout<<"\n\n       Password :";
cin>>password;
for(int i=0;i<account.size();i++)
{
  if(email==account[i].email&&password==account[i].password)
{
cout<<"loading";
for(int i=0;i<8;i++)
{cout<<'.';Sleep(1000);}
system("cls");
user_name=account[i].name;
run();
break;
}
else{
if(i==account.size()-1){
cout<<"\nnot found \n";
cout<<"try again :1 or any num to menu\n";
cout<<"choice :";
cin>>m;
}
}
}
if(m==1)
{
system("cls");
check1();
}
else{
cout<<exit();
}
}
void signup(){
int h;
cout<<"\n                                          Sign up\n           ";
enter sign;
cout<<"\n\n          name  :";
cin.ignore(1,'\n');
getline(cin,sign.name);
cout<<"\n\n          Email :";
cin>>sign.email;
cout<<"\n\n       Password :";
cin>>sign.password;
for(int i=0;i<account.size();i++)
{
  if(sign.email==account[i].email&&sign.password==account[i].password)
{
    user_name=account[i].name;
    cout<<"\nyou are already rgistered in this aplication\n";
cout<<"1 :continue  or any number to exit \n";
cout<<"your choice :";
cin>>h;
break;
}
else{ if(i==account.size()-1)
{
account.push_back(sign);
cout<<"loading";
for(int i=0;i<5;i++)
{cout<<'.';Sleep(1000);}
system("cls");
user_name=sign.name;
run();
}
}
}
if(h==1){system("cls");run();}
else{cout<<exit();}
}




