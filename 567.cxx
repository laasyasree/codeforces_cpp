/*
 * 567.cxx
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
{	int n,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	cout << a[1]-a[0] << " " << a[n-1]-a[0] << endl;
	for(i=1;i<n-1;i++){
		if((a[i]-a[i-1])<(a[i+1]-a[i]))
			cout << a[i]-a[i-1] << " ";
		else
			cout << a[i+1]-a[i] << " ";
		if((a[i]-a[0])<(a[n-1]-a[i]))
			cout << a[n-1]-a[i] << endl;
		else
			cout << a[i]-a[0] << endl;
	}
	cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << endl;
		
		
	
	return 0;
}

