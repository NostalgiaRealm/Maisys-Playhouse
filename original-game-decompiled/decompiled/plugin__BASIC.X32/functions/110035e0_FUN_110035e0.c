
/* ==== FUN_110035e0 @ 110035e0 ==== 
 * signature: undefined4 __cdecl FUN_110035e0(undefined4 param_1, int param_2)
 * body: 110035e0-1100362b
 */

uint __cdecl FUN_110035e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (((((iVar1 != 0x12d) && (iVar1 != 0x12e)) && (iVar1 != 0x12f)) &&
      ((iVar1 != 0x130 && (param_2 = *(uint *)(param_2 + 0x14), param_2 != 0x12d)))) &&
     ((param_2 != 0x12e && ((param_2 != 0x12f && (param_2 != 0x130)))))) {
    return param_2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


