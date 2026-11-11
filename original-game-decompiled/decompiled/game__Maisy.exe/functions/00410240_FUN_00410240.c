
/* ==== FUN_00410240 @ 00410240 ==== 
 * signature: undefined4 __fastcall FUN_00410240(int param_1)
 * body: 00410240-0041024f
 */

undefined4 __fastcall FUN_00410240(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a);
  if (iVar1 == 0) {
    return 0;
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + 0x26));
}


