
/* ==== FUN_00452560 @ 00452560 ==== 
 * signature: int __stdcall FUN_00452560(void)
 * body: 00452560-0045269c
 */

int FUN_00452560(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_004e0398;
  iVar5 = 0;
  iVar1 = DAT_004e0398 * 2;
  DAT_004e0380 = DAT_004e0384;
  DAT_004e03b4 = DAT_004e0368;
  DAT_004e03a0 = DAT_004e0378;
  iVar3 = 1;
  DAT_004e1be0 = DAT_004e1be4;
  iVar4 = DAT_004e1bc8;
  if (DAT_004e1bc8 < DAT_004e1bdc) {
    do {
      iVar3 = FUN_004526a0(iVar3);
      if (iVar3 == 0) {
        if (iVar5 != 0) break;
      }
      else {
        iVar5 = 1;
      }
      iVar4 = iVar4 + 1;
      DAT_004e03a0 = DAT_004e03a0 + DAT_004e0370 * 4;
      DAT_004e1be0 = DAT_004e1be0 + DAT_004e0370;
      DAT_004e0380 = DAT_004e0380 + DAT_004e03b4;
      DAT_004e03b4 = DAT_004e03b4 + iVar1;
      iVar3 = 0;
    } while (iVar4 < DAT_004e1bdc);
  }
  DAT_004e03b4 = DAT_004e0368 + iVar2 * -2;
  DAT_004e0380 = DAT_004e0384 - DAT_004e03b4;
  DAT_004e03a0 = DAT_004e0378 + DAT_004e0370 * -4;
  DAT_004e1be0 = DAT_004e1be4 - DAT_004e0370;
  iVar4 = 1;
  iVar1 = DAT_004e1bc8;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return iVar5;
    }
    iVar4 = FUN_004526a0(iVar4);
    if (iVar4 == 0) {
      if (iVar5 != 0) {
        return iVar5;
      }
    }
    else {
      iVar5 = 1;
    }
    DAT_004e03b4 = DAT_004e03b4 + iVar2 * -2;
    DAT_004e03a0 = DAT_004e03a0 + DAT_004e0370 * -4;
    DAT_004e1be0 = DAT_004e1be0 - DAT_004e0370;
    DAT_004e0380 = DAT_004e0380 - DAT_004e03b4;
    iVar4 = 0;
  } while( true );
}


