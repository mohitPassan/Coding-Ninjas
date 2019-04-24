/*
Print the following pattern for the given number of rows.
Pattern for N = 3
333
233
123
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
55555
45555
34555
23455
12345
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n,t;
    cin >> n;
    t=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << (t+j>=n?n:t+j);
        }
        cout << endl;
        t--;
    }
}