
/* ==== FUN_1000a082 @ 1000a082 ==== 
 * signature: bool __stdcall FUN_1000a082(void)
 * body: 1000a082-1000a0de
 */

bool FUN_1000a082(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_10023310;
  iVar2 = 1;
  do {
    if (cVar1 == '?') break;
    FUN_10009ea4();
    cVar1 = *DAT_10023310;
    if ((cVar1 == '\b') || ((cVar1 == '\r' && (iVar2 == 1)))) {
      iVar2 = iVar2 + -1;
    }
    if ((((cVar1 == '\x03') && ((DAT_10023310[1] & 1U) != 0)) ||
        ((cVar1 == '\t' && (1 < (DAT_10023310[1] & 3U))))) || (cVar1 == '\f')) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return *DAT_10023310 == '?';
}


