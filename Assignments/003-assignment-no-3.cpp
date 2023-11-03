#include<iostream>
#include <string>

using namespace std;

int main(){
string players[6]={"aftab","mehtab","Arjamad","jamshed","misbah","janbaz"};
string age[6]= {"32","43","56","34","23","43"};
string gender[6]={"M","M","M","M","M","M"};
string score[6]={"54","65","76","87","98","65"};
 int i=0;
  
     cout<<"Name"<<"\t"<<"age"<<"\t"<<"gender"<<"\t"<<"score";
    cout<<endl;
     
 
while(i<6){
    cout<<players[i]<<"\t"<<age[i]<<"\t"<<gender[i]<<"\t"<<score[i];
    cout<<endl;
    i++;
   
    
}
       