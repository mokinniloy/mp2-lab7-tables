#ifndef __TARRAYHASH_H__
#define __TARRAYHASH_H__
#include "thashtable.h"

#define TabHashStep 1

class  TArrayHash : public THashTable {
 protected:
    PTTabRecord *pRecs; // ������ ��� ������� �������
    int TabSize;        // ����. ����. �-�� �������
    int HashStep;       // ��� ���������� �������������
    int FreePos;        // ������ ��������� ������, ������������ ��� ������
    int CurrPos;        // ������ ������ ��� ���������� ������
    PTTabRecord pMark;  // ������ ��� ��������� ����� � ���������� ��������
    int GetNextPos(int pos) { return (pos + HashStep) % TabSize; };// ����. �����.
 public:
    TArrayHash(int Size = TabMaxSize, int Step = TabHashStep); // �����������
    ~TArrayHash();
    // �������������� ������
    virtual int IsFull() const; // ���������?
    // ������
    virtual TKey GetKey() const;
    virtual PTDatValue GetValuePtr() const;
    // �������� ������
    virtual PTDatValue FindRecord(TKey k); // ����� ������
    virtual void InsRecord(TKey k, PTDatValue pVal); // ��������
    virtual void DelRecord(TKey k);        // ������� ������
    // ���������
    virtual int Reset();   // ���������� �� ������ ������
    virtual int IsTabEnded() const; // ������� ���������?
    virtual int GoNext() ; // ������� � ��������� ������
    //(=1 ����� ���������� ��� ��������� ������ �������)
};

#endif // __TARRAYHASH_H__
