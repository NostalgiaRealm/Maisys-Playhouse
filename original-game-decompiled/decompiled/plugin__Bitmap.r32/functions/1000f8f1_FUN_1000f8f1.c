
/* ==== FUN_1000f8f1 @ 1000f8f1 ==== 
 * signature: undefined FUN_1000f8f1(void)
 * body: 1000f8f1-1000f954
 */

undefined4 FUN_1000f8f1(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_2 + 3) & 0x83) != 0) {
    uVar2 = FUN_1000ee90(param_2);
    FUN_1000fec0(param_2);
    iVar1 = FUN_1000fdc0(param_2[4]);
    if (iVar1 < 0) {
      param_2[3] = 0;
      return 0xffffffff;
    }
    if ((undefined *)param_2[7] != (undefined *)0x0) {
      FUN_1000bff0((undefined *)param_2[7]);
      param_2[7] = 0;
    }
  }
  param_2[3] = 0;
  return uVar2;
}


