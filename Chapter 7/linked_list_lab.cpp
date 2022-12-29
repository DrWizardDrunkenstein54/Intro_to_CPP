// Brian Da Cruz
// 12/5/22
// Linked List Lab
// This program inclues the creation and use of a linked list and its functions
#include <iostream>
using namespace std;

// Create the node struct
struct a_node {
    int node_data;
    a_node* next_node;

};

// Initialize linked list and last node, make variables global so they are accessible to scope of all linked list functions
a_node* linked_list = NULL;
a_node* last_node;


/** This function prints the node data of all nodes in the linked list
*/
void print_list()
{
    cout << "The current linked list's nodes: ";
    a_node* temp_node = linked_list;
    while (temp_node != NULL)
    {
        cout << temp_node->node_data << " ";
        temp_node = temp_node->next_node;
    }
    cout << endl;
}

/** This function adds a node to the linked list
@param new_node_data  the data of the new node to add to the linked list
*/
void add_node(int new_node_data) {
    if (linked_list == NULL) // if linked list is empty
    {
        linked_list = new a_node;
        linked_list->node_data = new_node_data;
        last_node = linked_list;
        linked_list->next_node = NULL;
    } else // if linked list already has nodes
    {
        a_node* temp_node = new a_node;
        temp_node->node_data = new_node_data;
        last_node->next_node = temp_node;
        temp_node->next_node = NULL;
    }
}


/** This function deletes the last node in the linked list
@return The value of the deleted node
*/
int delete_node()
{
    int deleted_node = 0;

    if (linked_list != NULL)
    {
        a_node* ptr = linked_list;
        deleted_node = ptr->node_data;
        linked_list = linked_list->next_node;
        delete ptr;
        return deleted_node;
    }

    return deleted_node;
}


int main()
{
    add_node(1);
    print_list();
    delete_node();
    print_list();
    return 0;
}
