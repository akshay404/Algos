#include<bits/stdc++.h>

using namespace std;


int combinationUtil(int arr[], int data[], int start, int end, int index, int r, int kj)
{
    static int count=0;
    if (index == r)
    {
    	int max=0;

    	for(int i=0;i<r;i++)
    		cout<<data[i]<<" ";
    	cout<<endl;
    	
    	for(int i=0;i<r;i++)
    	{
    		if(data[i]>max)
    			max=data[i];
    	}
    	if(max<=kj)
    		count++;

    }

    
    for (int i=start; i<=end ; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r, kj);
    }
    
    return count;
}


int printCombination(int arr[], int n, int r,int kj)
{
    // A temporary array to store all combination one by one
    int data[r];

    // Print all combination using temprary array 'data[]'
   return combinationUtil(arr, data, 0, n-1, 0, r, kj);
}

int main() 
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,k;
		cin>>n;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int max1=0;
		int f=0;
		for(int j=1;j<=n;j++)
		{

			f=printCombination(a, n, j, k);
		}
		cout<<f;
	}

}