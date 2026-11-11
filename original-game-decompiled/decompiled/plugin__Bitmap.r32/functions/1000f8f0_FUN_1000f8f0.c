
/* ==== FUN_1000f8f0 @ 1000f8f0 ==== 
 * signature: undefined4 __stdcall FUN_1000f8f0(int * param_1)
 * body: 1000f8f0-1000f8f0
 */

undefined4 FUN_1000f8f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1000ee90(param_1);
    FUN_1000fec0(param_1);
    iVar1 = FUN_1000fdc0(param_1[4]);
    if (iVar1 < 0) {
      param_1[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_1000bff0((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}


