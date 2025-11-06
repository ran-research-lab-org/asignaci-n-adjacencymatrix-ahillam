#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0,9);
  G.addEdge(4,2);
  G.addEdge(0,8);
  G.addEdge(3,7);
  G.addEdge(6,7);
  G.addEdge(3,1);
  G.addEdge(8,2);
  G.addEdge(4,3);
  G.addEdge(2,9);
  G.addEdge(5,2);
  G.addEdge(3,8);
  G.addEdge(7,1);

  G.print();
  cout << endl;
  cout << G.numEdges() << endl;
  int influencer = 0;
  cout << "Input vertex to check: ";
  cin >> influencer;

  cout << "Number of edges: " << G.inDegree(influencer) << endl;

  if (G.isInfluencer(influencer)==true) {cout << "Vertex " << influencer << " has the highest inDegree." << endl;}
  else {cout << "Vertex " << influencer << " does not have the highest inDegree." << endl;}



}
