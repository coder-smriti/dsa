#include <iostream> //undirected graph
#include <vector>
#include <list>
using namespace std;
class Graph{
    int V;
    list<int>* l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V]; 
    }
    void addedge (int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int u=0; u<V; u++){
            list<int> neighbours = l[u];
            cout << u << ":";
            for(int v: neighbours){
                cout<< v << "";
            }
        }
            cout << endl;
        }
        void dfshelper(int u, vector<bool> &vis){
        vis[u] = true;
        cout << u << " ";
        list<int> neighbours = l[u];
        for(int v : neighbours){
            if(!vis[v]){
          dfshelper(v,vis);
            }
        }
        }
        void dfs() {
            vector<bool> vis(V, false);
            dfshelper(0,vis);
            cout << endl;
        }
        bool pathhelper(int src, int des, vector<bool> &vis){
            if(src==des){
                return true;
            }
            vis[src]=true;
            list<int> neighbours = l[src];
            for(int v:neighbours){
                if(!vis[v]){
            if (pathhelper(v,des,vis)){
                return true;
            }
                }
            }
            return false;
        }
            bool haspath(int src, int des){
            vector<bool> vis(V,false);
            return pathhelper(src,des,vis);

            }

};
int main(){
    Graph graph(7);
    graph.addedge(0,1);
    graph.addedge(0,2);
    graph.addedge(1,2);
    graph.addedge(1,3);
    graph.addedge(2,4);
    graph.addedge(3,4);
    graph.addedge(3,5);
    graph.addedge(4,5);
    //graph.addedge(5,6);
    cout<<graph.haspath(5,6)<<endl;
    return 0;
}
