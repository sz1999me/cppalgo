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

void mergesort(vector<int> &v);
void ms(vector<int> &v, int left, int right);

int main() {
  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(1);
  v.push_back(9);
  v.push_back(7);
  v.push_back(2);
  
  mergesort(v);
  
  for (int i=0, s=v.size(); i<s; i++) {
    cout << v[i] << ",";
  }
}

void mergesort(vector<int> &v) {
  ms(v, 0, v.size()-1);
}

void ms(vector<int> &v, int left, int right) {
  if (right-left>=1) {
    ms(v, left, (left+right)/2);
    ms(v, (left+right)/2+1, right);
  } else {
    return;
  }
  
  int i=left, j=(right+left)/2+1, m=j, k=0;
  
  vector<int> r(right-left+1);
  
  while (i<m && j<=right) {
    if (v[i]<v[j]) {
      r[k]=v[i];
      i++;
    } else {
      r[k]=v[j];
      j++;
    }
    k++;
  }
  
  while (i<m) {
    r[k]=v[i];
    i++;
    k++;
  }
  
  while (j<=right) {
    r[k]=v[j];
    j++;
    k++;
  }
  
  for (int i=0, j=left; j<=right; i++, j++) {
    v[j] = r[i];
  }
}