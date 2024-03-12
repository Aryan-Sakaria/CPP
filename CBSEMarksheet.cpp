#include<iostream>
#include<iomanip>
using namespace std;

string Grade(int marks) {
    if(marks >= 91){
        return "A1";
    }
    else if(marks >= 81){
        return "A2";
    }
    else if(marks >= 71){
        return "B1";
    }
    else if(marks >= 61){
        return "B2";
    }
    else if(marks >= 51){
        return "C1";
    }
    else if(marks >= 41){
        return "C2";
    }
    else if(marks >= 33){
        return "D";
    }
    else if(marks >= 21){
        return "E1";
    }
    else {
        return "E2";
    }
}

int main(){
    string p1,p2,p3,p4,p5;
    int x,m1,m2,m3,m4,m5,m6,n1,n2,n3,n4,n5,n6;
cout<<"Enter the name of the student:"<<endl;
cin>>p1;
cout<<"Enter Roll No.: "<<endl;
cin>>x;
cout<<"Enter Mother's name:"<<endl;
cin>>p2;
cout<<"Enter Father's/Guardian's name:"<<endl;
cin>>p3;
cout<<"Enter Date of Birth:"<<endl;
cin>>p4;
cout<<"Enter name of School:"<<endl;
cin>>p5;

cout << "Enter marks obtained in English (Theory and Internal Assessment): ";
    cin >> m1 >> n1;

    cout << "Enter marks obtained in Hindi (Theory and Internal Assessment): ";
    cin >> m2 >> n2;

    cout << "Enter marks obtained in Mathematics (Theory and Internal Assessment): ";
    cin >> m3 >> n3;

    cout << "Enter marks obtained in Science (Theory and Internal Assessment): ";
    cin >> m4 >> n4;

    cout << "Enter marks obtained in Social Science (Theory and Internal Assessment): ";
    cin >> m5 >> n5;

    cout << "Enter marks obtained in IT (Theory and Internal Assessment): ";
    cin >> m6 >> n6;

system("cls");
cout<<setw(50)<<"CENTRAL BOARD OF SECONDARY EDUCATION"<<endl;
cout<<setw(35)<<"MARKS STATEMENT"<<endl;
cout<<setw(50)<<"ALL INDIA SECONDARY SCHOOL EXAMINATION,2021"<<endl;

cout<<"Name of Student: "<<p1<<endl;
cout<<"Roll No: "<<x<<endl;
cout<<"Mother's Name: "<<p2<<endl;
cout<<"Father's/Guardian's Name: "<<p3<<endl;
cout<<"Date of Birth: "<<p4<<endl;
cout<<"School: "<<p5<<endl;
cout<<"Scholastic Achievements"<<endl;
cout<<"_________________________"<<endl;
cout<<"| "<<"SUB. CODE"<<"| "<<"SUBJECT"<<"| "<<setw(35)<<"MARKS OBTAINED"<<setw(14)<<"|"<<endl;
cout<<setw(29)<<"|"<<"THEORY"<<"|"<<"IA/PR."<<"|"<<"TOTAL"<<"|"<<"POSITIONAL GRADE"<<"     |"<<endl;
cout<<"_________________________"<<endl;
cout<<left<<setw(5)<<"| "<<"101"<<" | "<<setw(15)<<"ENGLISH COMM."<<" |"<<right<<setw(5)<<m1<<" |"<<setw(5)<<n1<<" |"<<setw(5)<<(m1+n1)<<" |"<<Grade(m1 + n1)<<setw(20)<<" |"<<endl;
cout<<left<<setw(5)<<"| "<<"002"<<" | "<<setw(15)<<"HINDI COURSE-A"<<" |"<<right<<setw(5)<<m2<<" |"<<setw(5)<<n2<<" |"<<setw(5)<<m2+n2<<" |"<<Grade(m2 + n2)<<setw(20)<<" |"<<endl;
cout<<left<<setw(5)<<"| "<<"041"<<" | "<<setw(15)<<"MATHEMATICS"<<" |"<<right<<setw(5)<<m3<<" |"<<setw(5)<<n3<<" |"<<setw(5)<<m3+n3<<" |"<<Grade(m3+ n3)<<setw(20)<<" |"<<endl;
cout<<left<<setw(5)<<"| "<<"086"<<" | "<<setw(15)<<"SCIENCE"<<" |"<<right<<setw(5)<<m4<<" |"<<setw(5)<<n4<<" |"<<setw(5)<<m4+n4<<" |"<<Grade(m4 + n4)<<setw(20)<<" |"<<endl;
cout<<left<<setw(5)<<"| "<<"087"<<" | "<<setw(15)<<"SOCIAL SCIENCE"<<" |"<<right<<setw(5)<<m5<<" |"<<setw(5)<<n5<<" |"<<setw(5)<<m5+n5<<" |"<<Grade(m5 + n5)<<setw(20)<<" |"<<endl;
cout<<"| "<<"ADDITIONAL SUBJECT"<<setw(51)<<"|"<<endl;
cout<<left<<setw(5)<<"| "<<"165"<<" | "<<setw(15)<<"FOUNDATIONS OF I T"<<" |"<<right<<setw(5)<<m6<<" |"<<setw(5)<<n6<<" |"<<setw(5)<<m6+n6<<" |"<<Grade(m6 + n6)<<setw(17)<<" |"<<endl;
cout<<"_________________________"<<endl;
cout<<setw(37)<<"Prepared By- ARYAN SAKARIA";
return 0;
}
