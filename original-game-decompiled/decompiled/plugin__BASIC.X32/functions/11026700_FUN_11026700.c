
/* ==== FUN_11026700 @ 11026700 ==== 
 * signature: undefined __cdecl FUN_11026700(ushort * param_1, ushort * param_2, int param_3, int param_4)
 * body: 11026700-110267a8
 */

void __cdecl FUN_11026700(ushort *param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = (uint)*(byte *)(param_4 + 0x1e);
  iVar5 = 0x100 - uVar2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_1;
    uVar4 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar3 = (uint)*param_2;
    if (uVar3 != uVar4) {
      *param_2 = (ushort)((uVar3 & 0x7c00) * iVar5 + (uVar4 & 0x7c00) * uVar2 >> 8) & 0x7c00 |
                 (ushort)((uVar3 & 0x3e0) * iVar5 + (uVar4 & 0x3e0) * uVar2 >> 8) & 0x3e0 |
                 (ushort)((*param_2 & 0x1f) * iVar5 + (uVar1 & 0x1f) * uVar2 >> 8);
    }
    param_2 = param_2 + 1;
  }
  return;
}


