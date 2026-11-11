
/* ==== FUN_14008910 @ 14008910 ==== 
 * signature: uint __cdecl FUN_14008910(uint * param_1, uint * param_2)
 * body: 14008910-1400893b
 */

uint __cdecl FUN_14008910(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((*param_2 == uVar1) && (uVar1 = param_1[1], param_2[1] == uVar1)) &&
      (uVar1 = param_1[2], param_2[2] == uVar1)) && (uVar1 = param_1[3], param_2[3] == uVar1)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


