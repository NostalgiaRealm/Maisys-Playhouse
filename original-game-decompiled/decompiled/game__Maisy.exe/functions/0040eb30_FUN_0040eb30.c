
/* ==== FUN_0040eb30 @ 0040eb30 ==== 
 * signature: undefined __cdecl FUN_0040eb30(byte * param_1, int * param_2, int param_3, int param_4)
 * body: 0040eb30-0040ebc4
 */

void __cdecl FUN_0040eb30(byte *param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  
  bVar1 = *(byte *)(param_4 + 0x22);
  bVar2 = *(byte *)(param_4 + 0x21);
  uVar4 = *(ushort *)(param_4 + 0x21);
  bVar3 = *(byte *)(param_4 + 0x20);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_2 = (((uint)param_1[2] * (0x100 - (uint)bVar1) & 0xff00) << 8 |
                (uint)param_1[1] * (0x100 - (uint)bVar2) & 0xff00 |
               (int)((uint)*param_1 * (0x100 - (uint)bVar3)) >> 8) +
               (uint)uVar4 * 0x100 + (uint)bVar3;
    param_1 = param_1 + 4;
    param_2 = param_2 + 1;
  }
  return;
}


