// create a list container to use remove() (to get number appearing thrice)
#include<iostream>
#include<list>
#include<set>
#include<vector>
using namespace std;

set<int> thrice(vector<int>& v)
{
  set<int> set;
  list<int> list;
  int vsize=v.size();
  // list is inserted similar to given vector
  while(!v.empty()){
	int b=v.back();
    list.push_front(b);
    v.pop_back();
  }
  int size;			// to match
  int front;		// to store front element of list
 while(!list.empty()){
   front=list.front();
   list.remove(front);
   size=vsize-list.size();
   if(size==3)
   {
     // insert it to set
     set.insert(front);
   }
   vsize-=size;
 }
  return set;
}

int main()
{
	vector<int> vector={1, 1, 1, 4, 13, 17, -12, 33, 17, 82, 17, 61};
	set<int> s;
	s=thrice(vector);
	for(auto iter=s.begin();iter!=s.end();iter++)
	{
		cout<<*iter<<" ";
	}
}



