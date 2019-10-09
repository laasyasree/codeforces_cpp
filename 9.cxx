/*
 * 9.cxx
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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{	int n,k,i;
	cin >> n >> k;
	if(n>k)
		i=7-n;
	else
		i=7-k;
	string a[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
	cout << a[i-1];
	
	return 0;
}

