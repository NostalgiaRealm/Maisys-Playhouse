
/* ==== FUN_1400cf40 @ 1400cf40 ==== 
 * signature: uint __cdecl FUN_1400cf40(int param_1)
 * body: 1400cf40-1400cf67
 */

uint __cdecl FUN_1400cf40(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x80000000;
  }
  if ((uVar1 & 2) == 0) {
    uVar2 = uVar2 | 0x40000000;
  }
  if ((uVar1 & 4) == 0) {
    uVar2 = uVar2 | 0x20000000;
  }
  return uVar2;
}


