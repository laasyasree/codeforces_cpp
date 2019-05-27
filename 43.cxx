/*
 * 43.cxx
 * 
 * Copyright 2019 hp <hp@hp-HP-ProBook-4530s>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <bits/stdc++.h>
using namespace std;

bool sortbysec(pair<string,int> &a,pair<string,int> &b){
	return(a.second <b.second);
}

int main()
{	long long int n,f=0,i,j;
	cin >> n;
	string k;
	vector< pair<string,int> > a;
	cin >> k;
	a.push_back(make_pair(k,1));
	for(i=1;i<n;i++){
		f=0;
		cin >> k;
		for(j=0;j<i;j++){
			if(k==a[j].first){
				a[j].second=a[j].second+1;
				f=1;
			}
		}
		if(f==0)
			a.push_back(make_pair(k,1));
	}
	sort(a.begin(),a.end(),sortbysec);
	cout << a[a.size()-1].first;
		
		
	
	return 0;
}

