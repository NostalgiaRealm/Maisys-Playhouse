
/* ==== FUN_1100e860 @ 1100e860 ==== 
 * signature: int __cdecl FUN_1100e860(int param_1)
 * body: 1100e860-1100eab5
 */

int __cdecl FUN_1100e860(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_11037f90;
  iVar3 = DAT_11037f90 * 2;
  if (param_1 != 0) {
    DAT_110397bc = DAT_110397d4 + -1;
    DAT_11037f6c = DAT_110397e8;
    DAT_110397cc = 0;
    DAT_110397c8 = DAT_11037f94;
  }
  iVar4 = 0;
  DAT_11037f88 = DAT_11037f78;
  DAT_11037f9c = DAT_11037f78;
  DAT_110397c4 = DAT_110397c8;
  DAT_11037f84 = DAT_11037f98;
  DAT_11037f8c = DAT_11037f98;
  DAT_110397e4 = DAT_110397d8;
  DAT_11037fa4 = DAT_110397d8;
  iVar2 = 1;
  iVar5 = DAT_11037f6c;
  if (DAT_11037f6c <= DAT_110397bc) {
    do {
      iVar2 = FUN_1100eac0(iVar2);
      if (iVar2 == 0) {
        if (iVar4 != 0) break;
      }
      else if (iVar4 == 0) {
        if (DAT_11037f6c < iVar5) {
          DAT_11037f98 = DAT_11037f8c;
          DAT_110397d8 = DAT_11037fa4;
          DAT_11037f78 = DAT_11037f9c;
          DAT_110397c8 = DAT_110397c4;
          DAT_11037f6c = iVar5;
        }
        iVar4 = 1;
      }
      iVar5 = iVar5 + 1;
      DAT_11037f8c = DAT_11037f8c + DAT_11037fa0 * 4;
      DAT_11037f9c = DAT_11037f9c + DAT_110397c4;
      DAT_11037f84 = DAT_11037f84 + DAT_11037fa0 * 4;
      iVar2 = 0;
      DAT_110397e4 = DAT_110397e4 + DAT_11037fa0;
      DAT_11037fa4 = DAT_11037fa4 + DAT_11037fa0;
      DAT_11037f88 = DAT_11037f88 + DAT_110397c4;
      DAT_110397c4 = DAT_110397c4 + iVar3;
    } while (iVar5 <= DAT_110397bc);
  }
  iVar5 = DAT_11037f6c + -1;
  DAT_110397c4 = DAT_110397c8 + iVar1 * -2;
  DAT_11037f88 = DAT_11037f78 - DAT_110397c4;
  DAT_11037f84 = DAT_11037f98 + DAT_11037fa0 * -4;
  DAT_11037fa4 = DAT_110397d8 - DAT_11037fa0;
  iVar3 = 1;
  DAT_11037f8c = DAT_11037f84;
  DAT_11037f9c = DAT_11037f88;
  DAT_110397e4 = DAT_11037fa4;
  if (DAT_110397cc <= iVar5) {
    do {
      iVar3 = FUN_1100eac0(iVar3);
      if (iVar3 == 0) {
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else if (iVar4 == 0) {
        iVar4 = 1;
        DAT_11037f98 = DAT_11037f8c;
        DAT_110397d8 = DAT_11037fa4;
        DAT_11037f78 = DAT_11037f9c;
        DAT_110397c8 = DAT_110397c4;
        DAT_11037f6c = iVar5;
      }
      iVar5 = iVar5 + -1;
      DAT_11037f8c = DAT_11037f8c + DAT_11037fa0 * -4;
      DAT_110397c4 = DAT_110397c4 + iVar1 * -2;
      DAT_11037f9c = DAT_11037f9c - DAT_110397c4;
      DAT_11037f84 = DAT_11037f84 + DAT_11037fa0 * -4;
      iVar3 = 0;
      DAT_110397e4 = DAT_110397e4 - DAT_11037fa0;
      DAT_11037fa4 = DAT_11037fa4 - DAT_11037fa0;
      DAT_11037f88 = DAT_11037f88 - DAT_110397c4;
    } while (DAT_110397cc <= iVar5);
  }
  return iVar4;
}


