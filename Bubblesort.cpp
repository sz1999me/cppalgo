#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void bubblesort(vector<int> &v);

int main() {
  vector<int> v;
  v.push_back(100);
  v.push_back(113);
  v.push_back(110);
  v.push_back(85);
  v.push_back(105);
  v.push_back(102);
  v.push_back(86);
  v.push_back(63);
  v.push_back(81);
  v.push_back(101);
  v.push_back(94);
  v.push_back(106);
  v.push_back(101);
  v.push_back(79);
  v.push_back(94);
  v.push_back(90);
  v.push_back(97);
  
  bubblesort(v);
  
  for (int i=0; i<v.size(); i++) {
    cout << v[i] << endl;
  }
}

void bubblesort(vector<int> &v) {
  for (int i=0, s=v.size(); i<s; i++) {
    for (int j=v.size()-1; j>i;j--) {
      if (v[j-1] > v[j]) {
        int t=v[j-1];
        v[j-1]=v[j];
        v[j]=t;
      }
    }
  }
}