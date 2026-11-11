
/* ==== FUN_0040a450 @ 0040a450 ==== 
 * signature: int __cdecl FUN_0040a450(byte * param_1)
 * body: 0040a450-0040a4e8
 */

int __cdecl FUN_0040a450(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_0041103c < 2) {
      uVar2 = (byte)PTR_DAT_00410e30[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_0040a3b0((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_0041103c < 2) {
      uVar3 = (byte)PTR_DAT_00410e30[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_0040a3b0(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}


