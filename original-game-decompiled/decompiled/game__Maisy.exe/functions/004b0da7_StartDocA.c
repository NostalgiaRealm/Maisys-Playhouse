
/* ==== CDC::StartDocA @ 004b0da7 ==== 
 * signature: int __thiscall StartDocA(CDC * this, char * param_1)
 * body: 004b0da7-004b0de0
 * note: Library Function - Single Match  public: int __thiscall CDC::StartDocA(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CDC::StartDocA(char const *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDC::StartDocA(CDC *this,char *param_1)

{
  int iVar1;
  DOCINFOA local_18;
  
  _memset(&local_18,0,0x14);
  local_18.lpszDocName = param_1;
  local_18.cbSize = 0x14;
  iVar1 = ::StartDocA(*(HDC *)(this + 4),&local_18);
  return iVar1;
}


