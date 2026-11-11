
/* ==== FUN_110267b0 @ 110267b0 ==== 
 * signature: undefined __cdecl FUN_110267b0(ushort * param_1, short * param_2, int param_3, int param_4)
 * body: 110267b0-1102687e
 */

void __cdecl FUN_110267b0(ushort *param_1,short *param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = *(byte *)(param_4 + 0x20) >> 3;
  uVar4 = (uint)(*(byte *)(param_4 + 0x21) >> 3);
  uVar2 = (uint)(*(byte *)(param_4 + 0x22) >> 3);
  if (param_3 != 0) {
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
      *param_2 = ((ushort)((uVar1 & 0x3e0) * (0x20 - uVar4) >> 5) & 0x3e0) +
                 ((ushort)((uVar1 & 0x7c00) * (0x20 - uVar2) >> 5) & 0x7c00) +
                 ((ushort)((uVar1 & 0x1f) * (0x20 - (uint)bVar3) >> 5) & 0x1f) +
                 ((ushort)((uVar2 << 5 | uVar4) << 5) | (ushort)bVar3);
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


