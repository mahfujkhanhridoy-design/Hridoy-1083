#include <iostream>

using namespace std;

int main()
{
  char weather;
  int fuel;
  char crew_ready;
  cout<<"Enter current weather:Clear,Rain,Storm"<<endl;
  cin>>weather;
  cout<<"Enter the fual level:"<<endl;
  cin>>fuel;
  cout<<"Enter the crew status(YES/NO)";
  cin>>crew_ready;
  if(weather=='c'||weather=='C'){
    else if(fuel==100){
        else if (crew_ready=='Y'||crew_ready=='y'){
            cout<<"LAUNCH"<<endl;
        }
    }
    else{
        cout<<"ABORT"<<endl;

    }
  }
  if(weather=='s'||weather=='S'){
    cout<<"ABORT";

  }
  if(fuel>80&&crew_ready=='y'||crew_ready=='Y'){
        cout<<"LAUNCH"


  }else{
  cout<<"ABORT"
  }
    return 0;
}
