#ifndef __TROOTLINK_H__
#define __TROOTLINK_H__
#include "tdatvalue.h"

class TRootLink;
typedef TRootLink *PTRootLink;

class TRootLink {
protected:
    PTRootLink pNext;  // ��������� �� ��������� �����
public:
    TRootLink(PTRootLink pN = nullptr) { pNext = pN; }
    PTRootLink  GetNextLink() { return  pNext; }
    void SetNextLink(PTRootLink pLink) { pNext = pLink; }
    void InsNextLink(PTRootLink pLink) {
        PTRootLink p = pNext;
        pNext = pLink;
        if (pLink)
            pLink->pNext = p;
    }
    virtual void SetDatValue(PTDatValue pVal) = 0;
    virtual PTDatValue GetDatValue() = 0;

    friend class TDatList;
};

#endif  // __TROOTLINK_H__
