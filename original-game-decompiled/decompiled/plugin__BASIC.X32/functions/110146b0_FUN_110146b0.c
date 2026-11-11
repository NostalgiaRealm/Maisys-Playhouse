
/* ==== FUN_110146b0 @ 110146b0 ==== 
 * signature: int __cdecl FUN_110146b0(undefined4 * param_1, int param_2, undefined4 param_3)
 * body: 110146b0-11014719
 */

int __cdecl FUN_110146b0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_11013ee0(param_2);
  if ((char)uVar1 != '\0') {
    return -1;
  }
  iVar2 = *(int *)(param_2 + 0x20) + 1;
  *(int *)(param_2 + 0x20) = iVar2;
  FUN_11002780(param_1,(undefined4 *)(param_2 + 0x24),iVar2 * 4);
  FUN_11013e60();
  uVar1 = FUN_110024d0(param_1,param_3);
  *(undefined4 *)(*(int *)(param_2 + 0x28) + -4 + *(int *)(param_2 + 0x20) * 4) = uVar1;
  FUN_11013e70();
  return *(int *)(param_2 + 0x20) + -1;
}


