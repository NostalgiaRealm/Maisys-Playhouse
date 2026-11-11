
/* ==== FUN_004b2889 @ 004b2889 ==== 
 * signature: int __fastcall FUN_004b2889(CWnd * param_1)
 * body: 004b2889-004b28f5
 */

int __fastcall FUN_004b2889(CWnd *param_1)

{
  int iVar1;
  CFrameWnd *this;
  CWnd *pCVar2;
  HWND hWnd;
  BOOL BVar3;
  
  iVar1 = FUN_004a8882((int *)param_1);
  if (((iVar1 != 3) && (iVar1 != 4)) &&
     (this = CWnd::GetParentFrame(param_1), this != (CFrameWnd *)0x0)) {
    pCVar2 = (CWnd *)FUN_004b8d18((int)this);
    hWnd = GetFocus();
    if (((pCVar2 == param_1) && (*(HWND *)(param_1 + 0x1c) != hWnd)) &&
       (BVar3 = IsChild(*(HWND *)(param_1 + 0x1c),hWnd), BVar3 == 0)) {
      (**(code **)(*(int *)param_1 + 0xe8))(1,param_1,param_1);
      return iVar1;
    }
    FUN_004b8d1f(this,(int *)param_1,1);
  }
  return iVar1;
}


