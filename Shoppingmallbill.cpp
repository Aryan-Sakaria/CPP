#include<iostream>
#include<iomanip>
using namespace std;

int i;
float p[4];
int q[4];
float sum;

int main(){
for(i=0;i<4;i++){
    cout<<"Enter price for item "<<i+1<<" ";
    cin>>p[i];
}
for(i=0;i<4;i++){
    cout<<"Enter quantity of item "<<i+1<<" ";
    cin>>q[i];
}

system("cls");
system("color 3");
cout<<fixed<<setprecision(2);

sum = p[0]*q[0] + p[1]*q[1] + p[2]*q[2] + p[3]*q[3];

cout<<setw(40)<<"XYZ Mart Pvt Ltd"<<endl;
cout<<setw(44)<<"3\\top, PQR shopping Mall"<<endl;
cout<<setw(38)<<"Gandhinagar"<<endl;
cout<<"======================================================"<<endl;
cout<<"Bill No 104"<<setw(43)<<"6 Feb 2024"<<endl;
cout<<"======================================================"<<endl;
cout<<left<<setw(6)<<"No"<<setw(18)<<"Item Name"<<right<<setw(11)<<"Unit Price"<<setw(6)<<"Qty"<<setw(13)<<"Total"<<endl;
cout<<"======================================================"<<endl;
cout<<left<<setw(6)<<"1"<<setw(18)<<"Computer"<<right<<setw(11)<<p[0]<<setw(6)<<q[0]<<setw(13)<<p[0]*q[0]<<endl;
cout<<left<<setw(6)<<"2"<<setw(18)<<"Mobile"<<right<<setw(11)<<p[1]<<setw(6)<<q[1]<<setw(13)<<p[1]*q[1]<<endl;
cout<<left<<setw(6)<<"3"<<setw(18)<<"Calculator"<<right<<setw(11)<<p[2]<<setw(6)<<q[2]<<setw(13)<<p[2]*q[2]<<endl;
cout<<left<<setw(6)<<"4"<<setw(18)<<"Pencil"<<right<<setw(11)<<p[3]<<setw(6)<<q[3]<<setw(13)<<p[3]*q[3]<<endl;
cout<<"======================================================"<<endl;
cout<<setw(43)<<"Total Amount ="<<setw(10)<<sum<<endl;
cout<<setw(43)<<"Discount ="<<setw(10)<<sum*0.1<<endl;
cout<<"======================================================"<<endl;
cout<<setw(43)<<"Amount to be paid"<<setw(10)<<sum*0.9<<endl;
cout<<"Made by Aryan Sakaria-NFSU";
}
