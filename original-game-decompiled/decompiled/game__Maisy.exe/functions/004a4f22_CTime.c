
/* ==== CTime::CTime @ 004a4f22 ==== 
 * signature: undefined __thiscall CTime(CTime * this, _FILETIME * param_1, int param_2)
 * body: 004a4f22-004a4f7a
 * note: Library Function - Single Match  public: __thiscall CTime::CTime(struct _FILETIME const &,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CTime::CTime(struct _FILETIME const &,int)
   
   Library: Visual Studio 1998 Release */

CTime * __thiscall CTime::CTime(CTime *this,_FILETIME *param_1,int param_2)

{
  BOOL BVar1;
  _SYSTEMTIME local_20;
  _FILETIME local_10;
  undefined4 local_8;
  
  BVar1 = FileTimeToLocalFileTime(param_1,&local_10);
  if (BVar1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    BVar1 = FileTimeToSystemTime(&local_10,&local_20);
    if (BVar1 == 0) {
      *(undefined4 *)this = 0;
    }
    else {
      CTime((CTime *)&local_8,&local_20,param_2);
      *(undefined4 *)this = local_8;
    }
  }
  return this;
}


