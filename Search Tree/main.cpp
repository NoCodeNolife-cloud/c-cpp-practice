#include <iostream>
#include <vector>

using namespace std;

class Tree {
private:
    int val;
    Tree *left;
    Tree *right;
public:
    Tree(int val) : val(val) {
        left = nullptr;
        right = nullptr;
    }

    void setLeft(Tree *left) {
        Tree::left = left;
    }

    void setRight(Tree *right) {
        Tree::right = right;
    }

    void setVal(int val) {
        Tree::val = val;
    }

    int getVal() const {
        return val;
    }

    Tree *getLeft() const {
        return left;
    }

    Tree *getRight() const {
        return right;
    }
};

class CompTree {
private:
    Tree *root;

    void insert(Tree *node, int val) {
        if (node->getVal() > val) {
            if (node->getRight() != nullptr) {
                insert(node->getRight(), val);
            } else {
                Tree *temp = new Tree(val);
                node->setRight(temp);
                return;
            }
        } else {
            if (node->getLeft() != nullptr) {
                insert(node->getLeft(), val);
            } else {
                Tree *temp = new Tree(val);
                node->setLeft(temp);
                return;
            }
        }
    }

    void prevTraverse(vector<int> &vec, Tree *tree) {
        if (tree == nullptr) {
            return;
        }
        vec.push_back(tree->getVal());
        prevTraverse(vec, tree->getLeft());
        prevTraverse(vec, tree->getRight());
    }

    void midTraverse(vector<int> &vec, Tree *tree) {
        if (tree == nullptr) {
            return;
        }
        midTraverse(vec, tree->getLeft());
        vec.push_back(tree->getVal());
        midTraverse(vec, tree->getRight());
    }

    void tailTraverse(vector<int> &vec, Tree *tree) {
        if (tree == nullptr) {
            return;
        }
        tailTraverse(vec, tree->getLeft());
        tailTraverse(vec, tree->getRight());
        vec.push_back(tree->getVal());
    }

public:

    CompTree(int val) {
        root = new Tree(val);
    }

    void insert(int val) {
        insert(root, val);
    }

    void prevTraverse(vector<int> &vec) {
        prevTraverse(vec, root);
    }

    void midTraverse(vector<int> &vec) {
        midTraverse(vec, root);
    }

    void tailTraverse(vector<int> &vec) {
        tailTraverse(vec, root);
    }
};

int main() {
    CompTree *tree = new CompTree(5);
    tree->insert(10);
    tree->insert(9);
    tree->insert(11);
    vector<int> res;
    tree->prevTraverse(res);
    for (auto item:res) {
        cout << item << endl;
    }
    return 0;
}
