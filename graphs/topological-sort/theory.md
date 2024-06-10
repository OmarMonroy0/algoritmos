# TOPOLOGICAL SORT  (DIRECTED ACYCLIC GRAPH (DAG))

## WHAT IS?

- It is a linear ordering of the vertex in a DAG, in such way that a vertex u comes before vertex v if there exists a directed edge between  u and v, it is  u -> v

- It only works for DAGS.

- Every DAG has at least one TOPO SORT (Singly Linked List) possibly more than one topological sort and up to n! ( A DAG with n vertex and 0 edges).

## MAIN IDEA

This is basically using dfs and every time we touch for the first time a vertex we assign an index.

We can say it as enumerating the vertex are they are being visited using dfs.

