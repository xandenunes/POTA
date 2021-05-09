#ifndef BINARYNODE_H
#define BINARYNODE_H
class BinaryNode {
    public:
        int element;
        BinaryNode* left;
        BinaryNode* right;
        BinaryNode (int e,BinaryNode* l,BinaryNode* r) {
            element=e;
            left=l;
            right=r;
        }
};
#endif /* BINARYNODE_H */

