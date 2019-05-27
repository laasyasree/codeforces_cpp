/*
 * 807.cxx
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

int main()
{	int n,d,b,i,c=0,k=0;
	cin >>n;
	vector< pair <int,int> > a;
	for(i=0;i<n;i++){
		cin >> d >> b;
		a.push_back(make_pair(d,b));
		if(d==b)
			c++;
	}
	if(c!=n){
		cout << "rated";
		return 0;
	}
	for(auto i=0;i<n-1;i++){
		if((a[i].first)>=(a[i+1].first)){
			k++;
		}
	}
	if(k==n-1)
		cout << "maybe";
	else
		cout << "unrated";
		
	
	return 0;
}

