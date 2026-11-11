
/* ==== FUN_1100e710 @ 1100e710 ==== 
 * signature: int __stdcall FUN_1100e710(void)
 * body: 1100e710-1100e859
 */

int FUN_1100e710(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_11037f90;
  iVar5 = 0;
  iVar1 = DAT_11037f90 * 2;
  DAT_11037f78 = DAT_11037f7c;
  DAT_11037fac = DAT_11037f60;
  DAT_11037f98 = DAT_11037f70;
  DAT_110397d8 = DAT_110397dc;
  iVar3 = 1;
  iVar4 = DAT_110397c0;
  if (DAT_110397c0 < DAT_110397d4) {
    do {
      iVar3 = FUN_1100e860(iVar3);
      if (iVar3 == 0) {
        if (iVar5 != 0) break;
      }
      else {
        iVar5 = 1;
      }
      iVar4 = iVar4 + 1;
      DAT_11037f98 = DAT_11037f98 + DAT_11037f68 * 4;
      DAT_110397d8 = DAT_110397d8 + DAT_11037f68;
      iVar3 = 0;
      DAT_11037f78 = DAT_11037f78 + DAT_11037fac;
      DAT_11037fac = DAT_11037fac + iVar1;
    } while (iVar4 < DAT_110397d4);
  }
  DAT_11037fac = DAT_11037f60 + iVar2 * -2;
  DAT_11037f78 = DAT_11037f7c - DAT_11037fac;
  DAT_11037f98 = DAT_11037f70 + DAT_11037f68 * -4;
  DAT_110397d8 = DAT_110397dc - DAT_11037f68;
  iVar4 = 1;
  iVar1 = DAT_110397c0;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return iVar5;
    }
    iVar4 = FUN_1100e860(iVar4);
    if (iVar4 == 0) {
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    else {
      iVar5 = 1;
    }
    DAT_11037fac = DAT_11037fac + iVar2 * -2;
    DAT_11037f98 = DAT_11037f98 + DAT_11037f68 * -4;
    DAT_11037f78 = DAT_11037f78 - DAT_11037fac;
    DAT_110397d8 = DAT_110397d8 - DAT_11037f68;
    iVar4 = 0;
  } while( true );
}


