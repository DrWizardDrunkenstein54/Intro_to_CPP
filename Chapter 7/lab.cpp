//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//struct LinkedList
//{
//
//    int data;
//    LinkedList* next;
//};
//
//void insert_node(int data, LinkedList* list_ptr)
//{
//
//    while (list_ptr->next != nullptr)
//    {
//        list_ptr = list_ptr->next;
//    }
//    auto new_list = new LinkedList();
//    new_list->data = data;
//    list_ptr->next = new_list;
//}
//
//int delete_node(LinkedList* &to_delete)
//{
//    LinkedList head = *to_delete;
//    to_delete = to_delete->next;
//    return head.data;
//}
//
//void print(LinkedList* to_print)
//{
//
//    while(to_print != nullptr)
//    {
//        cout << to_print->data << endl;
//        to_print = to_print->next;
//    }
//}
//
//int main ()
//{
//    auto list_ptr = new LinkedList();
//    list_ptr->data = 0;
//    insert_node(1, list_ptr);
//    insert_node(2, list_ptr);
//    insert_node(3, list_ptr);
//    cout << delete_node(list_ptr) << endl;
//    cout << endl;
//    print(list_ptr);
//    return 0;
//
//}
