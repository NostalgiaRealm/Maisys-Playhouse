
/* ==== FUN_0045f880 @ 0045f880 ==== 
 * signature: undefined __thiscall FUN_0045f880(void * this, char param_1)
 * body: 0045f880-0045f932
 */

void __thiscall FUN_0045f880(void *this,char param_1)

{
  HDC pHVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 0xc4) != 0) && (param_1 != DAT_004dc1c4)) {
    DAT_004dc1c4 = param_1;
    if (param_1 == '\0') {
      pHVar1 = GetDC((HWND)0x0);
      SetSystemPaletteUse(pHVar1,1);
      ReleaseDC((HWND)0x0,pHVar1);
    }
    else {
      pHVar1 = GetDC((HWND)0x0);
      SetSystemPaletteUse(pHVar1,2);
      ReleaseDC((HWND)0x0,pHVar1);
      iVar2 = FUN_00410600(*(int *)((int)this + 0xc4));
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x43) & 2) != 0)) {
        iVar2 = FUN_004319e0(iVar2);
        iVar2 = FUN_004084c0(iVar2);
        FUN_0047ac50(iVar2);
      }
      iVar2 = *(int *)(*(int *)((int)this + 0xc4) + 0x2a);
      if (iVar2 != 0) {
        InvalidateRect(*(HWND *)(iVar2 + 0x1c),(RECT *)0x0,0);
        return;
      }
    }
  }
  return;
}


