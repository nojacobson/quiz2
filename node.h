/** @file node.h */
/*************************************************************************
      This file is borrowed heavily from Main/Savitch "Data Structures and
      Other Object Using C++," Chapter 5. It features a node class that 
      can be used in the construction of linked lists.
                John Dolan  		March 2009
*************************************************************************/

#ifndef NODE_H
#define NODE_H
#include "course.h"
/** @class node
  * @brief Everything needed for a node class with functions
*/
class node{
    public:
	typedef course value_type;
	// Universal constructor
		/** @brief Constructor
		  * Contains default parameters
   		  * @return node object with default, if not supplied, parameters
		*/
        node(value_type d = value_type(), node *l = NULL)
		{data_field = d;  link_field = l;}

    // Mutator functions
    /** @brief set_data
      * Sets the data of the node to the supplied parameter
      * @param d - a value_type object
      * @return void
    */
	void set_data(value_type d)
		{data_field = d;}
	
	/** @brief set_link
	  * Sets the link to the next node
	  * @param *l - a node that will become linked
	  * @return void
	*/	
	void set_link(node *l)
		{link_field = l;}

        // Accessor functions
        value_type data() const 
		{return data_field;}
        node* link() 
		{return link_field;}
	const node* link() const
		{return link_field;}

    private:
	value_type data_field;
	node* link_field;
};

#endif
