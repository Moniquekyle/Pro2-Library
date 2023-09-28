#include <iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;
class System
{
public:
    void SetColor(int ForgC);
    void gotoxy(int x,int y);
    void setFontStyle(int FontSize);
    void SetColorAndBackground(int ForgC, int BackC);
    void ShowConsoleCursor(bool showFlag);
    void line_hor(int, int, int, char) ;
    void line_ver(int, int, int, char) ;
    void box(int,int,int,int,char) ;
    void drawcircle(int,int,int);
    void DrawTriangle(int, int, int, int, int, int);
    void Beep(int, int);
} ;

void load(){
    System ui;
    ui.setFontStyle(20);
    ui.gotoxy(0,27);cout<<"\t\t\t\t\t\tPlease wait while loading"<<endl;
    ui.SetColor(8);//set text color to Light Magenta
    char b=219;
    for (int i=0;i<=119;i++){
        cout<<b;
        for (int j=0;j<=1e7;j++); //You can also use sleep function instead of for loop
    }
}
void intro ()
{
    System ui;
    system("cls");
    ui.setFontStyle(20);
    system("color B8");//set background color
    ui.SetColor(0);//set text color to black
	cout<<"\n\t            ";
    ui.gotoxy(37,2);cout<<"L I B R A R Y  M A N A G E M E N T  S Y S T E M ";
	ui.gotoxy(1,4);cout<<"made by:";
    ui.SetColor(8);//set text color
        ui.box(2,6,116,13,219) ;//box shape
        ui.box(1,5,117,14,218) ;
	ui.SetColor(0);//set text color to black
    ui.gotoxy(42,8);cout<<"R i t c h e l l e    T .    R u e r a s ";
    ui.gotoxy(42,9);cout<<"J e r e m y   P a u l   R i c e r r a ";
    ui.gotoxy(42,10);cout<<"M a r i v i c   T u a z o n ";
	ui.gotoxy(42,11);cout<<"M o n i q u e    K y l e    C a b i g t i n g ";
	ui.gotoxy(50,12);cout<<"B S I S - N S - 2 A B";

}

void head()
{
    System ui;
	system ("cls");
    ui.setFontStyle(22);//set font and screen size
    system("color B8");//set background color
    ui.SetColor(8);
    ui.box(2,1,116,5,219) ;
    ui.SetColor(0);
    ui.box(1,0,117,6,218) ;
    ui.SetColor(5);
    ui.gotoxy(18,3);cout<<"L  I  B  R  A  R  Y     M  A  N  A  G  E  M  E  N  T    S  Y  S  T  E  M ";
}

class book
{
  char book_number[30];
  char book_name[50];
  char author_name[30];
  public:
void create_book() {
       System ui;
      head();
      ui.SetColor(8);
ui.box(40,9,84,24,219) ;
ui.box(39,8,85,25,218) ;
      ui.SetColor(0);
      ui.gotoxy(43,11);
      cout<<"-----Enter Book details-----";
      ui.gotoxy(43,12);
      cout<<"Enter The Book ID Number: ";cin>>book_number;
      ui.gotoxy(43,13);
      cout<<"Enter The Name of The Book: ";cin>>book_name;
      ui.gotoxy(43,14);
      cout<<"Enter The Author's Name: ";cin>>author_name;
      ui.gotoxy(43,15);
      cout<<"Book Created Successfully...";
          }
void show_book(){
       System ui;
      head();
      ui.SetColor(8);
      ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
      ui.SetColor(0);
      ui.gotoxy(42,12);cout<<"Book ID Number: "<<book_number;
      ui.gotoxy(42,13);cout<<"Book Name: "<<book_name;
      ui.gotoxy(42,14);cout<<"Author's Name: "<<author_name;
          }
void modify_book(){
      System ui;
      head();
      ui.SetColor(8);
      ui.box(40,11,84,24,219) ;
      ui.box(39,10,85,25,218) ;
      ui.SetColor(0);
      ui.gotoxy(42,13);
      cout<<"Book ID number : "<<book_number;
      ui.gotoxy(42,14);
      cout<<"Modify Book Name : ";cin>>book_name;
      ui.gotoxy(42,15);
      cout<<"Modify Author's Name: ";cin>>author_name;
          }
    char* getbooknumber(){
      return book_number;
          }
void report()
        {cout<<book_number<<setw(30)<<book_name<<setw(30)<<author_name<<endl;}
};

class student
{
private:
  char ID_number[20];
  char Student_name[20];
  char stbno[6];
  char b_d[20];
  char gender[2];
  char email[31];
  int token;
public:
void create_student(){
    System ui;
    int p;
    head();
    ui.SetColor(8);
     ui.box(40,9,84,24,219) ;
     ui.box(39,8,85,25,218) ;
    ui.SetColor(0);
    ui.gotoxy(50,11);cout<<"-----Enter Student details----";
    ui.gotoxy(42,12);cout<<"Enter LRN: ";
    cin>>ID_number;
    cin.ignore();
    ui.gotoxy(42,13);cout<<"Enter Name -SN_FN_MI: ";
    cin.getline(Student_name,50);
    cin.ignore();
    ui.gotoxy(42,14);cout<<"Birthday -YYYY/MM/DD: ";
    cin>>b_d;
    cin.ignore();
    ui.gotoxy(42,15);cout<<"Gender: ";cin>>gender;
    ui.gotoxy(42,16);cout<<"Email: ";
    cin>>email;
    cin.ignore();
    token=0;
    stbno[0]='/0';
    ui.gotoxy (42,17);cout<<"Student Record Created Successfully..."; 
          }
void show_student(){
     System ui;
    ui.SetColor(8);
    ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
    ui.SetColor(0);
    ui.gotoxy(43,13);cout<<"LRN Number: "<<ID_number;
    ui.gotoxy(43,14);cout<<"Student Name: ";
    puts(Student_name);
    ui.gotoxy(43,15);cout<<"No of Book issued: "<<token;
    if(token==1)
      ui.setFontStyle(18);
      ui.gotoxy(42,16);cout<<"Book No "<<stbno;
          }
void modify_student(){
    System ui;
    ui.SetColor (8);
    ui.box(40,11,84,24,219) ;
    ui.box(39,10,85,25,218) ;
    ui.SetColor(0);
    ui.gotoxy(42,16);cout<<"LRN Number: "<<ID_number;
    ui.gotoxy(43,17);cout<<"Modify Student Name: ";cin.getline(Student_name,50);cin.ignore();
    ui.gotoxy(43,18);cout<<"Modify Birthday: ";cin.getline(b_d,50);
    ui.gotoxy(43,19);cout<<"Modify Gender: ";cin.getline(gender,50);
    ui.gotoxy(43,20);cout<<"Modify Email: ";cin.getline(email,50);
          }
  char* get_ID_number(){
    return ID_number;
          }
  char* retstbno(){
    return stbno;
          }
  int rettoken(){
    return token;
          }
  void addtoken()
    {token=1;}
  void resettoken()
    {token=0;}
  void getstbno(char t[]){
    strcpy(stbno,t);
          }
  void report()
    {cout<<"\t"<<ID_number<<setw(20)<<Student_name<<setw(10)<<token<<endl;}
};


fstream fp,fp1;
book bk;
student st;

void write_book(){
head();
int more_or_main, cat;
System ui;
           ui.SetColor(8);
           ui.box(40,11,84,24,219) ;
           ui.box(39,10,85,25,218) ;
           ui.SetColor (0);
           ui.gotoxy(50,13);cout<<"1.ENGLISH";
           ui.gotoxy(50,14);cout<<"2.MATHEMATICS";
           ui.gotoxy(50,15);cout<<"3.FILIPINO";
           ui.gotoxy(50,16);cout<<"4.SOCIAL SCIENCES";
           ui.gotoxy(50,17);cout<<"5.FICTIONAL BOOKS";
           ui.gotoxy(50,18);cout<<"Please Select a Category: ";
           cin>>cat;
switch(cat){
  case 1: fp.open("eng_book.txt",ios::out|ios::app);
          do{
              bk.create_book();
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy(48,18);cout<<"Press 1 to add more books";
              ui.gotoxy(48,19);cout<<"Press 2 to return to main menu.";
              ui.gotoxy(48,20);cout<<"Enter: ";cin>>more_or_main;
              }while(more_or_main == 1);
          fp.close();
  break;
  case 2: fp.open("math_book.txt",ios::out|ios::app);
          do{
              bk.create_book();
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy(48,18);cout<<"Press 1 to add more books";
              ui.gotoxy(48,19);cout<<"Press 2 to return to main menu.";
              ui.gotoxy(48,20);cout<<"Enter: ";cin>>more_or_main;
              cout<<"Enter: ";cin>>more_or_main;
              }while(more_or_main == 1);
          fp.close();
  break;
  case 3: fp.open("fil_book.txt",ios::out|ios::app);
          do{
              bk.create_book();
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy(48,18);cout<<"Press 1 to add more books";
              ui.gotoxy(48,19);cout<<"Press 2 to return to main menu.";
              ui.gotoxy(48,20);cout<<"Enter: ";cin>>more_or_main;
              }while(more_or_main == 1);
          fp.close();
  break;
  case 4: fp.open("ss_book.txt",ios::out|ios::app);
          do{
              bk.create_book();
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy(48,18);cout<<"Press 1 to add more books";
              ui.gotoxy(48,19);cout<<"Press 2 to return to main menu.";
              ui.gotoxy(48,20);cout<<"Enter: ";cin>>more_or_main;
              }while(more_or_main == 1);
          fp.close();
  break;
  case 5: fp.open("fic_book.txt",ios::out|ios::app);
          do{
              bk.create_book();
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy(48,18);cout<<"Press 1 to add more books";
              ui.gotoxy(48,19);cout<<"Press 2 to return to main menu.";
              ui.gotoxy(48,20);cout<<"Enter: ";cin>>more_or_main;
              }while(more_or_main == 1);
          fp.close();
  break;
  default : cout<<"\a";
            exit(0);
}
}

void write_student(){
System ui;
int more_or_main;
fp.open("student.txt",ios::out|ios::app);
do{
  st.create_student();
  fp.write((char*)&st,sizeof(student));
              ui.gotoxy(48,18);cout<<"Press 1 to add more student";
              ui.gotoxy(48,19);cout<<"Press 2 to return to main menu.";
              ui.gotoxy(48,20);cout<<"Enter: ";cin>>more_or_main;
  }while(more_or_main == 1);
    fp.close();
}

void display_a_book(char n[], int c){
head();
System ui;
int check=0;
ui.gotoxy (50,10);cout<<"BOOK DETAILS\n";
switch(c){
  case 1: fp.open("eng_book.txt",ios::in);
          while(fp.read((char*)&bk,sizeof(book))){
           if(strcmpi(bk.getbooknumber(),n)==0){
            bk.show_book();
            check=1;
            }
          }
          fp.close();
          if(check==0){
                        ui.SetColor (8);
           ui.box(36,13,84,17,219) ;
           ui.box(35,12,85,18,218) ;
            ui.SetColor (0);
          ui.gotoxy (50,15);cout<<"Book does not exist";
          getch();
          }
  break;
  case 2: fp.open("math_book.txt",ios::in);
          while(fp.read((char*)&bk,sizeof(book))){
           if(strcmpi(bk.getbooknumber(),n)==0){
            bk.show_book();
            check=1;
            }
          }
          fp.close();
          if(check==0){
                        ui.SetColor (8);
           ui.box(36,13,84,17,219) ;
           ui.box(35,12,85,18,218) ;
            ui.SetColor (0);
          ui.gotoxy (50,15);cout<<"Book does not exist";
          getch();
          }
  break;
  case 3: fp.open("fil_book.txt",ios::in);
          while(fp.read((char*)&bk,sizeof(book))){
           if(strcmpi(bk.getbooknumber(),n)==0){
            bk.show_book();
            check=1;
            }
          }
          fp.close();
          if(check==0){
                        ui.SetColor (8);
           ui.box(36,13,84,17,219) ;
           ui.box(35,12,85,18,218) ;
            ui.SetColor (0);
          ui.gotoxy (50,15);cout<<"Book does not exist";
          getch();
          }
  break;
  case 4: fp.open("ss_book.txt",ios::in);
          while(fp.read((char*)&bk,sizeof(book))){
           if(strcmpi(bk.getbooknumber(),n)==0){
            bk.show_book();
            check=1;
            }
          }
          fp.close();
          if(check==0){
                        ui.SetColor (8);
           ui.box(36,13,84,17,219) ;
           ui.box(35,12,85,18,218) ;
            ui.SetColor (0);
          ui.gotoxy (50,15);cout<<"Book does not exist";
          getch();
          }
  break;
  case 5: fp.open("fic_book.txt",ios::in);
          while(fp.read((char*)&bk,sizeof(book))){
           if(strcmpi(bk.getbooknumber(),n)==0){
            bk.show_book();
            check=1;
            }
          }
          fp.close();
          if(check==0){
                        ui.SetColor (8);
           ui.box(36,13,84,17,219) ;
           ui.box(35,12,85,18,218) ;
            ui.SetColor (0);
          ui.gotoxy (50,15);cout<<"Book does not exist";
          getch();
          }
  break;
  default : cout<<"\a";
            exit(0);
            }
}

void display_a_student(char n[]){
head();
System ui;
ui.box(40,12,84,24,219) ;
ui.box(39,11,85,25,218) ;
ui.gotoxy (43,9);cout<<"STUDENT DETAILS\n";
int check=0;
fp.open("student.txt",ios::in);
while(fp.read((char*)&st,sizeof(student))){
  if((strcmpi(st.get_ID_number(),n)==0)){
    st.show_student();
    check=1;
    }
      }
fp.close();
if(check==0){
      ui.SetColor (8);
           ui.box(36,15,84,17,219) ;
           ui.box(35,14,85,18,218) ;
            ui.SetColor (0);
 ui.gotoxy (50,14);cout<<"Student does not exist";
}
getch();
}

void modify_book(){
head();
System ui;
char n[20];
int found=0,cat;
 ui.gotoxy(50,8);
cout<<"\n\n\tMODIFY BOOK";
system ("cls");
ui.SetColor(8);
     ui.SetColor(8);
     ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
     ui.SetColor(0);
 ui.gotoxy(50,8);
 ui.gotoxy(50,12);cout<<"1.ENGLISH";
 ui.gotoxy(50,13);cout<<"2.MATHEMATICS";
 ui.gotoxy(50,14);cout<<"3.FILIPINO";
 ui.gotoxy(50,15);cout<<"4.SOCIAL SCIENCES";
 ui.gotoxy(50,16);cout<<"5.FICTIONAL BOOKS";
ui.gotoxy(50,17);cout<<"Please Select a Category: ";
cin>>cat;
switch(cat){
  case 1: fp.open("eng_book.txt",ios::in|ios::out);
          while(fp.read((char*)&bk,sizeof(book)) && found==0){
            if(strcmpi(bk.getbooknumber(),n)==0){
              bk.show_book();
              ui.gotoxy(50,18);cout<<"Enter The New Details of the book"<<endl;
              bk.modify_book();
              int pos=-1*sizeof(bk);
              fp.seekp(pos,ios::cur);
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy(50,19);cout<<"Record Updated Successfully...";
              found=1;
              }
            }
            fp.close();
            if(found==0)
              ui.gotoxy(50,19);cout<<"Record Not Found ";
            getch();
  break;
  case 2: fp.open("math_book.txt",ios::in|ios::out);
          while(fp.read((char*)&bk,sizeof(book)) && found==0){
            if(strcmpi(bk.getbooknumber(),n)==0){
              bk.show_book();
              ui.gotoxy(50,18);cout<<"Enter The New Details of the book"<<endl;
              bk.modify_book();
              int pos=-1*sizeof(bk);
              fp.seekp(pos,ios::cur);
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy (50,19);cout<<"Record Updated Successfully...";
              found=1;
              }
            }
            fp.close();
            if(found==0)
            ui.gotoxy (50,19);cout<<"Record Not Found ";
            getch();
  break;
  case 3: fp.open("fil_book.txt",ios::in|ios::out);
          while(fp.read((char*)&bk,sizeof(book)) && found==0){
            if(strcmpi(bk.getbooknumber(),n)==0){
              bk.show_book();
              ui.gotoxy(50,18);cout<<"Enter The New Details of the book"<<endl;
              bk.modify_book();
              int pos=-1*sizeof(bk);
              fp.seekp(pos,ios::cur);
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy (50,19);cout<<" Record Updated Successfully...";
              found=1;
              }
            }
            fp.close();
            if(found==0)
              ui.gotoxy (50,19);cout<<"Record Not Found ";
            getch();
  break;
  case 4: fp.open("ss_book.txt",ios::in|ios::out);
          while(fp.read((char*)&bk,sizeof(book)) && found==0){
            if(strcmpi(bk.getbooknumber(),n)==0){
              bk.show_book();
              ui.gotoxy(50,18);cout<<"Enter The New Details of the book"<<endl;
              bk.modify_book();
              int pos=-1*sizeof(bk);
              fp.seekp(pos,ios::cur);
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy (50,19);cout<<"Record Updated Successfully...";
              found=1;
              }
            }
            fp.close();
            if(found==0)
              ui.gotoxy (50,19);cout<<"Record Not Found ";
            getch();
  break;
  case 5: fp.open("fic_book.txt",ios::in|ios::out);
          while(fp.read((char*)&bk,sizeof(book)) && found==0){
            if(strcmpi(bk.getbooknumber(),n)==0){
              bk.show_book();
              ui.gotoxy(50,18);cout<<"Enter The New Details of the book"<<endl;
              bk.modify_book();
              int pos=-1*sizeof(bk);
              fp.seekp(pos,ios::cur);
              fp.write((char*)&bk,sizeof(book));
              ui.gotoxy (50,19);cout<<"Record Updated Successfully...";
              found=1;
              }
            }
            fp.close();
            if(found==0)
              ui.gotoxy (50,19);cout<<"Record Not Found ";
            getch();
  break;
  default : cout<<"\a";
            exit(0);
  }
}


void modify_student(){
head();
System ui;
char n[20];
int found=0;
     ui.SetColor(8);
     ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
     ui.SetColor(0);
     ui.gotoxy(50,7);
cout<<"MODIFY STUDENT RECORD";
ui.gotoxy(43,13);cout<<"Enter Student's LRN number: ";cin>>n;
fp.open("student.txt",ios::in|ios::out);
while(fp.read((char*)&st,sizeof(student)) && found==0){
if(strcmpi(st.get_ID_number(),n)==0){
  st.show_student();
  ui.gotoxy(43,14);cout<<"Enter The New Details of student"<<endl;
  st.modify_student();
  int pos=-1*sizeof(st);
  fp.seekp(pos,ios::cur);
  fp.write((char*)&st,sizeof(student));
  ui.gotoxy(50,19);cout<<"Record Updated Successfully...";
  found=1;
  }
    }
fp.close();
if(found==0)
  ui.gotoxy(50,19);cout<<"Record Not Found ";
getch();
}

void delete_student(){
    System ui;
head();
char n[20];
int flag=0;
ui.SetColor(8);
     ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
     ui.SetColor(0);
     ui.gotoxy(50,7);
cout<<"DELETE STUDENT";
ui.gotoxy(43,13);cout<<"Enter The LRN number of the Student You Want To Delete: ";
ui.gotoxy(43,14);cin>>n;
fp.open("student.txt",ios::in|ios::out);
fstream fp2;
fp2.open("Temp.txt",ios::out);
fp.seekg(0,ios::beg);
while(fp.read((char*)&st,sizeof(student))){
  if(strcmpi(st.get_ID_number(),n)!=0)
    fp2.write((char*)&st,sizeof(student));
  else
    flag=1;
    }
fp2.close();
fp.close();
remove("student.txt");
rename("Temp.txt","student.txt");
if(flag==1){
  ui.gotoxy(50,19);cout<<"Record Deleted ..";
}else
  ui.gotoxy(50,19);cout<<"Record not found";
getch();

}

void delete_book(){
head();
fstream fp2;
char n[20];
int flag=0, cat;
System ui;
ui.SetColor(8);
     ui.SetColor(8);
     ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
     ui.SetColor(0);
 ui.gotoxy(50,13);cout<<"1.ENGLISH";
 ui.gotoxy(50,14);cout<<"2.MATHEMATICS";
 ui.gotoxy(50,15);cout<<"3.FILIPINO";
 ui.gotoxy(50,16);cout<<"4.SOCIAL SCIENCES";
 ui.gotoxy(50,17);cout<<"5.FICTIONAL BOOKS";
ui.gotoxy(50,18);cout<<"Please Select a Category: ";
cin>>cat;
ui.gotoxy(50,19);cout<<"Enter The Book's ID number You Want To Delete: ";
ui.gotoxy(50,20);cin>>n;
switch(cat){
  case 1: fp.open("eng_book.txt",ios::in|ios::out);
          fp2.open("Temp.txt",ios::out);
          fp.seekg(0,ios::beg);
          while(fp.read((char*)&bk,sizeof(book))){
            if(strcmpi(bk.getbooknumber(),n)!=0)  {
              fp2.write((char*)&bk,sizeof(book));
              }
            else
              flag=1;
              }
          fp2.close();
          fp.close();
          remove("eng_book.txt");
          rename("Temp.txt","eng_book.txt");
          if(flag==1){
            ui.gotoxy(50,22);cout<<"Record Deleted";
}          else
            ui.gotoxy(50,22);cout<<"Record not found";
          getch();
  break;
  case 2: fp.open("math_book.txt",ios::in|ios::out);
          fp2.open("Temp.txt",ios::out);
          fp.seekg(0,ios::beg);
          while(fp.read((char*)&bk,sizeof(book))){
            if(strcmpi(bk.getbooknumber(),n)!=0)  {
              fp2.write((char*)&bk,sizeof(book));
              }
            else
              flag=1;
              }
          fp2.close();
          fp.close();
          remove("math_book.txt");
          rename("Temp.txt","math_book.txt");
          if(flag==1){
            ui.gotoxy(50,21);cout<<"Record Deleted";
}          else
            ui.gotoxy(50,21);cout<<"Record not found";
          getch();
  break;
  case 3: fp.open("fil_book.txt",ios::in|ios::out);
          fp2.open("Temp.txt",ios::out);
          fp.seekg(0,ios::beg);
          while(fp.read((char*)&bk,sizeof(book))){
            if(strcmpi(bk.getbooknumber(),n)!=0)  {
              fp2.write((char*)&bk,sizeof(book));
              }
            else
              flag=1;
              }
          fp2.close();
          fp.close();
          remove("fil_book.txt");
          rename("Temp.txt","fil_book.txt");
          if(flag==1){
            ui.gotoxy(50,22);cout<<"Record Deleted";
}          else
            ui.gotoxy(50,22);cout<<"Record not found";
          getch();
  break;
  case 4: fp.open("ss_book.txt",ios::in|ios::out);
          fp2.open("Temp.txt",ios::out);
          fp.seekg(0,ios::beg);
          while(fp.read((char*)&bk,sizeof(book))){
            if(strcmpi(bk.getbooknumber(),n)!=0)  {
              fp2.write((char*)&bk,sizeof(book));
              }
            else
              flag=1;
              }
          fp2.close();
          fp.close();
          remove("ss_book.txt");
          rename("Temp.txt","ss_book.txt");
          if(flag==1){
            ui.gotoxy(50,22);cout<<"Record Deleted";
            }
          else
            ui.gotoxy(50,22);cout<<"Record not found";
          getch();
  break;
  case 5: fp.open("fic_book.txt",ios::in|ios::out);
          fp2.open("Temp.txt",ios::out);
          fp.seekg(0,ios::beg);
          while(fp.read((char*)&bk,sizeof(book))){
            if(strcmpi(bk.getbooknumber(),n)!=0)  {
              fp2.write((char*)&bk,sizeof(book));
              }
            else
              flag=1;
              }
          fp2.close();
          fp.close();
          remove("fic_book.txt");
          rename("Temp.txt","fic_book.txt");
          if(flag==1){
            ui.gotoxy(50,22);cout<<"Record Deleted";
         } else
            ui.gotoxy(50,22);cout<<"Record not found";
          getch();
  break;
  default : cout<<"\a";
            exit(0);
            }
}

void display_all_students(){
head();
System ui;
fp.open("student.txt",ios::in);
if(!fp){
  ui.gotoxy (50,19);cout<<"ERROR!!! FILE COULD NOT BE OPEN ";
  getch();
  return;
  }
cout<<"\n\n\n\n\n\n\t\tSTUDENT LIST\n\n";
cout<<"==================================================================\n";
cout<<"\nLRN Number."<<setw(10)<<"Name"<<setw(20)<<"Book Issued\n";
cout<<"==================================================================\n";
while(fp.read((char*)&st,sizeof(student))){
  st.report();
  }
fp.close();
getch();
}

void display_allb(){
    head();
System ui;
int cat;
ui.SetColor(8);
     ui.SetColor(8);
     ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
     ui.SetColor(0);
 ui.gotoxy(50,13);cout<<"1.ENGLISH";
 ui.gotoxy(50,14);cout<<"2.MATHEMATICS";
 ui.gotoxy(50,15);cout<<"3.FILIPINO";
 ui.gotoxy(50,16);cout<<"4.SOCIAL SCIENCES";
 ui.gotoxy(50,17);cout<<"5.FICTIONAL BOOKS";
ui.gotoxy(50,18);cout<<"Please Select a Category: ";
cin>>cat;
switch(cat){
  case 1: fp.open("eng_book.txt",ios::in);
            head();
          if(!fp){
            ui.gotoxy(48,21);cout<<"ERROR! FILE COULD NOT BE OPEN ";
            getch();
            return;
            }
          cout<<"\n\n\n\n\n\n\t\tBook LIST\n\n";
          cout<<"=========================================================================\n";
          cout<<"Book ID Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
          cout<<"=========================================================================\n";
          while(fp.read((char*)&bk,sizeof(book))){
            bk.report();
            }
          fp.close();
          getch();
  break;
  case 2: fp.open("math_book.txt",ios::in);
              head();
          if(!fp){
             ui.gotoxy(48,21);cout<<"ERROR! FILE COULD NOT BE OPEN ";
            getch();
            return;
            }

          cout<<"\n\n\n\n\n\n\t\tBook LIST\n\n";
          cout<<"=========================================================================\n";
          cout<<"Book ID Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
          cout<<"=========================================================================\n";
          while(fp.read((char*)&bk,sizeof(book))){
            bk.report();
            }
          fp.close();
          getch();
  break;
  case 3: fp.open("fil_book.txt",ios::in);
              head();
          if(!fp){
             ui.gotoxy(48,21);cout<<"ERROR! FILE COULD NOT BE OPEN ";
            getch();
            return;
            }
          cout<<"\n\n\n\n\n\n\n\t\tBook LIST\n\n";
          cout<<"=========================================================================\n";
          cout<<"Book ID Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
          cout<<"=========================================================================\n";
          while(fp.read((char*)&bk,sizeof(book))){
            bk.report();
            }
          fp.close();
          getch();
  break;
  case 4: fp.open("ss_book.txt",ios::in);
              head();
          if(!fp){
             ui.gotoxy(48,20);cout<<"ERROR! FILE COULD NOT BE OPEN ";
            getch();
            return;
            }
          cout<<"\n\n\n\n\n\n\n\t\tBook LIST\n\n";
          cout<<"=========================================================================\n";
          cout<<"Book ID Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
          cout<<"=========================================================================\n";
          while(fp.read((char*)&bk,sizeof(book))){
            bk.report();
            }
          fp.close();
          getch();
  break;
  case 5: fp.open("fic_book.txt",ios::in);
          if(!fp){
            ui.gotoxy(48,20);cout<<"ERROR! FILE COULD NOT BE OPEN ";
            getch();
            return;
            }
            head();
          cout<<"\n\n\n\n\n\n\n\t\tBook LIST\n\n";
          cout<<"=========================================================================\n";
          cout<<"Book ID Number"<<setw(20)<<"Book Name"<<setw(25)<<"Author\n";
          cout<<"=========================================================================\n";
          while(fp.read((char*)&bk,sizeof(book))){
            bk.report();
            }
          fp.close();
          getch();
  break;
  default : cout<<"\a";
            exit(0);
}
}

void issue_book(){
head();
System ui;
char sn[20],bn[20];
int found=0,flag=0, cat;
ui.SetColor(8);
 ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
 ui.SetColor(0);
 ui.gotoxy(50,8);cout<<"BOOK ISSUE";
 ui.gotoxy(50,13);cout<<"1.ENGLISH";
 ui.gotoxy(50,14);cout<<"2.MATHEMATICS";
 ui.gotoxy(50,15);cout<<"3.FILIPINO";
 ui.gotoxy(50,16);cout<<"4.SOCIAL SCIENCES";
 ui.gotoxy(50,17);cout<<"5.FICTIONAL BOOKS";
  ui.gotoxy(50,18);cout<<"Please Select a Category: ";cin>>cat;
 ui.gotoxy(50,19);cout<<"Enter student's LRN number: ";
 ui.gotoxy(50,20);cin>>sn;
fp.open("student.txt",ios::in|ios::out);
switch(cat){
  case 1: fp1.open("eng_book.txt",ios::in|ios::out);
          while(fp.read((char*)&st,sizeof(student)) && found==0){
            if(strcmpi(st.get_ID_number(),sn)==0){
              found=1;
              if(st.rettoken()==0){
                ui.gotoxy(50,22);cout<<"Enter book number: ";cin>>bn;
                while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                  if(strcmpi(bk.getbooknumber(),bn)==0){
                    bk.show_book();
                    flag=1;
                    st.addtoken();
                    st.getstbno(bk.getbooknumber());
                    int pos=-1*sizeof(st);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&st,sizeof(student));
                    ui.gotoxy(48,23);cout<<"Book issued successfully";
                    }
                  }
                if(flag==0){
                    ui.gotoxy(43,23);cout<<"Book number does not exist";
                }
                  }
                else{
                  ui.gotoxy(43,23);cout<<"You have not returned the last book ";
                }
            }
          }     
            if(found==0){
              ui.gotoxy(43,22);cout<<"Student record not exist...";
            }
            getch();
  break;
  case 2: fp1.open("math_book.txt",ios::in|ios::out);
          while(fp.read((char*)&st,sizeof(student)) && found==0){
            if(strcmpi(st.get_ID_number(),sn)==0){
              found=1;
              if(st.rettoken()==0){
                ui.gotoxy(50,22);cout<<"Enter book number: ";cin>>bn;
                while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                  if(strcmpi(bk.getbooknumber(),bn)==0){
                    bk.show_book();
                    flag=1;
                    st.addtoken();
                    st.getstbno(bk.getbooknumber());
                    int pos=-1*sizeof(st);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&st,sizeof(student));
                   ui.gotoxy(48,23);cout<<"Book issued successfully...";
                    }
                  }
                if(flag==0){
                    ui.gotoxy(43,23);cout<<"Book number does not exist";
                }
                  }
                else{
                  ui.gotoxy(43,23);cout<<"You have not returned the last book ";
                }
            }
          }     
            if(found==0){
              ui.gotoxy(43,22);cout<<"Student record not exist...";
            }
            getch();
  break;
  case 3: fp1.open("fil_book.txt",ios::in|ios::out);
          while(fp.read((char*)&st,sizeof(student)) && found==0){
            if(strcmpi(st.get_ID_number(),sn)==0){
              found=1;
              if(st.rettoken()==0){
                ui.gotoxy(50,21);cout<<"Enter book number: ";cin>>bn;
                while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                  if(strcmpi(bk.getbooknumber(),bn)==0){
                    bk.show_book();
                    flag=1;
                    st.addtoken();
                    st.getstbno(bk.getbooknumber());
                    int pos=-1*sizeof(st);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&st,sizeof(student));
                       ui.gotoxy(48,22);cout<<"Book issued successfully...";
                    }
                  }
                if(flag==0){
                    ui.gotoxy(43,23);cout<<"Book number does not exist";
                }
                  }
                else{
                  ui.gotoxy(43,23);cout<<"You have not returned the last book ";
                }
            }
          }     
            if(found==0){
              ui.gotoxy(43,22);cout<<"Student record not exist...";
            }
            getch();
  break;
  case 4: fp1.open("ss_book.txt",ios::in|ios::out);
          while(fp.read((char*)&st,sizeof(student)) && found==0){
            if(strcmpi(st.get_ID_number(),sn)==0){
              found=1;
              if(st.rettoken()==0){
                ui.gotoxy(50,21);cout<<"Enter book number: ";cin>>bn;
                while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                  if(strcmpi(bk.getbooknumber(),bn)==0){
                    bk.show_book();
                    flag=1;
                    st.addtoken();
                    st.getstbno(bk.getbooknumber());
                    int pos=-1*sizeof(st);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&st,sizeof(student));
                   ui.gotoxy(48,22);cout<<"Book issued successfully...";
                    }
                  }
                if(flag==0){
                    ui.gotoxy(43,23);cout<<"Book number does not exist";
                }
                  }
                else{
                  ui.gotoxy(43,23);cout<<"You have not returned the last book ";
                }
            }
          }     
            if(found==0){
              ui.gotoxy(43,22);cout<<"Student record not exist...";
            }
            getch();
  break;
  case 5: fp1.open("fic_book.txt",ios::in|ios::out);
          while(fp.read((char*)&st,sizeof(student)) && found==0){
            if(strcmpi(st.get_ID_number(),sn)==0){
              found=1;
              if(st.rettoken()==0){
                ui.gotoxy(50,21);cout<<"Enter book number: ";cin>>bn;
                while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                  if(strcmpi(bk.getbooknumber(),bn)==0){
                    bk.show_book();
                    flag=1;
                    st.addtoken();
                    st.getstbno(bk.getbooknumber());
                    int pos=-1*sizeof(st);
                    fp.seekp(pos,ios::cur);
                    fp.write((char*)&st,sizeof(student));
                    ui.gotoxy(48,22);cout<<"Book issued successfully...";
                    }
                  }
                if(flag==0){
                    ui.gotoxy(43,23);cout<<"Book number does not exist";
                }
                  }
                else{
                  ui.gotoxy(43,23);cout<<"You have not returned the last book ";
                }
            }
          }     
            if(found==0){
              ui.gotoxy(43,22);cout<<"Student record not exist...";
            }
            getch();
  break;
  default : cout<<"\a";
            exit(0);
}
fp.close();
fp1.close();
}

void book_return(){
    System ui;
head();
char sn[20],bn[20];
int found=0, flag=0, day, fine, cat;
 ui.SetColor(8);
 ui.box(40,11,84,24,219) ;
ui.box(39,10,85,25,218) ;
 ui.SetColor(0);
 ui.gotoxy(50,8);cout<<"RETURN BOOKS";
ui.SetColor(0);
           ui.gotoxy(50,13);cout<<"1.ENGLISH";
           ui.gotoxy(50,14);cout<<"2.MATHEMATICS";
           ui.gotoxy(50,15);cout<<"3.FILIPINO";
           ui.gotoxy(50,16);cout<<"4.SOCIAL SCIENCES";
           ui.gotoxy(50,17);cout<<"5.FICTIONAL BOOKS";
           ui.gotoxy(50,18);cout<<"Please Select a Category: ";cin>>cat;
           ui.gotoxy(45,19);cout<<"Enter the student's ID Number: ";cin>>sn;
fp.open("student.txt",ios::in|ios::out);
switch(cat){
  case 1: fp1.open("eng_book.txt",ios::in|ios::out);
        while(fp.read((char*)&st,sizeof(student)) && found==0){
          if(strcmpi(st.get_ID_number(),sn)==0){
            found=1;
            if(st.rettoken()==1){
              while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                if(strcmpi(bk.getbooknumber(),st.retstbno())==0){
                  bk.show_book();
                  flag=1;
                  ui.gotoxy(50,20);cout<<"Book returned in no. of days: ";cin>>day;
                  if(day>15){
                    fine=(day-15)*1;
                    ui.gotoxy(43,21);cout<<"You reached the time limit of borrowing a book. You have to pay a fine of  "<<fine;
                    }
                  st.resettoken();
                  int pos=-1*sizeof(st);
                  fp.seekp(pos,ios::cur);
                  fp.write((char*)&st,sizeof(student));
                  ui.gotoxy(48,22);cout<<"Book returned successfully...";
                  }
                }
              if(flag==0){
                ui.gotoxy(48,22);cout<<"Book number does not exist";
              }
                }
            else{
              ui.gotoxy(48,22);cout<<"No book is issued..please check!!";
            }
              }
            }
        if(found==0){
          ui.gotoxy(48,22);cout<<"Student record not exist...";
        }
        getch();
  break;
  case 2: fp1.open("math_book.txt",ios::in|ios::out);
        while(fp.read((char*)&st,sizeof(student)) && found==0){
          if(strcmpi(st.get_ID_number(),sn)==0){
            found=1;
            if(st.rettoken()==1){
              while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                if(strcmpi(bk.getbooknumber(),st.retstbno())==0){
                  bk.show_book();
                  flag=1;
                 ui.gotoxy(50,20);cout<<"Book returned in no. of days: ";cin>>day;
                  if(day>15){
                    fine=(day-15)*1;
                    ui.gotoxy(43,21);cout<<"You reached the time limit of borrowing a book. You have to pay a fine of  "<<fine;
                    }                  st.resettoken();
                  int pos=-1*sizeof(st);
                  fp.seekp(pos,ios::cur);
                  fp.write((char*)&st,sizeof(student));
                  ui.gotoxy(48,22);cout<<"Book returned successfully...";
                  }
                }
              if(flag==0){
                ui.gotoxy(48,22);cout<<"Book number does not exist";
              }
                }
            else{
              ui.gotoxy(48,22);cout<<"No book is issued..please check!!";
            }
              }
            }
        if(found==0){
          ui.gotoxy(48,22);cout<<"Student record not exist...";
        }
        getch();
  break;
  case 3: fp1.open("fil_book.txt",ios::in|ios::out);
        while(fp.read((char*)&st,sizeof(student)) && found==0){
          if(strcmpi(st.get_ID_number(),sn)==0){
            found=1;
            if(st.rettoken()==1){
              while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                if(strcmpi(bk.getbooknumber(),st.retstbno())==0){
                  bk.show_book();
                  flag=1;
                  ui.gotoxy(50,20);cout<<"Book returned in no. of days: ";cin>>day;
                  if(day>15){
                    fine=(day-15)*1;
                    ui.gotoxy(43,21);cout<<"You reached the time limit of borrowing a book. You have to pay a fine of  "<<fine;
                    }
                  st.resettoken();
                  int pos=-1*sizeof(st);
                  fp.seekp(pos,ios::cur);
                  fp.write((char*)&st,sizeof(student));
                  ui.gotoxy(48,22);cout<<"Book returned successfully...";
                  }
                }
              if(flag==0){
                ui.gotoxy(48,22);cout<<"Book number does not exist";
              }
                }
            else{
              ui.gotoxy(48,22);cout<<"No book is issued..please check!!";
            }
              }
            }
        if(found==0){
          ui.gotoxy(48,22);cout<<"Student record not exist...";
        }
        getch();
  break;
  case 4: fp1.open("ss_book.txt",ios::in|ios::out);
        while(fp.read((char*)&st,sizeof(student)) && found==0){
          if(strcmpi(st.get_ID_number(),sn)==0){
            found=1;
            if(st.rettoken()==1){
              while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                if(strcmpi(bk.getbooknumber(),st.retstbno())==0){
                  bk.show_book();
                  flag=1;
                 ui.gotoxy(50,20);cout<<"Book returned in no. of days: ";cin>>day;
                  if(day>15){
                    fine=(day-15)*1;
                    ui.gotoxy(43,21);cout<<"You reached the time limit of borrowing a book. You have to pay a fine of  "<<fine;
                    }

                  st.resettoken();
                  int pos=-1*sizeof(st);
                  fp.seekp(pos,ios::cur);
                  fp.write((char*)&st,sizeof(student));
                  ui.gotoxy (50,22);cout<<"Book returned successfully...";
                  }
                }
              if(flag==0){
                ui.gotoxy(48,22);cout<<"Book number does not exist";
              }
                }
            else{
              ui.gotoxy(48,22);cout<<"No book is issued..please check!!";
            }
              }
            }
        if(found==0){
          ui.gotoxy(48,22);cout<<"Student record not exist...";
        }
        getch();
  break;
  case 5: fp1.open("fic_book.txt",ios::in|ios::out);
        while(fp.read((char*)&st,sizeof(student)) && found==0){
          if(strcmpi(st.get_ID_number(),sn)==0){
            found=1;
            if(st.rettoken()==1){
              while(fp1.read((char*)&bk,sizeof(book))&& flag==0){
                if(strcmpi(bk.getbooknumber(),st.retstbno())==0){
                  bk.show_book();
                  flag=1;
                 ui.gotoxy(50,20);cout<<"Book returned in no. of days: ";cin>>day;
                  if(day>15){
                    fine=(day-15)*1;
                    ui.gotoxy(43,21);cout<<"You reached the time limit of borrowing a book. You have to pay a fine of  "<<fine;
                    }
                  st.resettoken();
                  int pos=-1*sizeof(st);
                  fp.seekp(pos,ios::cur);
                  fp.write((char*)&st,sizeof(student));
                  ui.gotoxy (50,22);cout<<"Book returned successfully...";
                  }
                }
              if(flag==0){
                ui.gotoxy(48,22);cout<<"Book number does not exist";
              }
                }
            else{
              ui.gotoxy(48,22);cout<<"No book is issued..please check!!";
            }
              }
            }
        if(found==0){
          ui.gotoxy(48,22);cout<<"Student record not exist...";
        }
        getch();
  break;
}

system("cls");
fp.close();
fp1.close();
}

void book_menu(){
int option;
System ui;
ui.SetColor(8);
     ui.SetColor(8);
     ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
     ui.SetColor(0);
ui.gotoxy(43,13);cout<<"1. CREATE BOOKS";
ui.gotoxy(43,14);cout<<"2. DISPLAY ALL BOOKS";
ui.gotoxy(43,15);cout<<"3. DISPLAY SPECIFIC BOOK";
ui.gotoxy(43,16);cout<<"4. MODIFY BOOKS";
ui.gotoxy(43,17);cout<<"5. DELETE BOOKS";
ui.gotoxy(43,18);cout<<"6. to GO BACK TO MAIN MENU";
ui.gotoxy(43,19);cout<<"Option: ";cin>>option;
load();
switch(option){
  case 1:
          write_book();
  break;
  case 2: display_allb();
          ui.gotoxy(0,28);system("pause");
  break;
  case 3: head();
          char num[20];
          int cat;
            ui.SetColor(8);
 ui.box(40,11,84,24,219) ;
 ui.box(39,10,85,25,218) ;
 ui.SetColor(0);
           ui.gotoxy(50,13);cout<<"1.ENGLISH";
           ui.gotoxy(50,14);cout<<"2.MATHEMATICS";
           ui.gotoxy(50,15);cout<<"3.FILIPINO";
           ui.gotoxy(50,16);cout<<"4.SOCIAL SCIENCES";
           ui.gotoxy(50,17);cout<<"5.FICTIONAL BOOKS";
          ui.gotoxy(50,18);cout<<"Please Select a Category: ";
          cin>>cat;
          ui.gotoxy(50,19);cout<<"Please Enter The book No. ";cin>>num;
          display_a_book(num,cat);
          ui.gotoxy(0,28);system("pause");

  case 4: modify_book();
          ui.gotoxy(0,28);system("pause");
  break;
  case 5: delete_book();
          ui.gotoxy(0,28);system("pause");
  break;
  case 6: system("cls");break;
  default:cout<<"\a";
  }
}

void student_menu(){
int option;
System ui;
ui.SetColor(8);
     ui.SetColor(8);
     ui.box(40,11,84,24,219) ;
     ui.box(39,10,85,25,218) ;
     ui.SetColor(0);
ui.gotoxy(43,13);cout<<"1. CREATE STUDENT RECORD";
ui.gotoxy(43,14);cout<<"2. DISPLAY ALL STUDENTS RECORD";
ui.gotoxy(43,15);cout<<"3. DISPLAY SPECIFIC STUDENT RECORD";
ui.gotoxy(43,16);cout<<"4. MODIFY STUDENT RECORD";
ui.gotoxy(43,17);cout<<"5. DELETE STUDENT RECORD";
ui.gotoxy(43,18);cout<<"6. to GO BACK TO MAIN MENU";
ui.gotoxy(43,19);cout<<"Option: ";cin>>option;
switch(option){
  case 1:
          write_student();
  break;
  case 2: 
          display_all_students();
          ui.gotoxy(0,28);system("pause");
  break;
  case 3: 
          char num[20];
          ui.gotoxy(43,20);cout<<"Please Enter The ID Number: ";cin>>num;
          display_a_student(num);
          ui.gotoxy(0,28);system("pause");
  break;
  case 4:
          modify_student();
          ui.gotoxy(0,28);system("pause");
  break;
  case 5:
          delete_student();
          ui.gotoxy(0,28);system("pause");
  break;
  case 6:
  break;
  default:cout<<"\a";
  }
}

int main(){
System ui;
int option = 0, i, o;
char id[5], pass[7];
intro();
load();
re:
head();
ui.gotoxy(41,8);cout<<"Please Choose Any Option To login \n";
ui.SetColor(8);
     ui.box(36,11,84,17,219) ;
     ui.box(35,10,85,18,218) ;
     ui.SetColor(0);
ui.gotoxy(42,12);cout<<"1.Student";
ui.gotoxy(42,13);cout<<"2.Librarian";
ui.gotoxy(42,14);cout<<"3.Close Application";
ui.gotoxy(42,16);cout<<"Enter your choice:";cin>>i;
if(i==1){
  ss:
    head();
  ui.SetColor(0);
  ui.gotoxy(42,9);cout<<"Select from the following";
  ui.SetColor(8);
  ui.box(36,11,84,17,219) ;
  ui.box(35,10,85,18,218) ;
  ui.SetColor(0);
  ui.gotoxy(42,13);cout<<"1.New Student";
  ui.gotoxy(42,14);cout<<"2.Existing student";
  ui.gotoxy(42,15);cout <<"Enter your choice: ";cin>>o;
    if(o==1){
        write_student();
    }
    if(o==2){
        goto stud;
    }
    else{
       ui.gotoxy(50,19);cout<<"You enter the wrong key, please try again";
        goto ss;
    }
  stud:
 head();
  ui.SetColor(0);
  ui.gotoxy(45,9);
  cout<<"W E L C O M E  S T U D E N T";
  ui.SetColor(8);
    ui.box(40,11,84,24,219) ;
    ui.box(39,10,85,25,218) ;
  ui.SetColor(0);

  ui.gotoxy(50,12);cout<<"1.View BookList";
  ui.gotoxy(50,13);cout<<"2.Search for a Book";
  ui.gotoxy(50,14);cout<<"3.Issue Books";
  ui.gotoxy(50,15);cout<<"4.Return Books";
  ui.gotoxy(50,16);cout<<"5.Go to main menu";
  ui.gotoxy(50,17);cout<<"6.Close Application";
  ui.gotoxy(50,19);cout<<"Enter your choice: ";
  cin>>i;
  if(i==1){
    display_allb();
    cout<<endl;
    system("pause");
    goto stud;}
  else if(i==2){
        head();
          char num[20];
          int cat;
          ui.SetColor(8);
                 ui.box(40,11,84,24,219) ;
                 ui.box(39,10,85,25,218) ;
           ui.SetColor(0);
           ui.gotoxy(50,13);cout<<"1.ENGLISH";
           ui.gotoxy(50,14);cout<<"2.MATHEMATICS";
           ui.gotoxy(50,15);cout<<"3.FILIPINO";
           ui.gotoxy(50,16);cout<<"4.SOCIAL SCIENCES";
           ui.gotoxy(50,17);cout<<"5.FICTIONAL BOOKS";
           ui.gotoxy(50,18);cout<<"Please Select a Category: ";cin >> cat;
           ui.gotoxy(50,19);
          cout<<"Please Enter The book No. ";cin>>num;
          display_a_book(num,cat);
          ui.gotoxy(0,28);system("pause");
    goto stud;}

  else if(i==3){
    issue_book();
    ui.gotoxy(0,28);system("pause");
    goto stud;
  }
  else if(i==4){
    book_return();
    ui.gotoxy(0,28);system("pause");
    goto stud;
  }
  
  else if(i==5){
    goto re;
    }
  else if(i==6)exit(0);
  else{
    head();
    ui.SetColor(8);
                ui.box(2,10,116,15,219) ;
                ui.box(1,9,117,16,218) ;
          ui.SetColor(0);
          ui.gotoxy(42,12);
    cout<<"Please enter correct option :";
    getch();
    goto stud;
    }
  }
else if(i==2){
  pass:
head();
ui.SetColor(8);
     ui.SetColor(8);
     ui.box(36,11,84,17,219) ;
     ui.box(35,10,85,18,218) ;
     ui.gotoxy(47,13);
     ui.SetColor(0);
  cout<<"USERNAME => ";cin>>id;
  ui.gotoxy(47,14);
  cout<<"PASSWORD => ";cin>>pass;
	if(strcmp(id,"admin")==0&&strcmp(pass,"**")==0){
           head();
ui.SetColor(8);
     ui.SetColor(8);
     ui.box(36,11,84,17,219) ;
     ui.box(35,10,85,18,218) ;
     ui.gotoxy(47,14);
     ui.SetColor(0);
    cout<<"LOG IN SUCCESFULLY";
    load();
    for(;;){
      head();
      ui.SetColor(8);
     ui.box(36,11,84,18,219) ;
     ui.box(35,10,85,19,218) ;
          ui.SetColor(0);
      ui.gotoxy(45,8);cout<<"W E L C O M E  L I B R A R I A N";
      ui.gotoxy(44,13);cout<<"1.Update Student Records";
      ui.gotoxy(44,14);cout<<"2.Update Book Records";
      ui.gotoxy(44,15);cout<<"3.Exit";
      ui.gotoxy(44,17);cout<<"Please Choose One Option: ";cin>>option;
      switch(option){
        case 1: head();
                student_menu();
        break;
        case 2: head();
                book_menu();
        break;
        case 3:exit(0);
        break;
        default : cout<<"\a";
                  exit(0);
                  }
                }
              }
  else{
    ui.gotoxy(44,16);cout<<"Incorrect....!!";
    ui.gotoxy(0,28);system("pause");
    goto pass;
  }
            }

}
void System::gotoxy(int x,int y){
    COORD coord = {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void System::SetColor(int ForgC){
  WORD wColor;
  //This handle is needed to get the current background attribute
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;
 //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
    //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}

void System::setFontStyle(int FontSize){
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;                   // Width of each character in the font
    cfi.dwFontSize.Y = FontSize;                  // Height
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    std::wcscpy(cfi.FaceName, L"Consolas"); // font style
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
void System::SetColorAndBackground(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}

void System::ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}

//**********************************************************
// FUNCTION TO DRAW BOX LINE
//**********************************************************

void System :: box(int column1, int row1, int column2, int row2, char c)
{
        char ch=218 ;
        char c1, c2, c3, c4 ;
        char l1=196, l2=179 ;
        if (c == ch)
        {
                c1=218 ;
                c2=191 ;
                c3=192 ;
                c4=217 ;
                l1 = 196 ;
                l2 = 179 ;
        }
        else
        {
                c1=c ;
                c2=c ;
                c3=c ;
                c4=c ;
                l1 = c ;
                l2 = c ;
        }
        gotoxy(column1,row1) ;
        cout<<c1 ;
        gotoxy(column2,row1) ;
        cout <<c2 ;
        gotoxy(column1,row2) ;
        cout <<c3 ;
        gotoxy(column2,row2) ;
        cout <<c4 ;
        column1++ ;
        column2-- ;
        line_hor(column1,column2,row1,l1) ;
        line_hor(column1,column2,row2,l1) ;
        column1-- ;
        column2++ ;
        row1++ ;
        row2-- ;
        line_ver(row1,row2,column1,l2) ;
        line_ver(row1,row2,column2,l2) ;
}
void System :: line_hor(int column1, int column2, int row, char c)
{
        for ( column1; column1<=column2; column1++ )
        {
                gotoxy(column1,row) ;
                cout <<c ;
        }
}

//**********************************************************
// FUNCTION TO DRAW VERTICAL LINE
//**********************************************************


void System :: line_ver(int row1, int row2, int column, char c)
{
        for ( row1; row1<=row2; row1++ )
        {
                gotoxy(column,row1) ;
            cout <<c ;
        }
}

//***********************************************************
//FUNCTION TO DRAW CIRCLE
//***********************************************************
void System::drawcircle(int x, int y, int radius)
{
    int x_pos = radius, y_pos = 0;
    int radiusError = 1 - x_pos;

    while (x_pos >= y_pos)
    {
        gotoxy(x + x_pos, y + y_pos);
        cout << "*";
        gotoxy(x + y_pos, y + x_pos);
        cout << "*";
        gotoxy(x - y_pos, y + x_pos);
        cout << "*";
        gotoxy(x - x_pos, y + y_pos);
        cout << "*";
        gotoxy(x - x_pos, y - y_pos);
        cout << "*";
        gotoxy(x - y_pos, y - x_pos);
        cout << "*";
        gotoxy(x + y_pos, y - x_pos);
        cout << "*";
        gotoxy(x + x_pos, y - y_pos);
        cout << "*";
        y_pos++;
        if (radiusError < 0)
        {
            radiusError += 2 * y_pos + 1;
        }
        else
        {
            x_pos--;
            radiusError += 2 * (y_pos - x_pos) + 1;
        }
    }
}
//triangle

void System::DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    // draw the first line
    gotoxy(x1, y1);
    cout << "*";
    int x = x1, y = y1;
    while (x != x2 || y != y2)
    {
        if (x < x2) x++;
        else if (x > x2) x--;
        if (y < y2) y++;
        else if (y > y2) y--;
        gotoxy(x, y);
        cout << "*";
    }
    // draw the second line
    gotoxy(x2, y2);
    cout << "*";
    x = x2, y = y2;
    while (x != x3 || y != y3)
    {
        if (x < x3) x++;
        else if (x > x3) x--;
        if (y < y3) y++;
        else if (y > y3) y--;
        gotoxy(x, y);
        cout << "*";
    }
    // draw the third line
    gotoxy(x3, y3);
    cout << "*";
    x = x3, y = y3;
    while (x != x1 || y != y1)
    {
        if (x < x1) x++;
        else if (x > x1) x--;
        if (y < y1) y++;
        else if (y > y1) y--;
        gotoxy(x, y);
        cout << "*";
    }
}
//
void System::Beep(int x1, int x2)
{
    Beep(1000,100); // 1000 is frequency of the beep and 100 is duration in milliseconds
}
