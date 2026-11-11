
/* ==== FUN_004a9696 @ 004a9696 ==== 
 * signature: undefined __thiscall FUN_004a9696(void * this, undefined4 param_1, int * param_2)
 * body: 004a9696-004a9705
 */

void __thiscall FUN_004a9696(void *this,undefined4 param_1,int *param_2)

{
  _AFX_THREAD_STATE *p_Var1;
  HMENU pHVar2;
  int iVar3;
  int *piVar4;
  CWnd *this_00;
  
  if (*param_2 == 1) {
    p_Var1 = AfxGetThreadState();
    if (*(HWND *)(p_Var1 + 0x54) == *(HWND *)((int)this + 0x1c)) {
      pHVar2 = *(HMENU *)(p_Var1 + 0x58);
    }
    else {
      pHVar2 = GetMenu(*(HWND *)((int)this + 0x1c));
    }
    iVar3 = FromHandle(pHVar2);
    piVar4 = FUN_004a9706(iVar3,param_2[2]);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x18))(param_2);
    }
  }
  else {
    this_00 = CWnd::GetDescendantWindow(*(HWND__ **)((int)this + 0x1c),param_2[1],1);
    if ((this_00 != (CWnd *)0x0) && (iVar3 = FUN_004aac53(this_00,0), iVar3 != 0)) {
      return;
    }
  }
  FUN_004a8882(this);
  return;
}


