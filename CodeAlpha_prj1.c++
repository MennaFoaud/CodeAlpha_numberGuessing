#include <iostream>
using namespace std;
int main(){
   srand(time(0));
   int number_guess=rand()%100+1;
   int attempts=5;
   cout<<"Guess the number , You only have 5 attempts GOODLUCK!"<<endl;
   while (attempts>0){
       int number;
        cin>>number;
      if (number_guess==number){
          cout<<"you guessed correct!!";
          break;
      }
      else if (number_guess>number){
          cout<<"number you guessed is too low"<<endl;
      }
      else{
          cout<<"number you guessed is too high "<<endl;
      }
      attempts--;
      cout<<"you have attempts left="<<attempts<<endl;
   }
   if (attempts==0){
       cout<<" you have lost all chances"<<endl<<number_guess<<"="<<"was the number"<<endl;
   }
    return 0;
}