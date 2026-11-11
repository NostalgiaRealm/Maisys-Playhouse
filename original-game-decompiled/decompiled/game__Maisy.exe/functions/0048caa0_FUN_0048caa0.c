
/* ==== FUN_0048caa0 @ 0048caa0 ==== 
 * signature: int __cdecl FUN_0048caa0(int * param_1)
 * body: 0048caa0-0048cb07
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0048caa0(int *param_1)

{
  UINT uMode;
  int iVar1;
  
  _DAT_004dd1a4 = 1;
  uMode = SetErrorMode(0x8000);
  iVar1 = FUN_0048cb10();
  if (iVar1 == 0) {
    iVar1 = FUN_0048cb80();
    if (iVar1 != 0) {
      FUN_0048cd40();
      SetErrorMode(uMode);
      return iVar1;
    }
    if (param_1 != (int *)0x0) {
      iVar1 = FUN_0048cc30();
      *param_1 = iVar1;
    }
    if (DAT_004dd1b0 == 1) {
      FUN_0048d10f();
    }
    iVar1 = 0;
  }
  SetErrorMode(uMode);
  return iVar1;
}


