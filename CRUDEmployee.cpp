#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
 public:
 int empno;
 string ename;
 long salary;
}emp[100];
int main(){
 int choice=0,n=0,totalrecord=0,found;
 do{
 cout<<"1.ADD RECORD"<<endl;
 cout<<"2.DISPLAY ALL"<<endl;
 cout<<"3.SEARCH BY EMPNO"<<endl;
 cout<<"4.SEARCH BY ENAME"<<endl;
 cout<<"5.SEARCH BY SALARY"<<endl;
 cout<<"6.UPDATE BY EMPNO"<<endl;
 cout<<"7.DELETE BY EMPNO"<<endl;
 cout<<"8.DELETE BY ENAME"<<endl;
 cout<<"0.EXIT"<<endl;
 cout<<"ENTER YOUR CHOICE :";
 cin >>choice;
 switch(choice){
 case 1:
 cout<<"Enter how many employees you want to add:";
 cin>>n;
 for (int i=totalrecord;i<n+totalrecord;i++){
 cout<<"Enter Employee no:";
 cin>>emp[i].empno;
 cout<<"Enter Employee name:";
 cin>>emp[i].ename;
 cout<<"Enter Employee salary:";
 cin>>emp[i].salary;
 }
 totalrecord+=n;
 break;
 case 2:
cout<<left<<setw(12)<<"Employee No"<<setw(15)<<"Employee name"<<right<<setw(10)<<"Salary"<<endl;
 for(int i=0;i<totalrecord;i++)
 {

cout<<left<<setw(12)<<emp[i].empno<<setw(15)<<emp[i].ename<<right<<setw(10)<<emp[i].salary
<<endl;
 }
 break;
 case 3:
 found=0;
 int empno;
 cout<<"Enter Employee No to search:";
 cin>>empno;
 for(int i=0;i<totalrecord;i++){
 if(emp[i].empno==empno){

cout<<left<<setw(12)<<emp[i].empno<<setw(15)<<emp[i].ename<<right<<setw(10)<<emp[i].salary
<<endl;
 found=1;
 }
 }
 if(found)
 cout<<"Record Not Found"<<endl;
 break;
 case 4:
 {
 found=0;
 string ename;
 cout<<"Enter Employee name to Search";
 cin>>ename;
 cout<<left<<setw(12)<<"Employee No"<<setw(15)<<"Employee name"<<right<<setw(10)<<"Salary"<<endl;
 for (int i=0;i<totalrecord;i++){
 if(ename.compare(emp[i].ename)== 0){

cout<<left<<setw(12)<<emp[i].empno<<setw(15)<<emp[i].ename<<right<<setw(10)<<emp[i].salary
<<endl;
 found=1;
 }
 }
 if(found)
 cout<<"Record Not Found"<<endl;
 }
 break;
 case 5:
 {
 found=0;
 int sal;
 cout<<"Enter Salary to search employee:";
 cin>>sal;
cout<<left<<setw(12)<<"Employee No"<<setw(15)<<"Employee name"<<right<<setw(10)<<"Salary"<<endl;
 for(int i=0;i<totalrecord;i++){
 if(emp[i].salary>=sal){

cout<<left<<setw(12)<<emp[i].empno<<setw(15)<<emp[i].ename<<right<<setw(10)<<emp[i].salary
<<endl;
 found=1;
 }
 }
 if(found)
 cout<<"Record not Found"<<endl;
 }
 break;
 case 6:
 {
 found=0;
 int salary;
 cout<<"Enter Employee no to Update";
 cin>>empno;
 for(int i=0;i<totalrecord;i++){
 if(emp[i].empno==empno){
 cout<<"Enter new employee name:";
 cin>>emp[i].ename;
 cout<<"Entry new employee salary:";
 cin>>emp[i].salary;
 found=1;
 cout<<"Record Update Successfully"<<endl;
 }
 }
 if(found)
 cout<<"Record Not Found"<<endl;
 }
 break;

 case 7:
 {
 found=0;
 int empno;
 cout<<"Enter Employee no to delete:";
 cin>>empno;
 for(int i=0;i<totalrecord;i++){
 if(emp[i].empno==empno){
 emp[i]=emp[i+1];
 found=1;
 }
 }
 if(found){
 cout<<"Record Delete Successfully";
 totalrecord--;
 }
 else
 cout<<"Record Not Found"<<endl;
 }
 break;

 case 8:
 {
 found=0;
 string ename;
 cout<<"Enter Emplpyoee Name to Delete:";
 cin>>ename;
 for(int i=0;i<totalrecord;i++){
 if(ename.compare(emp[i].ename)==0){
 emp[i]=emp[i+1];
 found=1;
 }
 }
 if (found){
 cout<<"Record Delete Successfully"<<endl;
 totalrecord--;
 }
 else
 cout<<"Record Not Found"<<endl;
 }
 break;
 case 0:
 cout<<"THANKS FOR USING THE PROGRAM"<<endl;
 cout<<"HAVE A NICE DAY"<<endl;
 cout<<"Prepared by- Aryan Sakaria";
 }
 }while(choice!=0);
 return 0;
}
