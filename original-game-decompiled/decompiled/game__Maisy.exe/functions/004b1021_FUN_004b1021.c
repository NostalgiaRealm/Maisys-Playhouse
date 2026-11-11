
/* ==== FUN_004b1021 @ 004b1021 ==== 
 * signature: undefined __thiscall FUN_004b1021(void * this, int param_1, BOOL param_2)
 * body: 004b1021-004b1046
 */

void __thiscall FUN_004b1021(void *this,int param_1,BOOL param_2)

{
  HPALETTE pHVar1;
  
  if (param_1 == 0) {
    pHVar1 = (HPALETTE)0x0;
  }
  else {
    pHVar1 = *(HPALETTE *)(param_1 + 4);
  }
  pHVar1 = SelectPalette(*(HDC *)((int)this + 4),pHVar1,param_2);
  CGdiObject::FromHandle(pHVar1);
  return;
}


