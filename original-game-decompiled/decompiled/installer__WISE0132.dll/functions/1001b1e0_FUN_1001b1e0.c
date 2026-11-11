
/* ==== FUN_1001b1e0 @ 1001b1e0 ==== 
 * signature: undefined4 __stdcall FUN_1001b1e0(int * param_1)
 * body: 1001b1e0-1001b1e0
 */

undefined4 FUN_1001b1e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1001aa00(param_1);
    FUN_1001bae0(param_1);
    iVar1 = FUN_1001b9e0(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_10015a50((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}


