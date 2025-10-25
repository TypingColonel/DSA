#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>

typedef bool Directed;
typedef int Vertex;
typedef int Source;
typedef int Destination;
typedef std::unordered_map<Vertex, std::vector<Vertex>* > AdjacencyList;

class ModifiedVector: public std::vector<Vertex> {
  public:
    bool is_available(Vertex) {
      for (int i = 0; i < this->size(); i ++) {
        if ()
      }
    }
};

class Graph {
  private:
    AdjacencyList al;
    Directed is_directed;
  public:
    Graph(Directed yes) {
      this->is_directed = yes;
    }

    void add_vertex(Vertex v) {
      std::vector<Vertex>* ls;
      this->al[v] = ls;
    }

    void add_edge(Vertex source, Vertex destination) {
      if (this->al.count(source) == 0) {
        this->add_vertex(source);
      }

      this->al[source]->push_back(destination);
    }

    void remove_edge(Vertex source, Vertex destination) {
      if (this->al.count(source) == 0) return;

      if (this->al[source].)
    }

};