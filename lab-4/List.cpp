#include <iostream> // cout, endl
#include "List.h"

namespace CS170
{
  namespace ListLab
  {
    namespace 
    {
      struct Node* MakeNode(int value)
      {
        struct Node *pNode = new Node; // Allocate memory
        pNode->number = value;         // Set number
        pNode->next = 0;               // Set next (no next yet)

        return pNode;
      }
    }

    void PrintList(struct Node *list)
    {
      while (list)
      {
        std::cout << list->number << "   ";
        list = list->next;
      }
      std::cout << std::endl;
    }

    int Count(struct Node *list)
    {
      int count = 0; // Number of nodes in the list
      
      while (list)
      {
        count++;
        list = list->next;
      }
      
      return count;
    }

  } // namespace ListLab
} // namespace CS170
