
/* ==== FUN_0048bfb0 @ 0048bfb0 ==== 
 * signature: undefined4 __cdecl FUN_0048bfb0(int param_1, short param_2, char param_3, short * param_4, short * param_5)
 * body: 0048bfb0-0048c006
 */

uint __cdecl FUN_0048bfb0(int param_1,short param_2,char param_3,short *param_4,short *param_5)

{
  int iVar1;
  
  iVar1 = (int)*param_5;
  while( true ) {
    if (param_2 <= iVar1) {
      *param_4 = *param_5;
      *param_5 = param_2 + 1;
      return CONCAT22((short)((uint)param_4 >> 0x10),param_2 + 1) & 0xffffff00;
    }
    if (*(char *)(param_1 + iVar1) == param_3) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined1 *)(param_1 + iVar1) = 0;
  *param_4 = *param_5;
  *param_5 = (short)iVar1 + 1;
  return CONCAT31((int3)((uint)param_4 >> 8),1);
}


