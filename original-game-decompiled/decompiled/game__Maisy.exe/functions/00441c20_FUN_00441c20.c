
/* ==== FUN_00441c20 @ 00441c20 ==== 
 * signature: undefined __thiscall FUN_00441c20(void * this, short * param_1)
 * body: 00441c20-00441d96
 */

void __thiscall FUN_00441c20(void *this,short *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  int iVar5;
  int local_8;
  
  sVar1 = *param_1;
  sVar2 = param_1[1];
  sVar3 = param_1[2];
  local_8 = (int)param_1[3];
  pcVar4 = *(code **)(*(int *)this + 0x244);
  iVar5 = (*pcVar4)();
  if (iVar5 != 0) {
    iVar5 = (*pcVar4)();
    if (*(int *)(iVar5 + 0x156) == 0x6e705453) goto LAB_00441cb0;
    iVar5 = (*pcVar4)();
    if (*(int *)(iVar5 + 0x156) == 0x616e7473) goto LAB_00441cb0;
  }
  iVar5 = FUN_0043fd60((int)this);
  if (iVar5 != 0) {
    FUN_0043fd60((int)this);
    iVar5 = FUN_0048d44a();
    if (iVar5 != 0) {
      FUN_0043fd60((int)this);
      iVar5 = FUN_0048d426();
      if (iVar5 != 0) {
        local_8 = local_8 + 0x12;
      }
    }
  }
LAB_00441cb0:
  if (*(CWnd **)((int)this + 0xc4) != (CWnd *)0x0) {
    CWnd::MoveWindow(*(CWnd **)((int)this + 0xc4),(int)sVar1,(int)sVar2,(int)sVar3 - (int)sVar1,
                     local_8 - sVar2,0);
    RedrawWindow(*(HWND *)(*(int *)((int)this + 0xc4) + 0x1c),(RECT *)0x0,(HRGN)0x0,0x81);
  }
  iVar5 = (*pcVar4)();
  if (iVar5 != 0) {
    iVar5 = (*pcVar4)();
    if (*(int *)(iVar5 + 0x156) == 0x616e7473) {
      FUN_0048d0b4();
      FUN_00440170(this);
      return;
    }
  }
  iVar5 = FUN_0043fd60((int)this);
  if (iVar5 != 0) {
    FUN_0043fd60((int)this);
    iVar5 = FUN_0048d44a();
    if (iVar5 != 0) {
      FUN_0043fd60((int)this);
      FUN_0048d4da();
      return;
    }
  }
  FUN_0048d0b4();
  return;
}


