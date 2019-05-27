/*
 * 469.cxx
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
{	int n,l,s=0,g,t,i;
	cin >> n;
	set<int> a;
	cin >> l;
	for(i=0;i<l;i++){
		cin >> t;
		a.insert(t);
	}
	cin >> g;
	for(i=0;i<g;i++){
		cin >> t;
		a.insert(t);
	}
	for(auto i=a.begin();i!=a.end();i++){
		s=s+*i;
	}
	if(s==(n*(n+1)/2))
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";

	
	return 0;
}

