#include <iostream>
#include <string>
#include <stdlib.h>
#include "double.hpp"

int main() {
  // EX 21
  cout << "EX -- 21" << endl;
  double_list list1, list2; //defining two double lists
  int team_num = 6; // team length
  int k_changes  = 2; // number of changes
  
  for(int i = 1; i <= team_num; i++) { // initializing lists with some values(values may be random)
	list1.createnode(i*10);
	list2.createnode(i);
  }
  
  cout <<"EX -- 21 : start teams"<<endl;// displaying the teams before changes
  list1.display();
  cout << endl;
  list2.display();
  
  // changing lists (task statement says nothing about the way of changing teams)
  for(int i = 1; i <= k_changes;i++) {// making k changes in list 1
	list1.createnode(list2.get_head()->data);
	list2.delete_first();
  }
  for(int i = 1; i <= k_changes;i++) {// making k changes in list 2
	list2.createnode(list1.get_head()->data);
	list1.delete_first();
  }
  
  // displaying results
  cout <<endl << "After changes:"<<endl;
  list1.display();
  cout << endl;
  list2.display();
  return 0;
}
