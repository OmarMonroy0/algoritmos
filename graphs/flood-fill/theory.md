# FLOOD FILL 


### DEFINITION 

This is an algorithm used to color connected components in one color,its main application 
is to color areas in an image(2-D grid) or  a map.

It is used to determine continuous areas of pixeles, it is used a lot for coloring images
by pixeling areas

### HOW IT WORKS?

It begins in an  initial pixel and expands to the neighbors pixeles (using dfs or BFS) that share a common characteritic (for example, same color) untill the moment it can not expand any more.


### ALGORITHM

1. It starts in an initial node.
2. If the cell sent does not have the color we are looking to change, it does nothing. It it has the color go to step 3.
3. Change the color of the cell sent.
4. Call recursively the function for each node (up,down,left,right,crossing).

## TIPS:

- This is like finding connected components in a 2-D grid.
- Then we give a diferent color to each connected component.