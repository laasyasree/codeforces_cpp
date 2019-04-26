/*
 * 263.cxx
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
{	int i,j,b,c,d,e;
	int a[5][5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				b=i;
				c=j;
			}
		}
	}
	e = abs(b-2);
	d = abs(c-2);
	cout << e+d;
			
	
	return 0;
}

