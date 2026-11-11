
/* ==== CTime::GetLocalTm @ 004a4fc1 ==== 
 * signature: tm * __thiscall GetLocalTm(CTime * this, tm * param_1)
 * body: 004a4fc1-004a4ff9
 * note: Library Function - Single Match  public: struct tm * __thiscall CTime::GetLocalTm(struct tm *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct tm * __thiscall CTime::GetLocalTm(struct tm *)const 
   
   Library: Visual Studio 1998 Release */

tm * __thiscall CTime::GetLocalTm(CTime *this,tm *param_1)

{
  tm *ptVar1;
  int iVar2;
  tm *ptVar3;
  
  if (param_1 == (tm *)0x0) {
    param_1 = _localtime((time_t *)this);
  }
  else {
    ptVar1 = _localtime((time_t *)this);
    if (ptVar1 == (tm *)0x0) {
      param_1 = (tm *)0x0;
    }
    else {
      ptVar3 = param_1;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        ptVar3->tm_sec = ptVar1->tm_sec;
        ptVar1 = (tm *)&ptVar1->tm_min;
        ptVar3 = (tm *)&ptVar3->tm_min;
      }
    }
  }
  return param_1;
}


