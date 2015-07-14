#include<iostream>

using namespace std;
void maxSubArraySum(int a[], int size)
{
   int max_so_far = 0, max_ending_here = 0;
   int i;
   int e_pos;
   for(i = 0; i < size; i++)
   {
     max_ending_here = max_ending_here + a[i];
     if(max_ending_here < 0)
         max_ending_here = 0;
 
     /* Do not compare for all elements. Compare only   
        when  max_ending_here > 0 */
     else if (max_so_far < max_ending_here)
     {
         max_so_far = max_ending_here;
         e_pos = i;
         cout<<" "<<e_pos<<" ";
      }
   }
   int str;
   for(int i=e_pos;i>0;i--)
   {
     max_so_far-=a[i];
     if(max_so_far == 0)
       str=i;
   }
   cout<<"Buy on "<<str+1<<" sell on "<<e_pos+1;
}

int main()
{
  int sum, pos;
  int a[]={-2,-3,4,-1,-2,1,5,-3};
  int n=8;
  maxSubArraySum(a,n);
  
}
