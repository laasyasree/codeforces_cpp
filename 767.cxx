/*
 * 767.cxx
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
{	long long int n,i,j=0,t=0,k,s;
	cin >> n;
	int a[n],b[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	s=n;
	for(i=t;i<s;i++){
		if(a[i]!=n){
			b[j]=a[i];
			j++;
		}
		else{
			for(k=0;k<j;k++){
			cout << n << " " << b[k] << endl;
			n=n-j-1;
			}
		}
		t=j+1;
	}
			
		
	
	return 0;
}

