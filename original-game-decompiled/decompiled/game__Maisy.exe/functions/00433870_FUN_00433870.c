
/* ==== FUN_00433870 @ 00433870 ==== 
 * signature: undefined4 __cdecl FUN_00433870(int param_1, undefined4 * param_2)
 * body: 00433870-004338cd
 */

undefined4 __cdecl FUN_00433870(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
    return 0x10001;
  }
  iVar1 = FUN_00435900(DAT_004dae3c,*(ushort *)(*(int *)(*(int *)(param_1 + 0xc) + -4) + 8),&local_8
                      );
  if (iVar1 == 0) {
    FUN_0048b3b0(param_2,(undefined4 *)(local_8 + 0x14));
    return 0;
  }
  return 0x10000;
}


