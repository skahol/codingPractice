#include<iostream>
#include<stack>
using  namespace std;

int balancedString(string s)
{
  stack<char> stack;
  // now traverse through expression 
  // if starting bracket comes push it to stack
  int i;
  for( i=0; i<s.size(); i++ )
  {
    // push char in stack for opening brackets
    if( s.at(i)=='{' || s.at(i)=='(' )
    {
      stack.push(s.at(i));
    }
    // checking for closing brackets to match correctly or not
    else if(s.at(i)=='}' || s.at(i)==')')
    {
      // pop stack , check poped element to match with closing brace  
      // if matched , return -1
      // else unbalanced(returning corresponding index number of string)
      // very important condition to check stack empty or not
      if(stack.empty()==1)
        return i;
      
      char currElmt=s.at(i);		
      char pop = stack.top();
      stack.pop();		//	return void so not to store in a variable otherwise
      					//error: void value not ignored as it ought to be char pop = stack.pop();
      // check for incorrect pair
      if( pop=='{' && currElmt == ')' )
        return i;
      else if( pop=='(' && currElmt=='}')
        return i;
    }
  }
  if(stack.empty()==1)
  return -1;
  
  // eg: if(){   :  case remained must retrun index of'{' 
  else
    return i;
}
int main()
{
	string str;
	cin>>str;
	cout<<balancedString(str);
	return 0;
}
