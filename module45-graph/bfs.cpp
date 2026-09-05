#include <iostream>
#include <queue>
#include <list>
#include <vector>
using namespace std;
class Graph{
    int V;
    list <int>* l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
    void addedge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int u=0; u<V; u++){
            list<int> neighbours = l[u];
            cout << u <<endl;
            for(int v: neighbours){
                cout<< v <<" ";
            }
            cout<<endl;
        }
    }

            void bfs(){
                queue<int> q;
                vector<bool> vis(V,false);
                q.push(0);
                vis[0]= true;
                while(q.size()>0){
                    int u = q.front();
                    q.pop();
                    cout<<u<<" ";
                    list<int> neighbours = l[u];
                    for(int v: neighbours){
                        if(!vis[v]){
                            vis[v] = true;
                            q.push(v);
                        }
                    }
                }

        cout<<endl;
    }
};
int main(){
    Graph graph(5);
    graph.addedge(0,1);
    graph.addedge(1,2);
    graph.addedge(1,2);
    graph.addedge(2,4);
    graph.addedge(3,4);
    graph.bfs();
    return 0;
}