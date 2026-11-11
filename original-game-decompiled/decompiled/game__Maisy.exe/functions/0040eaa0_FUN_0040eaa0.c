
/* ==== FUN_0040eaa0 @ 0040eaa0 ==== 
 * signature: undefined __cdecl FUN_0040eaa0(uint * param_1, uint * param_2, int param_3, int param_4)
 * body: 0040eaa0-0040eb21
 */

void __cdecl FUN_0040eaa0(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_4 + 0x1e);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    uVar2 = *param_1;
    if (uVar1 != uVar2) {
      *param_2 = ((uVar1 & 0xff00) * (0x100 - uVar3) + (uVar2 & 0xff00) * uVar3 & 0xff0000 |
                 (uVar1 & 0xff00ff) * (0x100 - uVar3) + (uVar2 & 0xff00ff) * uVar3 & 0xff00ffff) >>
                 8;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


