
/* ==== FUN_004526a0 @ 004526a0 ==== 
 * signature: int __cdecl FUN_004526a0(int param_1)
 * body: 004526a0-004528ed
 */

int __cdecl FUN_004526a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_004e0398;
  iVar3 = DAT_004e0398 * 2;
  if (param_1 != 0) {
    DAT_004e1bc4 = DAT_004e1bdc + -1;
    DAT_004e0374 = DAT_004e1bf0;
    DAT_004e1bd4 = 0;
    DAT_004e1bd0 = DAT_004e039c;
  }
  iVar4 = 0;
  DAT_004e0390 = DAT_004e0380;
  DAT_004e03a4 = DAT_004e0380;
  DAT_004e1bcc = DAT_004e1bd0;
  DAT_004e038c = DAT_004e03a0;
  DAT_004e0394 = DAT_004e03a0;
  DAT_004e1bec = DAT_004e1be0;
  DAT_004e03ac = DAT_004e1be0;
  iVar2 = 1;
  iVar5 = DAT_004e0374;
  if (DAT_004e0374 <= DAT_004e1bc4) {
    do {
      iVar2 = FUN_004528f0(iVar2);
      if (iVar2 == 0) {
        if (iVar4 != 0) break;
      }
      else if (iVar4 == 0) {
        if (DAT_004e0374 < iVar5) {
          DAT_004e03a0 = DAT_004e0394;
          DAT_004e1be0 = DAT_004e03ac;
          DAT_004e0380 = DAT_004e03a4;
          DAT_004e1bd0 = DAT_004e1bcc;
          DAT_004e0374 = iVar5;
        }
        iVar4 = 1;
      }
      iVar5 = iVar5 + 1;
      DAT_004e0394 = DAT_004e0394 + DAT_004e03a8 * 4;
      DAT_004e038c = DAT_004e038c + DAT_004e03a8 * 4;
      iVar2 = 0;
      DAT_004e1bec = DAT_004e1bec + DAT_004e03a8;
      DAT_004e03ac = DAT_004e03ac + DAT_004e03a8;
      DAT_004e0390 = DAT_004e0390 + DAT_004e1bcc;
      DAT_004e03a4 = DAT_004e03a4 + DAT_004e1bcc;
      DAT_004e1bcc = DAT_004e1bcc + iVar3;
    } while (iVar5 <= DAT_004e1bc4);
  }
  iVar5 = DAT_004e0374 + -1;
  DAT_004e1bcc = DAT_004e1bd0 + iVar1 * -2;
  DAT_004e0390 = DAT_004e0380 - DAT_004e1bcc;
  DAT_004e038c = DAT_004e03a0 + DAT_004e03a8 * -4;
  DAT_004e03ac = DAT_004e1be0 - DAT_004e03a8;
  iVar3 = 1;
  DAT_004e0394 = DAT_004e038c;
  DAT_004e03a4 = DAT_004e0390;
  DAT_004e1bec = DAT_004e03ac;
  if (DAT_004e1bd4 <= iVar5) {
    do {
      iVar3 = FUN_004528f0(iVar3);
      if (iVar3 == 0) {
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else if (iVar4 == 0) {
        DAT_004e03a0 = DAT_004e0394;
        DAT_004e1be0 = DAT_004e03ac;
        DAT_004e0380 = DAT_004e03a4;
        iVar4 = 1;
        DAT_004e1bd0 = DAT_004e1bcc;
        DAT_004e0374 = iVar5;
      }
      iVar5 = iVar5 + -1;
      DAT_004e1bcc = DAT_004e1bcc + iVar1 * -2;
      DAT_004e038c = DAT_004e038c + DAT_004e03a8 * -4;
      DAT_004e03a4 = DAT_004e03a4 - DAT_004e1bcc;
      DAT_004e0394 = DAT_004e0394 + DAT_004e03a8 * -4;
      iVar3 = 0;
      DAT_004e1bec = DAT_004e1bec - DAT_004e03a8;
      DAT_004e03ac = DAT_004e03ac - DAT_004e03a8;
      DAT_004e0390 = DAT_004e0390 - DAT_004e1bcc;
    } while (DAT_004e1bd4 <= iVar5);
  }
  return iVar4;
}


