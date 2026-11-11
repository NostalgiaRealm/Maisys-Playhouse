
/* ==== FUN_10013ca6 @ 10013ca6 ==== 
 * signature: undefined __cdecl FUN_10013ca6(int * param_1, uint * param_2)
 * body: 10013ca6-10013e56
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10013ca6(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = DAT_10023f38;
  if ((DAT_100238dc & 0x10000) == 0) {
    if ((DAT_100238dc & 0x40) == 0) {
      iVar2 = (*(int *)(DAT_1002392c + 8) + *(int *)(DAT_1002392c + 0x14)) - DAT_100238bc;
    }
    else {
      iVar2 = (DAT_10023310 - DAT_10023fa8) + _DAT_10023e80;
      uVar4 = DAT_100240c0;
    }
  }
  else {
    iVar2 = *(int *)(DAT_1002392c + 0x14);
  }
  for (; 2000000 < iVar2; iVar2 = iVar2 / 10) {
    uVar4 = (int)uVar4 / 10;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *param_2 = uVar4;
  *param_1 = iVar2;
  uVar1 = (uint)(iVar2 * 100) / uVar4;
  DAT_1002393c = (byte)uVar1;
  if ((uVar4 / 200 <= iVar2 - (uVar4 * (uVar1 & 0xff)) / 100) && (DAT_1002393c < 100)) {
    DAT_1002393c = DAT_1002393c + 1;
  }
  if ((DAT_1001f158 <= DAT_1002393c) && (DAT_1001f158 = 0xff, DAT_10023ed4[0x1b2] != 0)) {
    iVar2 = 0;
    piVar3 = DAT_10023ed4;
    do {
      if ((*piVar3 == 0) || (piVar3[10] != 0)) break;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0xe;
    } while (iVar2 < 0x20);
    if (DAT_10023ed4[iVar2 * 0xe] != 0) {
      FUN_1000bd4b(iVar2,0);
      FUN_100139a5(DAT_10023ed4 + iVar2 * 0xe);
      FUN_10015e50(DAT_10023ed4 + iVar2 * 0xe,DAT_10023ed4 + 0x1b2,0x38);
      FUN_1000bd4b(iVar2,1);
      iVar5 = 0x690;
      iVar2 = 0x1e;
      do {
        if (*(int *)((int)DAT_10023ed4 + iVar5) == 0) break;
        FUN_10015e50((undefined4 *)((int)DAT_10023ed4 + iVar5 + 0x38),
                     (undefined4 *)((int)DAT_10023ed4 + iVar5),0x38);
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + -0x38;
      } while (-1 < iVar5);
      DAT_10023ed4[(iVar2 + 1) * 0xe] = 0;
      if (iVar2 == 0x1e) {
        DAT_1001f158 = 0xff;
      }
      else {
        DAT_1001f158 = (char)((int)(100 - (uint)DAT_1002393c) / (0x1f - iVar2)) + DAT_1002393c;
      }
    }
  }
  return;
}


