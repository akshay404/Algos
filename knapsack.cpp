#include <bits/stdc++.h>

using namespace std;

struct attr
{
	int upvotes[1000]; 							//upvotes
	int cash; 								//Balance
	int inv[1000]; 								//Inventory of each item
	int price[1000]; 							//price of each item
	int id[1000];								//id of item
	int reco[1000];								//final recommended list

};									
												
void knapSack(attr a, int n, int i)				//2 attributes to be taken care of : upvotes and cash upper limit.
{
	float norm[1000];
	for(j=0;j<n;j++)
	{
		norm[j] = a[j].upvotes * a[j].price; 
	}


	for(int i=1;i<=n-1;i++) 					//sort according to the normalised value
	{
		for(int j=1;j<=n-1;j++)
		{
			if(norm[j] > norm[j+1])
			{
				temp=a[i].inv[j];       
				a[i].inv[j]=a[i].inv[j+1];
				a[i].inv[j+1]=temp;

				temp=a[i].price[j];       
				a[i].price[j]=a[i].price[j+1];
				a[i].price[j+1]=temp;

				temp=a[i].cash;       
				a[i].cash=a[i].cash;
				a[i].cash=temp;

				temp=a[i].upvotes;       
				a[i].upvotes=a[i].upvotes;
				a[i].upvotes=temp;

				temp=a[i].id;       
				a[i].id=a[i].id;
				a[i].id=temp;
			}	
		}	
	}
	int j=0,k=0;
	while(a[i].cash > 0)
	{
		if(a[i].price[j] <= a[i].cash)
		{
			a[i].cash= a[i].cash-a[i].price[j];
			a[i].reco[k] = a[i].id[j];
			k++;
			j++;									//Assuming one order of each item
		}
		else 
		{
			j++;
		}
	}
	cout<<endl;
	for(int p=0;p<k;p++)
	{
		cout<<a[i].reco[p]<<endl;
	}
}




}

int main()
{

	attr a[10000];

	cout<<"Number of Products :";
	cin>>a2;

	for(int i=0;i<a2;i++)
	{
		cout<<"Upvotes :";
		for(int j=0; j<a2;j++)
			cin>>a[i].id[j];
		
		cout<<"Upvotes :";
		for(int j=0; j<a2;j++)
			cin>>a[i].upvotes[j];
		
		cout<<"Balance :";
		cin>>a3;
		
		cout<<"Amount available :";
		for(int j=0;j<a2;j++)
			cin>>a[i].inv[j];
		
		cout<<"Cost :";
		for(int j=0; j<a2;j++)
			cin>>a[i].price[j];


		a[i].attr(a1,a2,a3,a4,a5)
	}
	for(int i=0;i<n;i++)
		knapsack(a,a2,i);



}
