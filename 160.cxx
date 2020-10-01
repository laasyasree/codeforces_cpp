/*
 * 160.cxx
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
#define fo(x,n) for(int x = 0; x < n; x++)

int main()
{	int n,i,sum=0,t=0,c=0;
	cin >> n;
	int a[n];
	fo(i,n){
		cin >> a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	for(i=n-1;t<=(sum/2);i--){
		t=t+a[i];
		c++;
	}
	cout << c;
			
	return 0;
}

