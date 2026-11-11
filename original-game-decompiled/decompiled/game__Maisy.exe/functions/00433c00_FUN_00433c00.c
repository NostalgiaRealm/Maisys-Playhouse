
/* ==== FUN_00433c00 @ 00433c00 ==== 
 * signature: undefined4 __cdecl FUN_00433c00(int param_1, undefined2 * param_2)
 * body: 00433c00-00433c43
 */

undefined4 __cdecl FUN_00433c00(int param_1,undefined2 *param_2)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_00435900(DAT_004dae3c,*(ushort *)(*(int *)(*(int *)(param_1 + 0xc) + -4) + 8),&local_8
                      );
  if (iVar1 == 0) {
    *param_2 = *(undefined2 *)(local_8 + 0x46);
    return 0;
  }
  return 0x10000;
}


