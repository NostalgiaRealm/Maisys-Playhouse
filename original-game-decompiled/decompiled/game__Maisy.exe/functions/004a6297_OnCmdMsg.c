
/* ==== CDialog::OnCmdMsg @ 004a6297 ==== 
 * signature: int __thiscall OnCmdMsg(CDialog * this, uint param_1, int param_2, void * param_3, AFX_CMDHANDLERINFO * param_4)
 * body: 004a6297-004a632e
 * note: Library Function - Single Match  public: virtual int __thiscall CDialog::OnCmdMsg(unsigned int,int,void *,struct AFX_CMDHANDLERINFO *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDialog::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int *piVar4;
  
  iVar1 = FUN_004a79cb(this,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    if ((((param_2 == 0) || (param_2 == -1)) && ((param_1 & 0x8000) != 0)) && (param_1 < 0xf000)) {
      pHVar2 = GetParent(*(HWND *)(this + 0x1c));
      pCVar3 = CWnd::FromHandle(pHVar2);
      if ((pCVar3 != (CWnd *)0x0) &&
         (iVar1 = (**(code **)(*(int *)pCVar3 + 0x14))(param_1,param_2,param_3,param_4), iVar1 != 0)
         ) {
        return 1;
      }
      piVar4 = (int *)FUN_004a7052();
      if ((piVar4 != (int *)0x0) &&
         (iVar1 = (**(code **)(*piVar4 + 0x14))(param_1,param_2,param_3,param_4), iVar1 != 0)) {
        return 1;
      }
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


