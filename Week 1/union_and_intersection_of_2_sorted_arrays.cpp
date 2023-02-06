#include<bits/stdc++.h>
using namespace std;

void find_union(int a[] , int n , int b[] , int m)
{
	int i = 0 , j = 0 ;
	
	cout << "UNION : ";
	
	while(i < n && j < m)
	{
		if(a[i] == b[j])
		{
			cout << a[i] << " ";
			i++;
			j++;
		}
		else if(a[i] < b[j])
		{
			cout << a[i] << " ";
			i++;
		}
		else
		{
			cout << b[j] << " ";
			j++; 
		}
	}
	
	
	while(i  < n) cout << a[i++] << " ";
	while(j  < m) cout << b[j++] << " ";
	
	cout << endl;
}
void find_intersection(int a[] , int n , int b[] , int m)
{
	int i = 0 , j = 0 ;
	
	cout << "INTERSECTION : ";
	
	while(i < n && j < m)
	{
		if(a[i] == b[j])
		{
			cout << a[i] << " ";
			i++;
			j++;
		}
		else if(a[i] < b[j])
		{
			i++;
		}
		else
		{
			j++; 
		}
	}
	
	
	cout << endl;
}





int main()
{
	int a[] = {1,3,4,5,6,7,8,9};
	int b[] = {2,3,4,5,6,7,10,12,23,24};
	
	find_union(a,8,b,10);
	find_intersection(a,8,b,10);
	
	return 0;
}
