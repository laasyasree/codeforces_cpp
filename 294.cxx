/*
 * 294.cxx
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
{	int n,m,i,p,q;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	cin >> m;
	for(i=0;i<m;i++){
		cin >>p >>q;
		if(p>=2){
			a[p-2]=a[p-2]+q-1;
			a[p]=a[p]+a[p-1]-q;
			a[p-1]=0;
		}
		else if(p==1){
			a[p]=a[p]+a[p-1]-q;
			a[p-1]=0;
		}
		else if(p==n){
			a[p-2]=a[p-2]+q-1;
			a[p-1]=0;
		}
	}
	for(i=0;i<n;i++)
		cout << a[i] << endl;
			
	
	
	return 0;
}

