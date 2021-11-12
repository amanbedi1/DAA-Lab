// author: Amanpreet Singh Bedi 

// Checking bipartitness of graph using bfs

#include<bits/stdc++.h>

using namespace std;

bool bfs(vector < int > & color, vector < vector < int >> & adjacency_matrix) {

  int n = adjacency_matrix.size();

  queue < int > q;

  q.push(0);

  color[0] = 0;

  while (!q.empty()) {

    int v = q.front();

    q.pop();

    for (int i = 0; i < n; ++i) {

      if (adjacency_matrix[v][i]) {

        if (color[i] == -1) {

          color[i] = 1 - color[v];
          q.push(i);
        } else if (color[i] == color[v]) {
          return false;
        }
      }
    }
  }

  return true;

}

void solve() {

  int n;

  cin >> n;

  vector < vector < int >> adjacency_matrix(n, vector < int > (n));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> adjacency_matrix[i][j];
    }
  }

  vector < int > color(n, -1);

  if (bfs(color, adjacency_matrix)) {
    cout << "Bipartite\n";
  } else {
    cout << "Non Bipartite\n";
  }

}

int main() {

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int test_cases;

  cin >> test_cases;

  while (test_cases--) {
    solve();
  }
}