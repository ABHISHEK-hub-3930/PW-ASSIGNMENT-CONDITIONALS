#include<iostream>
using namespace std;
int main(){
    int cp,sp,p,l;
  cout<<"Enter the c.p. = ";
  cin>>cp;
  cout<<"Enter the s.p. = ";
  cin>>sp;
  if(sp>cp){
    p=sp-cp;

    cout<<"profit = "<<p;
  }
  else if(cp>sp){
      l=sp-cp;
      cout<<"loss = "<<l;
      
  }
  else{
      cout<<"no profit no loss";
  }
     
  


}