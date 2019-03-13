#include "cs163_graph.h"
using namespace std;

/* Implement these three functions for this lab */
table::table(int size)
{
      //Allocate the adjacency list and set each
      //head pointer to NULL
      list_size = size;
      adjacency_list = new vertex [size];
      for(int i = 0;i<size;++i)
          adjacency_list[i].head = NULL;



}

//Store the vertex at this location.
int table::insert_vertex(const journal_entry & to_add)
{
        //Place your code here
    if(!adjacency_list[count].entry){
        journal_entry * data = new journal_entry;
        data->copy_entry(to_add);

        adjacency_list[count].entry = data;

        ++count;
    }

    else if(count >= 5)
        cout << "Full Adjacency List" << endl << endl;

    count = 0;


}

//Attach an edge to a vertex
int table::insert_edge(char * current_vertex, char * to_attach)
{
       //Attach this vertices edge to the specified vertex
}

//Display all vertices adjacent to the one specified
int table::display_adjacent(char * key_value)
{

}

//Find a location in the graph
//Consider this a helper function foro all of the other member functions!
int table::find_location(char * key_value)
{
      //return the location of this particular key value 
    while(count < list_size){

        char * temp = new char[100];

        temp = adjacency_list[count].entry;

        if(temp == key_value)
            cout << adjacency_list[count].entry << endl;
    }

}


