#ifndef __TDATVALUE_H__
#define __TDATVALUE_H__

class TDatValue {
public:
    virtual TDatValue *GetCopy() = 0; // �������� �����
};
typedef TDatValue *PTDatValue;

#endif  // __TDATVALUE_H__
