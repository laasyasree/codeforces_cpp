/*
 * 404.cxx
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
{	long long int n,i,j,c=0,d=0;
	char t,b;
	cin >> n;
	char a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin >> a[i][j];
	t=a[0][0];b=a[0][1];
	if(t==b){
		cout << "NO";
		return 0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j || i+j==(n-1)){
				if(a[i][j]==t){
					c++;
				}
			}
			else{
				if(a[i][j]==b){
					d++;
				}}}}
	if(c==(2*n)-1 && d==(n-1)*(n-1))
		cout << "YES";
	else
		cout << "NO";
	
	
	return 0;
}

