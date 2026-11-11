
/* ==== FUN_1000a2a0 @ 1000a2a0 ==== 
 * signature: undefined __stdcall FUN_1000a2a0(void)
 * body: 1000a2a0-1000a311
 */

void FUN_1000a2a0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10013230;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10013274)) && (ppuVar1 != &PTR_DAT_10013264)) &&
       ((ppuVar1 != &PTR_DAT_10013254 && (ppuVar1 != &PTR_DAT_10013234)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000bff0(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100132f0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013254);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013264);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013274);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10013234);
  return;
}


