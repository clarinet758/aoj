#include<bits/stdc++.h>
using namespace std;
/**
vector<int>ar(3);
for(auto&e:ar){
    scanf("%d",&e);
	}
sort(ar.begin(),ar.end())
int sum=accumulate(ar.begin(),ar.end(),0);
**/
int sum(const vector<vector<int>>& p, int t, int l, int b, int r) {
  return p[b][r] - p[b][l - 1] - p[t - 1][r] + p[t - 1][l - 1];
}
 
int frame(const vector<vector<int>>& p, int t, int l, int b, int r) {
  int result = sum(p, t, l, b, r);
  if(b - t > 1 && r - l > 1) result -= sum(p, t + 1, l + 1, b - 1, r - 1);
  return result;
}
 
int main() {
  int N;
  cin >> N;
  vector<vector<int>> p(N, vector<int>(N));
  for(auto& i: p) for(auto& j: i) cin >> j;
  for(auto& i: p) i.insert(begin(i), 0);
  p.insert(begin(p), vector<int>(N + 1, 0));
 
  for(int i = 1; i <= N; ++i) for(int j = 2; j <= N; ++j) p[i][j] += p[i][j - 1];
  for(int i = 2; i <= N; ++i) for(int j = 1; j <= N; ++j) p[i][j] += p[i - 1][j];
 
  int answer = -1000;
  for(int top = 1; top <= N; ++top) for(int bottom = top; bottom <= N; ++bottom) {
    int left = 1;
    for(int right = 1; right <= N; ++right) {
      int tlbr = frame(p, top, left, bottom, right);
      answer = max(answer, tlbr);
      int r = frame(p, top, right, bottom, right);
      int tlb = tlbr - r + frame(p, top, right, top, right) + frame(p, bottom, right, bottom, right);
      if(top == bottom) tlb -= frame(p, bottom, right, bottom, right);
      if(r > tlb) left = right;
    }
  }
  cout << answer << endl;
}

int main(){
    double pai=3.141592653589;
