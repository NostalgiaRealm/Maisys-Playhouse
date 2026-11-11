
/* ==== FUN_004841c0 @ 004841c0 ==== 
 * signature: undefined4 __cdecl FUN_004841c0(undefined4 param_1, int param_2, int param_3)
 * body: 004841c0-004841f8
 */

undefined4 __cdecl FUN_004841c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0048b550(param_2);
  if (((*(byte *)(iVar1 + 0x1e) & 1) != 0) && (*(int *)(iVar1 + 4) != 0)) {
    uVar2 = FUN_004354b0(DAT_004dae3c,*(void **)(*(int *)(iVar1 + 4) + 0x2e),param_3);
    return uVar2;
  }
  return 0x10000;
}


