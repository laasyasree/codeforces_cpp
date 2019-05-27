/*
 * 218.cxx
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
{	int n,m,i,c=0;
	cin >> n >> m;
	int a[2*n+1];
	for(i=0;i<(2*n)+1;i++)
		cin >> a[i];
	for(i=0;i<2*n;i++){
		if(c<m){
		if(a[i+1]>a[i]+1 && a[i+2]+1!=a[i+1]){
			a[i+1]=a[i+1]-1;
			c++;
		}
		}
	}
	for(i=0;i<2*n+1;i++)
		cout << a[i] << " ";		
	
	return 0;
}

