  /*int arr[100];
   int n;
   cout<<"Enter The Number Of Elements"<<endl;
   cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;

            }
        }
        swap(arr[i],arr[min_index]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }*/
#include <iostream>

using namespace std;

int main()
{
  int arr[100];
  int n;
  cout<<"ENTER THE NUMBER OF ELEMNTS :";
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n-1;i++){
    int min_index=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }

    }
    swap(arr[i],arr[min_index]);


  }
  for(int i=0;i<n;i++){
    cout<<" "<<arr[i]<<" ";
  }
    return 0;
}
