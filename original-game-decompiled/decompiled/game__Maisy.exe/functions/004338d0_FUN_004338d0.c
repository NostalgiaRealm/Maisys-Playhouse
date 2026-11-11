
/* ==== FUN_004338d0 @ 004338d0 ==== 
 * signature: undefined4 __cdecl FUN_004338d0(int param_1, int * param_2, undefined1 * param_3)
 * body: 004338d0-0043393e
 */

undefined4 __cdecl FUN_004338d0(int param_1,int *param_2,undefined1 *param_3)

{
  bool bVar1;
  ushort uVar2;
  undefined3 extraout_var;
  int local_8;
  
  *param_3 = 0;
  local_8 = 0;
  uVar2 = *(ushort *)(*(int *)(*(int *)(param_1 + 0xc) + -4) + 8);
  if (-1 < (short)uVar2) {
    while( true ) {
      FUN_00435900(DAT_004dae3c,uVar2,&local_8);
      bVar1 = FUN_00437430(param_2,(int *)(local_8 + 0x14));
      if (CONCAT31(extraout_var,bVar1) != 0) break;
      uVar2 = *(ushort *)(local_8 + 0x4a);
      if (0x7fff < uVar2) {
        return 0;
      }
    }
    *param_3 = 1;
  }
  return 0;
}


