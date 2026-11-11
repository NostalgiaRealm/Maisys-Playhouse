
/* ==== FUN_11007a10 @ 11007a10 ==== 
 * signature: undefined4 __cdecl FUN_11007a10(undefined4 param_1, int param_2)
 * body: 11007a10-11007a5b
 */

uint __cdecl FUN_11007a10(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (((((iVar1 != 0x12d) && (iVar1 != 0x12e)) && (iVar1 != 0x12f)) &&
      ((iVar1 != 0x130 && (param_2 = *(uint *)(param_2 + 0x2c), param_2 != 0x12d)))) &&
     ((param_2 != 0x12e && ((param_2 != 0x12f && (param_2 != 0x130)))))) {
    return param_2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


