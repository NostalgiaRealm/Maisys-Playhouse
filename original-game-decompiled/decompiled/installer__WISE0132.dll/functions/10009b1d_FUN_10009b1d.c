
/* ==== FUN_10009b1d @ 10009b1d ==== 
 * signature: byte * __cdecl FUN_10009b1d(byte * param_1, int * param_2)
 * body: 10009b1d-10009d0c
 */

byte * __cdecl FUN_10009b1d(byte *param_1,int *param_2)

{
  byte *pbVar1;
  LPCSTR pCVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  LPCSTR pCVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 local_124 [64];
  byte local_24 [32];
  
  iVar4 = FUN_10016190(param_1);
  *param_2 = iVar4;
  pbVar9 = param_1;
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar9 * 2] & 4;
    }
    else {
      uVar5 = FUN_10015ac0((int)(char)*pbVar9,4);
    }
    if (uVar5 == 0) break;
    pbVar9 = pbVar9 + 1;
  }
  if (*pbVar9 == 0x20) {
    pbVar9 = pbVar9 + 1;
  }
  bVar3 = *pbVar9;
  if (bVar3 != 0) {
    puVar10 = local_124;
    do {
      if ((bVar3 == 9) || (bVar3 == 0x7f)) break;
      pbVar8 = local_24;
      while (((bVar3 != 0 && (bVar3 != 0x20)) && (bVar3 != 9))) {
        *pbVar8 = bVar3;
        pbVar1 = pbVar9 + 1;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
        bVar3 = *pbVar1;
      }
      *pbVar8 = 0;
      puVar6 = FUN_1000ba71((LPCSTR)local_24);
      bVar3 = *pbVar9;
      *puVar10 = puVar6;
      if (bVar3 == 0x20) {
        pbVar9 = pbVar9 + 1;
      }
      bVar3 = *pbVar9;
      puVar10 = puVar10 + 1;
    } while (bVar3 != 0);
  }
  if (*pbVar9 == 9) {
    pbVar9 = pbVar9 + 1;
  }
  if (*pbVar9 == 0x20) {
    pbVar9 = pbVar9 + 1;
  }
  param_1 = (byte *)0x0;
  do {
    while( true ) {
      bVar3 = *pbVar9;
      if ((bVar3 == 0) || (bVar3 == 0x7f)) {
        return pbVar9 + 1;
      }
      if (DAT_100200d4 < 2) {
        uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar3 * 2] & 4;
      }
      else {
        uVar5 = FUN_10015ac0((int)(char)bVar3,4);
      }
      if (uVar5 == 0) break;
      if (param_1 == (byte *)0x0) {
        iVar4 = FUN_10016190(pbVar9);
        *param_2 = *param_2 + iVar4;
      }
      else {
        param_1 = param_1 + -1;
      }
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar9 * 2] & 4;
        }
        else {
          uVar5 = FUN_10015ac0((int)(char)*pbVar9,4);
        }
        if (uVar5 == 0) break;
        pbVar9 = pbVar9 + 1;
      }
      if (*pbVar9 == 0x20) {
        pbVar9 = pbVar9 + 1;
      }
    }
    if ((*pbVar9 == 9) && (pbVar9 = pbVar9 + 1, 0 < (int)param_1)) {
      param_1 = param_1 + 1;
    }
    iVar4 = FUN_10016230(pbVar9);
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar5 = (byte)PTR_DAT_1001fec8[(char)*pbVar9 * 2] & 4;
      }
      else {
        uVar5 = FUN_10015ac0((int)(char)*pbVar9,4);
      }
      if (uVar5 == 0) break;
      pbVar9 = pbVar9 + 1;
    }
    if (*pbVar9 == 0x20) {
      pbVar9 = pbVar9 + 1;
    }
    pbVar8 = local_24;
    for (; (((bVar3 = *pbVar9, bVar3 != 0 && (bVar3 != 0x20)) && (bVar3 != 9)) && (bVar3 != 0x7f));
        pbVar9 = pbVar9 + 1) {
      *pbVar8 = bVar3;
      pbVar8 = pbVar8 + 1;
    }
    *pbVar8 = 0;
    pbVar8 = local_24;
    if (local_24[0] != 0) {
      pCVar2 = (LPCSTR)local_124[iVar4];
      do {
        pCVar7 = FUN_100147fa(pCVar2,(int)(char)*pbVar8);
        if (pCVar7 != (LPCSTR)0x0) break;
        pbVar8 = pbVar8 + 1;
      } while (*pbVar8 != 0);
    }
    if ((*pbVar8 == 0) && (param_1 == (byte *)0x0)) {
      param_1 = (byte *)0x1;
    }
    for (; *pbVar9 == 0x20; pbVar9 = pbVar9 + 1) {
    }
  } while( true );
}


