
/* ==== FUN_11026600 @ 11026600 ==== 
 * signature: undefined __cdecl FUN_11026600(ushort * param_1, ushort * param_2, int param_3)
 * body: 11026600-11026674
 */

void __cdecl FUN_11026600(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_1;
    uVar4 = *param_2;
    uVar2 = uVar1 & 0x1f;
    if ((uVar4 & 0x1f) <= (uVar1 & 0x1f)) {
      uVar2 = uVar4 & 0x1f;
    }
    uVar3 = uVar4 & 0x3e0;
    if ((uVar1 & 0x3e0) < uVar3) {
      uVar3 = uVar1 & 0x3e0;
    }
    uVar4 = uVar4 & 0x7c00;
    if ((uVar1 & 0x7c00) < uVar4) {
      uVar4 = uVar1 & 0x7c00;
    }
    *param_2 = uVar2 | uVar3 | uVar4;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


