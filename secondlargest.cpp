# include<iostream>
using namespace std;
int main()
    {
        int n;
        cout<<"enter the number of elements:";
        cin>>n;
        int arr[n];
        cout<<"enter"<< n<<"elements:";
        for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }
    int largest =arr[0];
     int slargest= -1;
     for (int i=0; i<n; i++)
     {
        if (arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if ( arr[i]<largest && arr[i]>slargest)
        {
            slargest =arr [i];
        }

     } 
     return slargest; 
    }
     
    
