#define <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void insertionsort(vector<int> &v);

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

  insertionsort(v);

  for (int i=0; i<v.size(); i++) {
    cout << v[i] << endl;
  }
}

void insertionsort(vector<int> &v) {
  for (int i=1, s=v.size(); i<s; i++) {
    int j=i-1;
    int value=v[i];
    while (j>=0 && value<v[j]) {
      v[j+1]=v[j];
      j--;
    }
    v[j+1]=value;
  }
}
