
/* ==== FUN_1001265f @ 1001265f ==== 
 * signature: undefined4 __cdecl FUN_1001265f(byte * param_1)
 * body: 1001265f-1001273b
 */

undefined4 __cdecl FUN_1001265f(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (((byte)DAT_10024198 & 1) == 0) {
    iVar1 = 0;
    if (*DAT_10023ed8 != '\0') {
      while (param_1[iVar1] != 0) {
        uVar4 = FUN_10015b60((uint)(byte)~DAT_10023ed8[iVar1]);
        uVar5 = FUN_10015b60((int)(char)param_1[iVar1]);
        if ((uVar4 != uVar5) || (iVar1 = iVar1 + 1, DAT_10023ed8[iVar1] == '\0')) break;
      }
    }
    if ((DAT_10023ed8[iVar1] == '\0') && (param_1[iVar1] == 0)) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_10016190(param_1);
    if ((DAT_100240bc <= iVar1) && (iVar1 <= DAT_10023f34)) {
      iVar2 = (DAT_10023f34 - DAT_100240bc) + 1;
      if (((byte)DAT_10024198 & 2) != 0) {
        iVar2 = iVar2 * 2;
      }
      iVar2 = iVar2 / DAT_10023f4c;
      DAT_10024040 = iVar2 + DAT_100240bc;
      iVar3 = DAT_10023f34;
      iVar6 = DAT_100240bc;
      while (iVar6 <= iVar3) {
        if (iVar6 == iVar1) {
          return 0;
        }
        if (((byte)DAT_10024198 & 2) == 0) {
          iVar6 = iVar6 + iVar2;
        }
        else {
          iVar3 = FUN_1001273c(iVar2);
          iVar6 = iVar6 + iVar3;
          iVar3 = DAT_10023f34;
        }
      }
    }
  }
  return 1;
}


