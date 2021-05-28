//The KADANE's Algorithm
//Contiguous subarray problem

#include <iostream>
#include <climits> //for INT_MIN
using namespace std;

class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        int maxS=INT_MIN; //If we change this to maxS=0, this will not work for an array which has all negative numbers
        //TRY FROM KADANANES COMPLETEBUTINCOMPLETE.CPP
        int currS=0; 
        for (int i=0;i<n;i++)
        {
            currS=currS+arr[i];
            if(currS>maxS)
            {
                maxS=currS;
            }
            if(currS<0)
            {
                currS=0;
            }
        }
        return maxS; 
    }
    
};

int main()
{
	int n;
 	cout<<"Enter n ";
 	cin>>n;
	int a[n];
 	for(int i=0;i<n;i++)
 	{
  		cout<<"Enter element "<<i<< " "; 
    	cin>>a[i];
	}

	Solution ob;
	cout<<ob.maxSubarraySum(a,n)<<endl;
}