
/* ==== FUN_0045a510 @ 0045a510 ==== 
 * signature: undefined4 __fastcall FUN_0045a510(int param_1)
 * body: 0045a510-0045a51f
 */

undefined4 __fastcall FUN_0045a510(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7e);
  if (iVar1 == 0) {
    return 0;
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + 0xc));
}


