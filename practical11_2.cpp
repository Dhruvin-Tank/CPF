//Parctical 11.2
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string pr;
cout<<"*******************************************************\n";
cout<<"FILE ORGANIZATION &amp; FILE OPERATIONS UTILITY\n";
cout<<"******************************************************\n";

//PART A-File Creation and Writing
cout<<"Document.txt Created Successfully\n";
cout<<"-------------------------------------------------------\n";

ofstream F;
F.open("Document.txt");
cout<<"Enter text:";
while(true){
    getline(cin,pr);
    if(pr=="$"){
        break;
    }
    F<<pr<<endl;
}
F.close();
cout<<"-------------------------------------------------------\n";
cout<<"Data Written Successfully\n";
cout<<"-------------------------------------------------------\n";

//PART B– File Reading
cout<<"Reading Document.txt\n";
ifstream inF;
inF.open("Document.txt");
while(getline(inF,pr)){
    cout<<pr<<endl;
}
if(inF.eof()){
    cout<<"---------------------------------------------------\n";
    cout<<"End of File Reached Successfully\n";
}
inF.close();
cout<<"----------------------------------------------\n";

//PART C– File Copying and Error
cout<<"Creating BackupDocument.txt\n";
ifstream sourceF("Document.txt");
ofstream backupF("BackupDocument.txt");
if(!sourceF){
    cout<<"ERROR:Could not open Document.txt\n";
}
while(getline(sourceF,pr)){
    backupF<<pr<<endl;
}
sourceF.close();
backupF.close();
cout<<"Contents Copied Successfully\n";
cout<<"Backup File Created Successfully\n";
cout<<"----------------------------------------------\n";

//PART D– Random File Access
fstream file("Document.txt",ios::in | ios::out);
cout<<"Current File Position    :"<<file.tellg()<<endl;
file.seekg(10,ios::beg);
cout<<"Moving file to pointer  "<<file.tellg()<<endl;
cout<<"Displaying Contents after Repositioning\n";
string text;
if(getline(file,text)){
    cout<<"  "<<text<<endl;
}
cout<<"-----------------------------------------------\n";
file.clear();
file.seekg(0,ios::beg);
cout<<"Resetting File Pointer\n";
while(getline(file,text)){
    cout<<"  "<<text<<endl;
}
file.close();
cout<<"File Handling Practical\n";
cout<<"-------------------------------------------------\n";
cout<<"Program Executed Successfully\n";
cout<<"-------------------------------------------------\n";




return 0;

}
