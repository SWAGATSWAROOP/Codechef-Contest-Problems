// Problem
// Chef is given a number in form of its binary representation 
// S
// S, having length 
// N
// N.
// Determine if the number can be represented as a sum of exactly three non-negative powers of
// 2
// 2. Please refer to samples for further explanation.

// Note that 
// S
// S will NOT contain leading zeros.

// Input Format
// The first line of input will contain a single integer 
// T
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer 
// N
// N, the length of the binary string.
// The next line contains the string 
// S
// S, the binary representation of a number.
// Output Format
// For each test case, output YES if the number can be represented as sum of exactly three powers of 
// 2
// 2.
// You can print each character in uppercase or lowercase. For example YES, yes, Yes, and yES are all considered the same.

// Constraints
// 1
// ≤
// T
// ≤
// 1000
// 1≤T≤1000
// 1
// ≤
// N
// ≤
// 2
// ⋅
// 1
// 0
// 5
// 1≤N≤2⋅10 
// 5
 
// S
// S consists of 
// 0
// 0 and 
// 1
// 1 only, and has no leading zeros.
// The sum of 
// N
// N over all test cases won't exceed 
// 2
// ⋅
// 1
// 0
// 5
// 2⋅10 
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 1
// 1
// 4
// 1001
// 5
// 11001
// 7
// 1101101
// NO
// YES
// YES
// NO
// Explanation:
// Test case 
// 1
// 1: It is not possible to represent the given number as a sum of exactly three powers of
// 2
// 2.
// Test case 
// 2
// 2: The given string 
// 1001
// 1001 corresponds to the number 
// 9
// 9. We can represent 
// 9
// 9 as a sum of exactly three powers of 
// 2
// 2 as 
// 9
// =
// 2
// 2
// +
// 2
// 2
// +
// 2
// 0
// 9=2 
// 2
//  +2 
// 2
//  +2 
// 0
//  .

// Test case 
// 3
// 3: The given string 
// 11001
// 11001 corresponds to the number 
// 25
// 25. We can represent 
// 25
// 25 as a sum of exactly three powers of 
// 2
// 2 as 
// 25
// =
// 2
// 4
// +
// 2
// 3
// +
// 2
// 0
// 25=2 
// 4
//  +2 
// 3
//  +2 
// 0
//  .

// Test case 
// 4
// 4: It is not possible to represent the given number as a sum of exactly three powers of
// 2
// 2

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int y;
	    cin>>y;
	    string x;
	    cin>>x;
	    int c = count(x.begin(),x.end(),'1');
	    if(y <= 2 && c!=2){
	        cout<<"NO \n";
	        continue;
	    }
	    if(c <= 3){
	        cout << "YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}