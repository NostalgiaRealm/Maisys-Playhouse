
/* ==== CTime::CTime @ 004a4ecd ==== 
 * signature: undefined __thiscall CTime(CTime * this, _SYSTEMTIME * param_1, int param_2)
 * body: 004a4ecd-004a4f21
 * note: Library Function - Single Match  public: __thiscall CTime::CTime(struct _SYSTEMTIME const &,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CTime::CTime(struct _SYSTEMTIME const &,int)
   
   Library: Visual Studio 1998 Release */

CTime * __thiscall CTime::CTime(CTime *this,_SYSTEMTIME *param_1,int param_2)

{
  undefined4 local_8;
  
  if (param_1->wYear < 0x76c) {
    *(undefined4 *)this = 0;
  }
  else {
    CTime((CTime *)&local_8,(uint)param_1->wYear,(uint)param_1->wMonth,(uint)param_1->wDay,
          (uint)param_1->wHour,(uint)param_1->wMinute,(uint)param_1->wSecond,param_2);
    *(undefined4 *)this = local_8;
  }
  return this;
}


