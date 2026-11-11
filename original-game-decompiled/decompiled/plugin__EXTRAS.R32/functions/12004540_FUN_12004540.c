
/* ==== FUN_12004540 @ 12004540 ==== 
 * signature: uint __cdecl FUN_12004540(undefined4 * param_1)
 * body: 12004540-12004570
 */

uint __cdecl FUN_12004540(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)*param_1;
  uVar2 = (uint)bVar1;
  pbVar3 = (byte *)*param_1 + 1;
  if ((bVar1 & 0x80) != 0) {
    uVar2 = bVar1 & 0x7f;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 * 0x80 + (bVar1 & 0xffffff7f);
    } while ((bVar1 & 0x80) != 0);
  }
  *param_1 = pbVar3;
  return uVar2;
}


