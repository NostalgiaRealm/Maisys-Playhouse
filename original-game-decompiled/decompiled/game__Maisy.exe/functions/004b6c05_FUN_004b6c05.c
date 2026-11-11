
/* ==== FUN_004b6c05 @ 004b6c05 ==== 
 * signature: undefined4 __thiscall FUN_004b6c05(void * this, LPMSG param_1)
 * body: 004b6c05-004b6ce1
 */

undefined4 __thiscall FUN_004b6c05(void *this,LPMSG param_1)

{
  UINT *pUVar1;
  int iVar2;
  undefined4 uVar3;
  CMDIChildWnd *pCVar4;
  BOOL BVar5;
  
  pUVar1 = &param_1->message;
  if ((*pUVar1 == 0x201) || (*pUVar1 == 0xa1)) {
    FUN_004b2ebf(param_1->hwnd);
  }
  iVar2 = FUN_004a9389(this,param_1);
  if (iVar2 == 0) {
    if ((*(int **)((int)this + 0x68) != (int *)0x0) &&
       (iVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0x58))(param_1), iVar2 != 0)) {
      return 1;
    }
    pCVar4 = CMDIFrameWnd::MDIGetActive(this,(int *)0x0);
    if ((pCVar4 != (CMDIChildWnd *)0x0) &&
       (iVar2 = (**(code **)(*(int *)pCVar4 + 0x94))(param_1), iVar2 != 0)) {
      return 1;
    }
    if ((0xff < *pUVar1) && (*pUVar1 < 0x109)) {
      if ((*(HACCEL *)((int)this + 0x48) != (HACCEL)0x0) &&
         (iVar2 = TranslateAcceleratorA
                            (*(HWND *)((int)this + 0x1c),*(HACCEL *)((int)this + 0x48),param_1),
         iVar2 != 0)) {
        return 1;
      }
      iVar2 = FUN_004b8d18((int)this);
      if ((iVar2 == 0) &&
         (((*pUVar1 == 0x100 || (*pUVar1 == 0x104)) &&
          (BVar5 = TranslateMDISysAccel(*(HWND *)((int)this + 0xbc),param_1), BVar5 != 0)))) {
        return 1;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


