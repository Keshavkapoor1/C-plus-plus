#include<iostream>                     
#include<stdlib.h>  
#include<ctime>                   

using namespace std;
int main(){
   
srand(time(0));
int user=0;
int cpu=0;

while(user==cpu){
cout<<"Stone Paper Secissor "<<endl;
cout<<"1:Stone"<<endl;
cout<<"2:Paper"<<endl;
cout<<"3:Secissor"<<endl;
cout<<"User select";
cin>>user;
//user choose
if(user==1){
    cout<<"User choose stone"<<endl;
}
else if(user==2){
    cout<<"user choose Paper"<<endl;
}
else{
    cout<<"user choose Secissor"<<endl;
}
// cpu choose
cpu=rand()%3+1;
if(cpu==1){
      cout<<"CPU choose stone"<<endl;
}
else if(cpu==2){
    cout<<"CPU choose Paper"<<endl;
}
else{
    cout<<"CPU choose Secissor"<<endl;
}

// Match

//both chosse same
if(user==cpu){
    cout<<"Tie!,play again"<<endl;

}
//user chosse stone
else if(user==1){
    if(cpu==2){
        cout<<"cpu win the match"<<endl;
    }
    else if(cpu==3){
        cout<<"User win the match"<<endl;
    }
}
//user chosse paper
else if(user==2){
    if(cpu==3){
        cout<<"cpu win the match"<<endl;
    }
    else if(cpu==1){
        cout<<"User win the match"<<endl;
    }
}
//user chosse secissor
else if(user==3){
    if(cpu==1){
        cout<<"cpu win the match"<<endl;
    }
    else if(cpu==2){
        cout<<"User win the match"<<endl;
    }
}
    }
 return 0;
}

