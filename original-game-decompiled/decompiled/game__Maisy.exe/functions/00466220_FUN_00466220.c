
/* ==== FUN_00466220 @ 00466220 ==== 
 * signature: undefined __cdecl FUN_00466220(byte * param_1, undefined1 * param_2, int param_3, int param_4)
 * body: 00466220-004662df
 */

void __cdecl FUN_00466220(byte *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  bVar2 = *(byte *)(param_4 + 0x22);
  iVar5 = *(int *)(param_4 + 0x14);
  iVar6 = *(int *)(param_4 + 0x28);
  bVar3 = *(byte *)(param_4 + 0x21);
  bVar4 = *(byte *)(param_4 + 0x20);
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(iVar6 + (uint)*param_1 * 4);
      param_3 = param_3 + -1;
      *param_2 = *(undefined1 *)
                  (((((int)((uint)pbVar1[2] * (0x100 - (uint)bVar2)) >> 8) + (uint)bVar2 & 0xf0) <<
                    4 | ((int)((uint)*(byte *)(iVar6 + 1 + (uint)*param_1 * 4) *
                              (0x100 - (uint)bVar3)) >> 8) + (uint)bVar3 & 0xf0 |
                   (int)(((int)((uint)*pbVar1 * (0x100 - (uint)bVar4)) >> 8) + (uint)bVar4) >> 4) +
                  iVar5);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


