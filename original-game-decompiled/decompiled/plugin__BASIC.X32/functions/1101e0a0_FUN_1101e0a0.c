
/* ==== FUN_1101e0a0 @ 1101e0a0 ==== 
 * signature: uint __cdecl FUN_1101e0a0(undefined4 param_1, int param_2)
 * body: 1101e0a0-1101e0e7
 */

uint __cdecl FUN_1101e0a0(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0xe);
  if (((((uVar1 != 0x12d) && (uVar1 != 0x12e)) && (uVar1 != 0x12f)) &&
      ((uVar1 != 0x130 && (uVar1 = *(uint *)(param_2 + 0x16), uVar1 != 0x12d)))) &&
     ((uVar1 != 0x12e && ((uVar1 != 0x12f && (uVar1 != 0x130)))))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


