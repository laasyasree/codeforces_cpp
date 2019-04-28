/*
 * 431.cxx
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
{	long long int a,b,c=0,e,d,i;
	cin >> a >> b >> e >> d;
	string s;
	cin >> s;
	for(i=0;i<s.length();i++){
		if(s[i]=='1')
			c=c+a;
		else if(s[i]=='2')
			c=c+b;
		else if(s[i]=='3')
			c=c+e;
		else if(s[i]=='4')
			c=c+d;
	}
	cout << c;
	
	
	return 0;
}

