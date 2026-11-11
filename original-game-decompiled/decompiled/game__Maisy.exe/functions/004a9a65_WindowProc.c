
/* ==== CWnd::WindowProc @ 004a9a65 ==== 
 * signature: long __thiscall WindowProc(CWnd * this, uint param_1, uint param_2, long param_3)
 * body: 004a9a65-004a9aad
 * note: Library Function - Single Match  protected: virtual long __thiscall CWnd::WindowProc(unsigned int,unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual long __thiscall CWnd::WindowProc(unsigned int,unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CWnd::WindowProc(CWnd *this,uint param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long local_8;
  
  local_8 = 0;
  iVar1 = *(int *)this;
  iVar2 = (**(code **)(iVar1 + 0xa0))(param_1,param_2,param_3,&local_8);
  if (iVar2 == 0) {
    local_8 = (**(code **)(iVar1 + 0xa4))(param_1,param_2,param_3);
  }
  return local_8;
}


