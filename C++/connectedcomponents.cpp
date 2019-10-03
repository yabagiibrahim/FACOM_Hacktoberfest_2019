// by @shubhamdamani (https://github.com/shubhamdamani)                             
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> v[101];
bool vis[101];

void dfs(int src)
{
	vis[src]=true;
	for(int i=0;i<v[src].size();i++)
	{
		if(!vis[src][i])
		{
			dfs(v[src][i]);
		}
	}

}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
   int cnt=0;
   for(int i=0;i<n;i++)
   {
   	int a,b;
   	cin>>a>>b;
   	v[a].push_back(b);
   	v[b].push_back(a);

   }
   for(int i=1;i<101;i++)
   {
   	if(!vis[i])
   	{
   		dfs(i);
   		cnt++;
   	}
   }
   if(cnt==1)
   {
   	cout<<"connected graph";
   }else{
   	cout<<"not connected";
   }
}
