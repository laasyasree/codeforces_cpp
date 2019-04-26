/*
 * 734.cxx
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


#include <iostream>
using namespace std;

int main()
{	int n,i,c=0,d=0;
	cin >> n;
	char s[n];
	for(i=0;i<n;i++)
		cin >> s[i];
	for(i=0;i<n;i++){
		if(s[i]=='A'){
			c=c+1;
		}
		else{
			d=d+1;
		}
	}
	if(c>d)
		cout << "Anton";
	else if(c==d)
		cout << "Friendship";
	else
		cout << "Danik";
	
	return 0;
}

