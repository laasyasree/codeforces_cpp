/*
 * 69.cxx
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
{	long long int n,i,temp,s=0,temp1,temp2,a=0,b=0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> temp >> temp1 >> temp2;
		s=s+temp;
		a=a+temp1;
		b=b+temp2;
	}
	if(s==0 && a==0 && b==0)
		cout << "YES";
	else 
		cout << "NO";
	
	return 0;
}

