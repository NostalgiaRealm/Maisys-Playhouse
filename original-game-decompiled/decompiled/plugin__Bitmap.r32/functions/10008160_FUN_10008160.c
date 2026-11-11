
/* ==== FUN_10008160 @ 10008160 ==== 
 * signature: int __cdecl FUN_10008160(int param_1)
 * body: 10008160-1000842b
 */

int __cdecl FUN_10008160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_10016ed0;
  iVar5 = DAT_10016ed0 * 2;
  iVar3 = 0;
  if (param_1 != 0) {
    DAT_10016ef8 = DAT_10016f10 + -1;
    DAT_10016eac = DAT_10016f24;
    DAT_10016f08 = 0;
    DAT_10016f04 = DAT_10016ed4;
  }
  DAT_10016f20 = DAT_10016f14;
  DAT_10016ee4 = DAT_10016f14;
  DAT_10016f00 = DAT_10016f04;
  DAT_10016ec8 = DAT_10016eb8;
  DAT_10016edc = DAT_10016eb8;
  DAT_10016ec4 = DAT_10016ed8;
  DAT_10016ecc = DAT_10016ed8;
  iVar2 = 1;
  iVar4 = DAT_10016eac;
  if (DAT_10016eac <= DAT_10016ef8) {
    do {
      iVar2 = FUN_10008430(iVar2);
      if (iVar2 == 0) {
        if (iVar3 != 0) break;
      }
      else if (iVar3 == 0) {
        if (DAT_10016eac < iVar4) {
          DAT_10016ed8 = DAT_10016ecc;
          DAT_10016f14 = DAT_10016ee4;
          DAT_10016eb8 = DAT_10016edc;
          DAT_10016f04 = DAT_10016f00;
          DAT_10016eac = iVar4;
        }
        iVar3 = 1;
      }
      iVar4 = iVar4 + 1;
      DAT_10016ec4 = DAT_10016ec4 + DAT_10016ee0 * 4;
      DAT_10016ecc = DAT_10016ecc + DAT_10016ee0 * 4;
      DAT_10016f20 = DAT_10016f20 + DAT_10016ee0;
      DAT_10016ee4 = DAT_10016ee4 + DAT_10016ee0;
      DAT_10016ec8 = DAT_10016ec8 + DAT_10016f00;
      DAT_10016edc = DAT_10016edc + DAT_10016f00;
      DAT_10016f00 = DAT_10016f00 + iVar5;
      iVar2 = 0;
    } while (iVar4 <= DAT_10016ef8);
  }
  iVar5 = DAT_10016eac + -1;
  DAT_10016f00 = DAT_10016f04 + iVar1 * -2;
  DAT_10016ec8 = DAT_10016eb8 - DAT_10016f00;
  DAT_10016ec4 = DAT_10016ed8 + DAT_10016ee0 * -4;
  DAT_10016ee4 = DAT_10016f14 - DAT_10016ee0;
  iVar4 = 1;
  DAT_10016ecc = DAT_10016ec4;
  DAT_10016edc = DAT_10016ec8;
  DAT_10016f20 = DAT_10016ee4;
  if (DAT_10016f08 <= iVar5) {
    do {
      iVar4 = FUN_10008430(iVar4);
      if (iVar4 == 0) {
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      else if (iVar3 == 0) {
        DAT_10016ed8 = DAT_10016ecc;
        DAT_10016f14 = DAT_10016ee4;
        DAT_10016eb8 = DAT_10016edc;
        DAT_10016f04 = DAT_10016f00;
        iVar3 = 1;
        DAT_10016eac = iVar5;
      }
      DAT_10016f00 = DAT_10016f00 + iVar1 * -2;
      iVar5 = iVar5 + -1;
      DAT_10016ec4 = DAT_10016ec4 + DAT_10016ee0 * -4;
      DAT_10016ecc = DAT_10016ecc + DAT_10016ee0 * -4;
      DAT_10016f20 = DAT_10016f20 - DAT_10016ee0;
      DAT_10016ee4 = DAT_10016ee4 - DAT_10016ee0;
      DAT_10016ec8 = DAT_10016ec8 - DAT_10016f00;
      DAT_10016edc = DAT_10016edc - DAT_10016f00;
      iVar4 = 0;
    } while (DAT_10016f08 <= iVar5);
  }
  return iVar3;
}


