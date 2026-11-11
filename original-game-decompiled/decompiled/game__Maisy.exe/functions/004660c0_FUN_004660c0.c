
/* ==== FUN_004660c0 @ 004660c0 ==== 
 * signature: undefined __cdecl FUN_004660c0(byte * param_1, undefined1 * param_2, int param_3, int param_4)
 * body: 004660c0-0046613c
 */

void __cdecl FUN_004660c0(byte *param_1,undefined1 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_4 + 0x14);
  iVar4 = *(int *)(param_4 + 0x28);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    pbVar1 = (byte *)(iVar4 + (uint)bVar2 * 4);
    *param_2 = *(undefined1 *)
                (((((int)(0xff - (uint)*(byte *)(iVar4 + 2 + (uint)bVar2 * 4)) >> 4) << 4 |
                  (int)(0xff - (uint)pbVar1[1]) >> 4) << 4 | (int)(0xff - (uint)*pbVar1) >> 4) +
                iVar3);
    param_2 = param_2 + 1;
  }
  return;
}


