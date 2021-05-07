#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

class UnionFind{
    private: vi p, rank;
    public:
        UnionFind(int N) {
            rank.assign(N, 0);
            p.assign(N,0);
            for (int i = 0; i < N; i++) p[i] = i;
        } 
        int findSet(int i) {
            return (p[i] == i) ? i : (p[i] = findSet(p[i]));
        }
        bool isSameSet(int i, int j) {
            return findSet(i) == findSet(j);
        }
        void unionSet(int i, int j) {
            if (!isSameSet(i, j)) {
                int x = findSet(i), y = findSet(j);
                if (rank[x] > rank[y]) {
                    p[y] = x;
                } else if (rank[y] > rank[x]){
                    p[x] = y;
                } else if (rank[x] == rank[y]) {
                    p[x] = y;
                    rank[x]++;
                }
            }
        }
};
int main() {

    return 0;
}
