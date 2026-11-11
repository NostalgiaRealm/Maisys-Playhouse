
/* ==== FUN_00433a80 @ 00433a80 ==== 
 * signature: undefined4 __cdecl FUN_00433a80(int param_1, undefined2 * param_2)
 * body: 00433a80-00433add
 */

undefined4 __cdecl FUN_00433a80(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 local_1c [5];
  int local_8;
  
  local_8 = 0;
  FUN_00435900(DAT_004dae3c,*(ushort *)(*(int *)(*(int *)(param_1 + 0xc) + -4) + 8),&local_8);
  FUN_0048b3b0(local_1c,(undefined4 *)(local_8 + 0x14));
  uVar1 = (**(code **)(*DAT_004da38c + 0x10c))(local_1c);
  *param_2 = uVar1;
  return 0;
}


