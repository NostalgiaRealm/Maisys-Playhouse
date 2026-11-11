
/* ==== FUN_1000b5ca @ 1000b5ca ==== 
 * signature: undefined __cdecl FUN_1000b5ca(LPCSTR param_1)
 * body: 1000b5ca-1000b61d
 */

void __cdecl FUN_1000b5ca(LPCSTR param_1)

{
  char cVar1;
  LPCSTR lpsz;
  BOOL BVar2;
  
  lpsz = FUN_100147fa(param_1,0x5c);
  if (lpsz != (LPCSTR)0x0) {
    while (cVar1 = *lpsz, cVar1 != '\0') {
      do {
        if (cVar1 == '\\') break;
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      } while (cVar1 != '\0');
      if (*lpsz == '\\') {
        *lpsz = '\0';
        BVar2 = CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
        if (BVar2 != 0) {
          FUN_1000b61e(param_1);
        }
        *lpsz = '\\';
        lpsz = lpsz + 1;
      }
    }
  }
  return;
}


