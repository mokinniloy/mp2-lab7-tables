#ifndef __TSCANTABLE_H__
#define __TSCANTABLE_H__
#include "tarraytable.h"

class TScanTable : public TArrayTable {
 public:
    TScanTable(int Size = TabMaxSize): TArrayTable(Size) {};//�����������
    // �������� ������
    virtual PTDatValue FindRecord(TKey k) override; //����� ������
    virtual void InsRecord(TKey k, PTDatValue pVal) override; //��������
    virtual void DelRecord(TKey k) override; //������� ������
};

#endif // __TSCANTABLE_H__
