
/* ==== CFrameWnd::OnCmdMsg @ 004b87e3 ==== 
 * signature: int __thiscall OnCmdMsg(CFrameWnd * this, uint param_1, int param_2, void * param_3, AFX_CMDHANDLERINFO * param_4)
 * body: 004b87e3-004b885a
 * note: Library Function - Single Match  public: virtual int __thiscall CFrameWnd::OnCmdMsg(unsigned int,int,void *,struct AFX_CMDHANDLERINFO *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CFrameWnd::OnCmdMsg(CFrameWnd *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_004b8d18((int)this);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x14))(param_1,param_2,param_3,param_4), iVar2 != 0)) {
    return 1;
  }
  iVar2 = FUN_004a79cb(this,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    iVar2 = FUN_004bafca();
    if ((*(int **)(iVar2 + 4) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))(param_1,param_2,param_3,param_4),
       iVar2 != 0)) {
      return 1;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}


