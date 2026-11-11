
/* ==== FUN_11009a50 @ 11009a50 ==== 
 * signature: undefined __cdecl FUN_11009a50(byte * param_1, undefined1 * param_2, int param_3, int param_4)
 * body: 11009a50-11009b1b
 */

void __cdecl FUN_11009a50(byte *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_4 + 0x22);
  iVar4 = *(int *)(param_4 + 0x14);
  bVar2 = *(byte *)(param_4 + 0x21);
  iVar5 = *(int *)(param_4 + 0x28);
  bVar3 = *(byte *)(param_4 + 0x20);
  if (param_3 != 0) {
    do {
      uVar6 = (uint)*param_1;
      param_3 = param_3 + -1;
      *param_2 = *(undefined1 *)
                  (((((int)((uint)*(byte *)(iVar5 + 2 + uVar6 * 4) * (0x100 - (uint)bVar1)) >> 8) +
                     (uint)bVar1 & 0xf0) << 4 |
                    ((int)((uint)*(byte *)(iVar5 + 1 + uVar6 * 4) * (0x100 - (uint)bVar2)) >> 8) +
                    (uint)bVar2 & 0xf0 |
                   (int)(((int)((uint)*(byte *)(iVar5 + uVar6 * 4) * (0x100 - (uint)bVar3)) >> 8) +
                        (uint)bVar3) >> 4) + iVar4);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


