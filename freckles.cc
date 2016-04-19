/* Made with LOVE*/
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int MAXN = 1011;

const double eps = 1e-7;

struct edge {
    int u, v;
    double w;
    
    bool operator < (edge o) const {
        if( fabs(o.w - w) < eps )
            return pair<int, int>(u, v) < pair<int, int>(o.u, o.v);
        return w < o.w;
    }
};

double x[MAXN], y[MAXN];
int p[MAXN];
vector<edge> edgeList;

double sqr(double x) {
    return x * x;
}

int find(int u) {
    return p[u] == u ? u : find(p[u]);
}

void merge(int u, int v) {
    int pu = find(u), pv = find(v);
    p[pu] = pv;
}

int main( void ) {
    int TA; scanf("%d", &TA);
    
    while( TA-- ) {
        int n; scanf("%d", &n);
        
        edgeList.clear();
        for(int i = 0; i < n; i++) {
            scanf("%lf %lf", x + i, y + i);
            for(int j = 0; j < i; j++)
                edgeList.push_back((edge) {i, j, sqrt(sqr(x[i] - x[j]) + sqr(y[i] - y[j]))});
        }
        
        sort(edgeList.begin(), edgeList.end());
        
        for(int i = 0; i < n; i++) p[i] = i;
        
        double ans = 0.0;
        for(int i = 0; i < edgeList.size(); i++) {
            int u = edgeList[i].u, v = edgeList[i].v;
            
            if( find(u) == find(v) ) continue;
            
            merge(u, v);
            
            ans += edgeList[i].w;
        }
        
        printf("%.2f\n", ans);
        
        if( TA ) puts("");
    }
    return 0;
}
