
/* ==== FUN_110019b0 @ 110019b0 ==== 
 * signature: undefined4 __cdecl FUN_110019b0(undefined4 param_1, int param_2)
 * body: 110019b0-11001a3a
 */

uint __cdecl FUN_110019b0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (((((iVar1 != 0x12d) && (iVar1 != 0x12e)) && ((iVar1 < 0x131 || (0x133 < iVar1)))) &&
      ((((iVar1 != 0x135 && (iVar1 != 0x136)) &&
        (param_2 = *(uint *)(param_2 + 0x18), param_2 != 0x12d)) && (param_2 != 0x12e)))) &&
     (((param_2 < 0x131 || (0x133 < param_2)) &&
      ((param_2 != 0x135 &&
       (((param_2 != 0x136 && (iVar1 != 0x12f)) &&
        ((iVar1 != 0x130 && ((param_2 != 0x12f && (param_2 != 0x130)))))))))))) {
    return param_2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


