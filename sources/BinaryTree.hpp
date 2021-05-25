#pragma once
#include <iostream>

namespace ariel{
template <typename T>
class BinaryTree{
struct Node {
		T val;
		Node* godfather;
		Node* right_son;
		Node* left_son;

		Node(const T& v, Node* godfather,Node* right_son,Node* left_son)
			: val(v), godfather(godfather),right_son(right_son),left_son(left_son){
            }

};
// fields
	Node* root;	
public:	

	//-------------------------------------------------------------------
	// iterator related code:
	// inner class and methods that return instances of it)
	//-------------------------------------------------------------------
	class iterator_preorder {

	  private:
		Node* pointer_to_current_node;

	public:

		iterator_preorder(Node* ptr = nullptr)
			: pointer_to_current_node(ptr) {
		}

		// Note that the method is const as this operator does not
		// allow changing of the iterator.
		// Note that it returns T& as it allows to change what it points to.
		// A const_iterator class will return const T&
		// and the method will still be const
		T& operator*() const {
			//return *pointer_to_current_node;
			return pointer_to_current_node->val;
		}

		T* operator->() const {
			return &(pointer_to_current_node->val);
		}

		// ++i;
		iterator_preorder& operator++() {
			//++pointer_to_current_node;
		//	if(pointer_to_current_node->right_son!=nullptr){
			pointer_to_current_node = pointer_to_current_node->right_son;
						return *this;
		//	}
			// else{
			// pointer_to_current_node = pointer_to_current_node->left_son;
			// return nullptr;
			// }
			

			//return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const iterator_preorder operator++(int) {
			iterator_preorder tmp= *this;		
			pointer_to_current_node= pointer_to_current_node->left_son;
			return tmp;
		}

		bool operator==(const iterator_preorder& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}

		bool operator!=(const iterator_preorder& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
		}
	};  // END OF CLASS ITERATOR
class iterator_inorder {

	  private:
		Node* pointer_to_current_node;

	public:

		iterator_inorder(Node* ptr = nullptr)
			: pointer_to_current_node(ptr) {
		}

		// Note that the method is const as this operator does not
		// allow changing of the iterator.
		// Note that it returns T& as it allows to change what it points to.
		// A const_iterator class will return const T&
		// and the method will still be const
		T& operator*() const {
			//return *pointer_to_current_node;
			return pointer_to_current_node->val;
		}

		T* operator->() const {
			return &(pointer_to_current_node->val);
		}

		// ++i;
		iterator_inorder& operator++() {
			//++pointer_to_current_node;
			pointer_to_current_node = pointer_to_current_node->right_son;
			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const iterator_inorder operator++(int) {
			iterator_inorder tmp= *this;
			pointer_to_current_node= pointer_to_current_node->right_son;
			return tmp;
		}

		bool operator==(const iterator_inorder& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}

		bool operator!=(const iterator_inorder& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
		}
	};  // END OF CLASS ITERATOR
class iterator_postorder {

	  private:
		Node* pointer_to_current_node;

	public:

		iterator_postorder(Node* ptr = nullptr)
			: pointer_to_current_node(ptr) {
		}

		// Note that the method is const as this operator does not
		// allow changing of the iterator.
		// Note that it returns T& as it allows to change what it points to.
		// A const_iterator class will return const T&
		// and the method will still be const
		T& operator*() const {
			//return *pointer_to_current_node;
			return pointer_to_current_node->val;
			
		}

		T* operator->() const {
			return &(pointer_to_current_node->val);
		}

		// ++i;
		iterator_postorder& operator++() {
			//++pointer_to_current_node;
			pointer_to_current_node = pointer_to_current_node->right_son;
			return *this;
		}

		// i++;
		// Usually iterators are passed by value and not by const& as they are small.
		const iterator_postorder operator++(int) {
			iterator_postorder tmp= *this;
			pointer_to_current_node= pointer_to_current_node->left_son;
			return tmp;
		}

		bool operator==(const iterator_postorder& rhs) const {
			return pointer_to_current_node == rhs.pointer_to_current_node;
		}

		bool operator!=(const iterator_postorder& rhs) const {
			return pointer_to_current_node != rhs.pointer_to_current_node;
		}
	};  // END OF CLASS ITERATOR

BinaryTree& add_root(T root){
	return *this;
}
BinaryTree& add_left(T father, T left_son){
		return *this;

}
BinaryTree& add_right(T father, T right_son){
		return *this;

}
iterator_inorder begin(){
		return iterator_inorder{nullptr};

}
iterator_inorder end(){			
	return iterator_inorder{nullptr};

}
iterator_preorder begin_preorder(){			
	return iterator_preorder{nullptr};

}
iterator_preorder end_preorder(){			
	return iterator_preorder{nullptr};

}
iterator_inorder begin_inorder(){			
	return iterator_inorder{nullptr};

}
iterator_inorder end_inorder(){			
return iterator_inorder{nullptr};

}
iterator_postorder begin_postorder(){			
	return iterator_postorder{nullptr};

}
iterator_postorder end_postorder(){			
	return iterator_postorder{nullptr};

}
 friend std::ostream& operator << (std::ostream& output, const BinaryTree& tree){
	 return output;
 }


};

};