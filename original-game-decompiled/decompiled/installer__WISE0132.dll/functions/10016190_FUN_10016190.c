
/* ==== FUN_10016190 @ 10016190 ==== 
 * signature: int __cdecl FUN_10016190(byte * param_1)
 * body: 10016190-10016228
 */

int __cdecl FUN_10016190(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar2 = (byte)PTR_DAT_1001fec8[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_10015ac0((uint)*param_1,8);
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
    if (DAT_100200d4 < 2) {
      uVar3 = (byte)PTR_DAT_1001fec8[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_10015ac0(uVar4,4);
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


