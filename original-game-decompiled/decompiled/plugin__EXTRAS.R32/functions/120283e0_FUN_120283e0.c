
/* ==== FUN_120283e0 @ 120283e0 ==== 
 * signature: int __cdecl FUN_120283e0(int * param_1)
 * body: 120283e0-12028447
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_120283e0(int *param_1)

{
  UINT uMode;
  int iVar1;
  
  _DAT_12037d7c = 1;
  uMode = SetErrorMode(0x8000);
  iVar1 = FUN_12028450();
  if (iVar1 == 0) {
    iVar1 = FUN_120284c0();
    if (iVar1 != 0) {
      FUN_12028680();
      SetErrorMode(uMode);
      return iVar1;
    }
    if (param_1 != (int *)0x0) {
      iVar1 = FUN_12028570();
      *param_1 = iVar1;
    }
    if (DAT_12037d88 == 1) {
      FUN_12027f9f();
    }
    iVar1 = 0;
  }
  SetErrorMode(uMode);
  return iVar1;
}


