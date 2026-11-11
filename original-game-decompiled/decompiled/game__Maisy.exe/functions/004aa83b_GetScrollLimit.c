
/* ==== CWnd::GetScrollLimit @ 004aa83b ==== 
 * signature: int __thiscall GetScrollLimit(CWnd * this, int param_1)
 * body: 004aa83b-004aa87c
 * note: Library Function - Single Match  public: int __thiscall CWnd::GetScrollLimit(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::GetScrollLimit(int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::GetScrollLimit(CWnd *this,int param_1)

{
  int iVar1;
  tagSCROLLINFO local_28;
  int local_c;
  int local_8;
  
  GetScrollRange(this,param_1,&local_c,&local_8);
  iVar1 = GetScrollInfo(this,param_1,&local_28,2);
  if (iVar1 != 0) {
    local_8 = local_8 + (1 - local_28.nPage);
  }
  return local_8;
}


