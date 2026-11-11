
/* ==== FUN_140183c0 @ 140183c0 ==== 
 * signature: int __cdecl FUN_140183c0(int * param_1)
 * body: 140183c0-14018427
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_140183c0(int *param_1)

{
  UINT uMode;
  int iVar1;
  
  _DAT_14026d68 = 1;
  uMode = SetErrorMode(0x8000);
  iVar1 = FUN_14018430();
  if (iVar1 == 0) {
    iVar1 = FUN_140184a0();
    if (iVar1 != 0) {
      FUN_14018660();
      SetErrorMode(uMode);
      return iVar1;
    }
    if (param_1 != (int *)0x0) {
      iVar1 = FUN_14018550();
      *param_1 = iVar1;
    }
    if (DAT_14026d74 == 1) {
      FUN_14018c0f();
    }
    iVar1 = 0;
  }
  SetErrorMode(uMode);
  return iVar1;
}


