/*
 * 381.cxx
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
{	int n,s=0,c=0,i,l=0,j;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	i=0;
	j=n-1;
	while(l<n){
		if(l%2==0){
			if(a[i]>a[j]){
				c=c+a[i];
				i++;
			}
			else{
				c=c+a[j];
				j--;
			}
		}
		else{
			if(a[i]>a[j]){
				s=s+a[i];
				i++;
			}
			else{
				s=s+a[j];
				j--;
			}
		}
		l++;
	}
				
	cout << c << " " << s ;
		
		
	
	return 0;
}

