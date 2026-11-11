
/* ==== FUN_10014dc6 @ 10014dc6 ==== 
 * signature: bool __stdcall FUN_10014dc6(void)
 * body: 10014dc6-10014e22
 */

bool FUN_10014dc6(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_10023920;
  iVar2 = 1;
  do {
    if (cVar1 == '\r') break;
    FUN_10014d70();
    cVar1 = *DAT_10023920;
    if ((cVar1 == '\x03') || ((cVar1 == '\x04' && (iVar2 == 1)))) {
      iVar2 = iVar2 + -1;
    }
    if ((((cVar1 == '\x06') && ((DAT_10023920[1] & 1U) != 0)) ||
        ((cVar1 == '\a' && (1 < (DAT_10023920[1] & 3U))))) || (cVar1 == '\x02')) {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 != 0);
  return *DAT_10023920 == '\r';
}


