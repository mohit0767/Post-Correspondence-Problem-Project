#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> topStr, bottomStr;
int n;
bool found = false;
void solve(string top, string bottom, string seq, int depth)
{
if(depth > 10 || found)
return;
if(top == bottom && seq != "")
{
cout << "Solution Found!\n";
cout << "Sequence: " << seq << endl;
cout << "String: " << top << endl;
found = true;
return;
}
for(int i = 0; i < n; i++)
{
solve(top + topStr[i], bottom + bottomStr[i], seq + to_string(i+1) + " ",
depth + 1);
}
}
int main()
{
cout << "Post Correspondence Problem Simulator\n";
cout << "Enter number of pairs: ";
cin >> n;
topStr.resize(n);
bottomStr.resize(n);
cout << "Enter top strings:\n";
for(int i=0;i<n;i++)
cin >> topStr[i];
cout << "Enter bottom strings:\n";
for(int i=0;i<n;i++)
cin >> bottomStr[i];
solve("", "", "", 0);
if(!found)
cout << "No solution found within depth limit.\n";
return 0;
}
