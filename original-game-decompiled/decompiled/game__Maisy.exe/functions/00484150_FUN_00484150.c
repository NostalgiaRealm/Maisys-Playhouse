
/* ==== FUN_00484150 @ 00484150 ==== 
 * signature: undefined4 __cdecl FUN_00484150(undefined4 param_1, int param_2, int param_3)
 * body: 00484150-004841b2
 */

undefined4 __cdecl FUN_00484150(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  FUN_00435900(DAT_004dae3c,*(ushort *)(*(int *)(param_3 + -4) + 8),&local_8);
  iVar1 = FUN_0048b550(param_2);
  if (((*(byte *)(iVar1 + 0x1e) & 1) != 0) && (*(int *)(iVar1 + 4) != 0)) {
    uVar2 = FUN_00435520(DAT_004dae3c,*(int **)(*(int *)(iVar1 + 4) + 0x2e),
                         (undefined4 *)(local_8 + 0x14),(undefined4 *)(local_8 + 0x14),0,param_3);
    return uVar2;
  }
  return 0x10000;
}


