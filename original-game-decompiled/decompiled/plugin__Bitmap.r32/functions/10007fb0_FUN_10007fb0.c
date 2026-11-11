
/* ==== FUN_10007fb0 @ 10007fb0 ==== 
 * signature: int __stdcall FUN_10007fb0(void)
 * body: 10007fb0-1000815f
 */

int FUN_10007fb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar2 = DAT_10016ed0;
  iVar1 = DAT_10016ed0 * 2;
  DAT_10016f14 = DAT_10016f18;
  local_4 = 0;
  DAT_10016eb8 = DAT_10016ebc;
  DAT_10016eec = DAT_10016ea0;
  DAT_10016ed8 = DAT_10016eb0;
  iVar3 = 1;
  iVar4 = DAT_10016efc;
  if (DAT_10016efc < DAT_10016f10) {
    do {
      iVar3 = FUN_10008160(iVar3);
      if (iVar3 == 0) {
        if (local_4 != 0) break;
      }
      else {
        local_4 = 1;
      }
      iVar4 = iVar4 + 1;
      DAT_10016ed8 = DAT_10016ed8 + DAT_10016ea8 * 4;
      DAT_10016f14 = DAT_10016f14 + DAT_10016ea8;
      DAT_10016eb8 = DAT_10016eb8 + DAT_10016eec;
      DAT_10016eec = DAT_10016eec + iVar1;
      iVar3 = 0;
    } while (iVar4 < DAT_10016f10);
  }
  DAT_10016eec = DAT_10016ea0 + iVar2 * -2;
  DAT_10016eb8 = DAT_10016ebc - DAT_10016eec;
  DAT_10016ed8 = DAT_10016eb0 + DAT_10016ea8 * -4;
  DAT_10016f14 = DAT_10016f18 - DAT_10016ea8;
  iVar4 = 1;
  iVar1 = DAT_10016efc;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return local_4;
    }
    iVar4 = FUN_10008160(iVar4);
    if (iVar4 == 0) {
      if (local_4 != 0) {
        return local_4;
      }
    }
    else {
      local_4 = 1;
    }
    DAT_10016ed8 = DAT_10016ed8 + DAT_10016ea8 * -4;
    DAT_10016f14 = DAT_10016f14 - DAT_10016ea8;
    DAT_10016eec = DAT_10016eec + iVar2 * -2;
    DAT_10016eb8 = DAT_10016eb8 - DAT_10016eec;
    iVar4 = 0;
  } while( true );
}


