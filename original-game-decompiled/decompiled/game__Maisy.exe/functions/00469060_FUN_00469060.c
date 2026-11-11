
/* ==== FUN_00469060 @ 00469060 ==== 
 * signature: undefined __cdecl FUN_00469060(ushort * param_1, ushort * param_2, int param_3)
 * body: 00469060-004690d3
 */

void __cdecl FUN_00469060(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = *param_2;
    uVar1 = *param_1;
    uVar4 = uVar1 & 0x1f;
    if ((uVar2 & 0x1f) <= (uVar1 & 0x1f)) {
      uVar4 = uVar2 & 0x1f;
    }
    uVar3 = uVar2 & 0x3e0;
    if ((uVar1 & 0x3e0) < uVar3) {
      uVar3 = uVar1 & 0x3e0;
    }
    uVar2 = uVar2 & 0x7c00;
    if ((uVar1 & 0x7c00) < uVar2) {
      uVar2 = uVar1 & 0x7c00;
    }
    param_1 = param_1 + 1;
    *param_2 = uVar4 | uVar3 | uVar2;
    param_2 = param_2 + 1;
  }
  return;
}


