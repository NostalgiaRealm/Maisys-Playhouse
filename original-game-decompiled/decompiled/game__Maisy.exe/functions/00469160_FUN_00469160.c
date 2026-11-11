
/* ==== FUN_00469160 @ 00469160 ==== 
 * signature: undefined __cdecl FUN_00469160(ushort * param_1, ushort * param_2, int param_3, int param_4)
 * body: 00469160-00469205
 */

void __cdecl FUN_00469160(ushort *param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)*(byte *)(param_4 + 0x1e);
  iVar2 = 0x100 - uVar3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_1;
    uVar5 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar4 = (uint)*param_2;
    if (uVar4 != uVar5) {
      *param_2 = (ushort)((uVar5 & 0x3e0) * uVar3 + (uVar4 & 0x3e0) * iVar2 >> 8) & 0x3e0 |
                 (ushort)((uVar4 & 0x7c00) * iVar2 + (uVar5 & 0x7c00) * uVar3 >> 8) & 0x7c00 |
                 (ushort)((*param_2 & 0x1f) * iVar2 + (uVar1 & 0x1f) * uVar3 >> 8);
    }
    param_2 = param_2 + 1;
  }
  return;
}


