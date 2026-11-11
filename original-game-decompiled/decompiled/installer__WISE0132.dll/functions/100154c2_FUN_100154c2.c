
/* ==== FUN_100154c2 @ 100154c2 ==== 
 * signature: uint __cdecl FUN_100154c2(byte * param_1, char * param_2)
 * body: 100154c2-1001559f
 */

uint __cdecl FUN_100154c2(byte *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((*param_1 != 0x30) || (param_1[1] != 0x78)) {
    iVar3 = *param_2 + -0x30;
    if (0x34 < iVar3) {
      iVar3 = *param_2 + -0x35;
    }
    if (iVar3 % 2 == 1) {
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar2 = (byte)PTR_DAT_1001fec8[(char)*param_1 * 2] & 4;
        }
        else {
          uVar2 = FUN_10015ac0((int)(char)*param_1,4);
        }
        if (uVar2 == 0) break;
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar5 = (char)bVar1 + -0x30 + uVar5 * 10;
      }
    }
    else {
      uVar5 = FUN_10016190(param_1);
    }
    return uVar5;
  }
  pbVar4 = param_1 + 2;
  do {
    if (DAT_100200d4 < 2) {
      uVar2 = (byte)PTR_DAT_1001fec8[(char)*pbVar4 * 2] & 4;
    }
    else {
      uVar2 = FUN_10015ac0((int)(char)*pbVar4,4);
    }
    if (uVar2 == 0) {
      uVar2 = FUN_10015b60((int)(char)*pbVar4);
      if ((int)uVar2 < 0x41) {
        return uVar5;
      }
      uVar2 = FUN_10015b60((int)(char)*pbVar4);
      if (0x46 < (int)uVar2) {
        return uVar5;
      }
    }
    if ((char)*pbVar4 < ':') {
      iVar3 = -0x30;
    }
    else {
      iVar3 = -0x37;
    }
    uVar5 = uVar5 << 4 | (char)*pbVar4 + iVar3;
    pbVar4 = pbVar4 + 1;
  } while( true );
}


