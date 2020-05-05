#ifndef __TBALANCETREE_H__
#define __TBALANCETREE_H__
#include "tbalancenode.h"
#include "ttreetable.h"

class TBalanceTree: public TTreeTable {
 protected:
    int InsBalanceTree(PTTreeNode &pNode_, TKey k, PTDatValue pVal);
    int LeftTreeBalancing(PTBalanceNode &pNode); // ������. ������ ���������
    int RightTreeBalancing(PTBalanceNode &pNode);// ������. ������� ���������
 public:
    TBalanceTree() : TTreeTable() {} // �����������
    //�������� ������
    virtual void InsRecord(TKey k, PTDatValue pVal) override; // ��������
};

#endif // __TBALANCETREE_H__
