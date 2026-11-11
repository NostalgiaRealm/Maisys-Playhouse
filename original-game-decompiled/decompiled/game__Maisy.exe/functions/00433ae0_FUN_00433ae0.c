
/* ==== FUN_00433ae0 @ 00433ae0 ==== 
 * signature: undefined __cdecl FUN_00433ae0(int param_1, short param_2, undefined4 param_3)
 * body: 00433ae0-00433b3c
 */

void __cdecl FUN_00433ae0(int param_1,short param_2,undefined4 param_3)

{
  undefined4 local_1c [5];
  int local_8;
  
  local_8 = 0;
  FUN_00435900(DAT_004dae3c,*(ushort *)(*(int *)(*(int *)(param_1 + 0xc) + -4) + 8),&local_8);
  FUN_0048b3b0(local_1c,(undefined4 *)(local_8 + 0x14));
  (**(code **)(*DAT_004da38c + 0x114))(local_1c,(int)param_2,param_3);
  return;
}


