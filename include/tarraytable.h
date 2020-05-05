#ifndef __TARRAYTABLE_H__
#define __TARRAYTABLE_H__
#include "ttable.h"

enum TDataPos {FIRST_POS, CURRENT_POS, LAST_POS};

class TArrayTable : public TTable {
 protected:
    PTTabRecord *pRecs; // ������ ��� ������� �������
    int TabSize;        // ����. ����.���������� ������� � �������
    int CurrPos;        // ����� ������� ������ (��������� � 0)
 public:
    TArrayTable(int Size = TabMaxSize); // �����������
    ~TArrayTable() {};                // ����������
    // �������������� ������
    virtual int IsFull() const override; // ���������?
    int GetTabSize() const;      // �-�� �������
    // ������
    virtual TKey GetKey() const override;
    virtual PTDatValue GetValuePtr() const override;
    virtual TKey GetKey(TDataPos mode) const;
    virtual PTDatValue GetValuePtr(TDataPos mode) const;
    // �������� ������
    virtual PTDatValue FindRecord(TKey k) = 0; // ����� ������
    virtual void InsRecord(TKey k, PTDatValue pVal) = 0; // ��������
    virtual void DelRecord(TKey k) = 0;        // ������� ������
    //���������
    virtual int Reset() override;   // ���������� �� ������ ������
    virtual int IsTabEnded() const override; // ������� ���������?
    virtual int GoNext() override; // ������� � ��������� ������
    //(=1 ����� ���������� ��� ��������� ������ �������)
    virtual int SetCurrentPos (int pos);// ���������� ������� ������
    int GetCurrentPos() const;     //�������� ����� ������� ������
    friend class TSortTable;
};

#endif // __TARRAYTABLE_H__
