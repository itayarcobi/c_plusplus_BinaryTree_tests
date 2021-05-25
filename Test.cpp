
#include "BinaryTree.hpp"
#include "doctest.h"
#include <string>
#include <algorithm>

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
using namespace ariel;

   BinaryTree<int> tree;

TEST_CASE("Test code"){
    CHECK_THROWS(tree.add_left(1,5));
    CHECK_THROWS(tree.add_right(1,12));
    tree.add_root(3);
    CHECK_NOTHROW(tree.add_left(3,5));
    CHECK_NOTHROW(tree.add_right(3,12));
    CHECK_NOTHROW(tree.add_left(5, 9).add_left(12,4));
    CHECK_THROWS(tree.add_left(10,3));
    CHECK_THROWS(tree.add_right(7,3));
    CHECK_NOTHROW(tree.add_root(8));
    //CHECK_THROWS(tree.add_right(8,3.5));
    CHECK_THROWS(tree.add_left(10,6).add_left(11,14));
    CHECK_NOTHROW(tree.add_left(3,5));
    CHECK_NOTHROW(tree.add_right(9,15));

    BinaryTree<int>::iterator_inorder it_inorder_end=tree.end_inorder();
    BinaryTree<int>::iterator_postorder it_postorder_end=tree.end_postorder();
    BinaryTree<int>::iterator_preorder it_preorder_end=tree.end_preorder();

      CHECK_EQ(it_inorder_end,nullptr);
      CHECK_EQ(it_postorder_end,nullptr);
      CHECK_EQ(it_preorder_end,nullptr);

    CHECK_NOTHROW(tree.add_root(23));
    CHECK_THROWS(tree.add_left(19,50));
    CHECK_THROWS(tree.add_right(50,3));
    CHECK_NOTHROW(tree.add_right(15,9));
    CHECK_NOTHROW(tree.add_left(23,2).add_left(2,34).add_left(34,7));
    CHECK_NOTHROW(tree.add_right(23,35).add_right(35,10).add_right(10,23));


};
                                                                                     

