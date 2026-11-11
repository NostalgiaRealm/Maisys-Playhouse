
/* ==== FUN_0047ccd0 @ 0047ccd0 ==== 
 * signature: undefined4 __cdecl FUN_0047ccd0(undefined4 * param_1, uint param_2)
 * body: 0047ccd0-0047cd30
 */

undefined4 __cdecl FUN_0047ccd0(undefined4 *param_1,uint param_2)

{
  HGLOBAL pvVar1;
  SIZE_T SVar2;
  
  if ((HGLOBAL)*param_1 == (HGLOBAL)0x0) {
    pvVar1 = FUN_0043f770(param_2);
    *param_1 = pvVar1;
    if (pvVar1 == (HGLOBAL)0x0) {
      return 0x10000;
    }
  }
  else {
    SVar2 = GlobalSize((HGLOBAL)*param_1);
    if (SVar2 < param_2) {
      FUN_0043f7b0((HGLOBAL)*param_1,param_2);
      SVar2 = GlobalSize((HGLOBAL)*param_1);
      if (SVar2 < param_2) {
        return 0x10000;
      }
    }
  }
  return 0;
}


