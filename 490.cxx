/*
 * 490.cxx
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
{	long long int n,i,p=0,q=0,r=0,t,b,c,d,j;
	cin >>n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==1)
			p++;
		else if(a[i]==2)
			q++;
		else 
			r++;
	}
	t=min(min(p,q),r);
	cout << t << endl;
	for(i=0;i<t;i++){
		int w=0,e=0,f=0;
		for(j=0;j<n;j++){
			if(a[j]==1){
				w++;
				if(w==i+1)
					b=j;
			}
			else if(a[j]==2){
				e++;
				if(e==i+1)
				c=j;
			}
			else{
				f++;
				if(f==i+1)
				d=j;
			}
		}
		cout << b+1 << " " << c+1 << " " << d+1 << endl;
	}
		
		
	
	return 0;
}

