
/* ==== Ctl3dSubclassCtlEx @ 5f001a70 ==== 
 * signature: undefined4 __stdcall Ctl3dSubclassCtlEx(HWND param_1, int param_2)
 * body: 5f001a70-5f001aff
 */

undefined4 Ctl3dSubclassCtlEx(HWND param_1,int param_2)

{
  HANDLE pvVar1;
  LONG LVar2;
  HWND pHVar3;
  int iVar4;
  
                    /* 0x1a70  25  Ctl3dSubclassCtlEx */
  if (DAT_5f005130 == 0) {
    return 0;
  }
  if ((-1 < param_2) && (param_2 < 7)) {
    pvVar1 = FUN_5f001000(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      return 0;
    }
    LVar2 = GetWindowLongA(param_1,-0x10);
    pHVar3 = GetParent(param_1);
    iVar4 = (*(code *)(&PTR_FUN_5f00b050)[param_2 * 8])(param_1,LVar2,0xffff,0,pHVar3);
    if (iVar4 == 1) {
      FUN_5f001070(param_1,(&DAT_5f00a190)[param_2 * 6]);
    }
    return 1;
  }
  return 0;
}


