#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>

using namespace std;

int main(){
srand(time(NULL));
int arr[6];
for(int i=0;i<6;i++)
arr[i]= rand() % 49 + 1;
for(int i=0;i<6;i++){
  for(int j=0;j<6;j++){
    if(arr[i]==arr[j] && i!=j)
      arr[i]= rand()% 49 + 1;
  }
}
int temp;
for(int i=0;i<6;i++)
	{		
		for(int j=i+1;j<6;j++)
		{
			if(arr[i]>arr[j])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
list<int> lst;
for(int i=0;i<6;i++)
    lst.push_back(arr[i]);
list<int>::iterator it =lst.begin();
for(int i=0;i<lst.size();i++){
cout<<*it<<" ";
it++;}
cout<<endl;
return 0;
}