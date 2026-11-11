
/* ==== FUN_10009ea4 @ 10009ea4 ==== 
 * signature: undefined __stdcall FUN_10009ea4(void)
 * body: 10009ea4-10009efe
 */

void FUN_10009ea4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *DAT_10023310;
  if (cVar1 == '\x06') {
    iVar3 = DAT_10024020 * 0xc + -0xc;
  }
  else {
    iVar3 = 0;
  }
  DAT_10023310 = DAT_10023310 + (byte)(&DAT_1001f0c8)[cVar1];
  for (iVar2 = (uint)(byte)(&DAT_1001f108)[cVar1] * DAT_10024020 +
               (uint)(byte)(&DAT_1001f0e8)[cVar1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_1000b963();
  }
  DAT_10023310 = DAT_10023310 + iVar3;
  return;
}


