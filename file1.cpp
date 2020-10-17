#include<iostream>
#include<fstream>
#include<string>
/*
playing with file handling
fstream used for i/o base class
ifstream used for reading of file this is derive class
ofstream used for writing file
*/
/*in order to work with file there are two ways to open a file
1  using constructor
2 open with member function open method of class
*/
using namespace std;
int main()
{
    /*int n;
    cout<<"enter number of line to be inserted"<<endl;
    cin>>n;
    string st;
    for(int i=1;i<=n;i++){
    cout<<"enter string to input"<<endl;
    getline(cin,st);
ofstream out("sample.txt");//write operation
out<<st<<endl;*/
/*string st;
  ifstream in("sample1.txt");
  
  getline(in,st);
  cout<<st<<endl;*/
  ofstream out("sample.txt");//writing into sample.txt using ofstream
  out<<"here is rohan"<<endl;
  out<<"here is for what"<<endl;
  out<<"for this is main purpose"<<endl;
  ofstream hout("sample2.txt");//writing into sample2.txt using ofstream
  ifstream in;
  in.open("sample.txt");//reading file sample.txt
  string st;    //declaring string to read stream word
  string str;
  while (in.eof()==0)
  {
      /* code */
     //getline(in,st);
      //cout<<st<<endl;
      in>>str;           //reading word into str
      if(str=="here")     //checking first word is here or not if here then write into sample2.txt
      {
          getline(in,st);
          hout<<str<<st<<endl;
      }
  }
  ifstream ins;
  int sum=0,c=0;
  string s;
  ins.open("sample2.txt");
  while (!ins.eof())    //if file is not empty 
  {
      /* code */
     ins>>s;
     //cout<<s.size()<<endl;
     sum+=s.size();       //calculating sum of all individual word  
    c++;               //count no of word in file
  }
  //since loop executed once more that's why we have to subtract to them
  c=c-1;
  sum=sum-s.size();
  //cout<<c<<endl;
  //cout<<sum<<endl;
  
  float f=(float)sum/c;
  cout<<c<<" "<<sum<<endl;
  cout<<(float)sum/c<<endl;
  printf("%.2f\n",f);//only upto 2nd decimal


return 0;
}