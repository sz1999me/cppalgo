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

int buy_sell(vector<int> &v);

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

  cout << buy_sell(v);
}

int buy_sell(vector<int> &v) {
  int low=0, buy=0, sell=0, diff=0;

  for (int i=0, s= v.size(); i<s; i++) {
    if (v[i]<v[low]) {
      low=i;
      continue;
    }

    if (v[i]-v[low]>diff) {
      buy = low;
      diff = v[i]-v[low];
      sell = i;
    }
  }

  return v[sell]-v[buy];
}
