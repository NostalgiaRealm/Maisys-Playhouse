
/* ==== CTime::CTime @ 004a4dfa ==== 
 * signature: undefined __thiscall CTime(CTime * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
 * body: 004a4dfa-004a4e4a
 * note: Library Function - Single Match  public: __thiscall CTime::CTime(int,int,int,int,int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CTime::CTime(int,int,int,int,int,int,int)
   
   Library: Visual Studio 1998 Release */

CTime * __thiscall
CTime::CTime(CTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  time_t tVar1;
  tm local_28;
  
  local_28.tm_sec = param_6;
  local_28.tm_min = param_5;
  local_28.tm_hour = param_4;
  local_28.tm_mday = param_3;
  local_28.tm_mon = param_2 + -1;
  local_28.tm_year = param_1 + -0x76c;
  local_28.tm_isdst = param_7;
  tVar1 = _mktime(&local_28);
  *(int *)this = (int)tVar1;
  return this;
}


