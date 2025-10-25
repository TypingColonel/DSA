#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include <queue>
#include <string>

typedef bool Directed;
typedef int Vertex;
typedef int Source;
typedef int Destination;
typedef std::unordered_map<Vertex, std::vector<Vertex>* > AdjacencyList;
typedef std::unordered_map<Vertex, bool> VisitedNodes;

// class ModifiedVector: public std::vector<Vertex> {
//   public:
//     bool is_available(Vertex) {
//       for (int i = 0; i < this->size(); i ++) {
//         // if ()
//       }
//     }
// };

class Graph {
  private:
    AdjacencyList al;
    Directed is_directed;
  public:
    Graph(Directed yes) {
      this->is_directed = yes;
    }

    void add_vertex(Vertex v) {
      std::vector<Vertex>* ls = new std::vector<Vertex>;
      this->al[v] = ls;
    }

    void add_edge(Vertex source, Vertex destination) {
      if (this->al.count(source) == 0) {
        this->add_vertex(source);
      }

      if (!this->is_directed) {
        if (this->al.count(destination) == 0) {
          this->add_vertex(destination);
        }

        this->al[destination]->push_back(source);
      }

      this->al[source]->push_back(destination);
    }

    void remove_edge(Vertex source, Vertex destination) {
      if (this->al.count(source) == 0) return;
    }

    void breath_first_traversal() {
      std::vector<Vertex> keys;
      
      for (auto it = this->al.begin(); it != al.end(); ++it) {
        keys.push_back(it->first);
      }    

      if (keys.size() == 0) {
        std::cout << "The graph contains 0 vertices\n";
      }

      VisitedNodes vn; 

      std::queue<Vertex> q;

      q.push(keys[0]);

      std::vector<Vertex> bfs;

      Vertex c;

      while (!q.empty()) {
        c = q.front();
        q.pop();
        bfs.push_back(c);

        for (auto neighbour: *(this->al[c])) {
          if (!vn[neighbour]) {
            vn[neighbour] = true;
            q.push(neighbour);
          }          
        }
      }

      std::cout << "\n";

      for (auto i: bfs) {
        std::cout << std::to_string(i) << "\t";
      }

      std::cout << "\n";
    }
};
