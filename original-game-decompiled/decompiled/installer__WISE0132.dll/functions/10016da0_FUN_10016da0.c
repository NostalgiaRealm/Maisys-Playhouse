
/* ==== FUN_10016da0 @ 10016da0 ==== 
 * signature: undefined __stdcall FUN_10016da0(void)
 * body: 10016da0-10016e11
 */

void FUN_10016da0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100200e8;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1002012c)) && (ppuVar1 != &PTR_DAT_1002011c)) &&
       ((ppuVar1 != &PTR_DAT_1002010c && (ppuVar1 != &PTR_DAT_100200ec)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10015a50(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100201a8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002010c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002011c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002012c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100200ec);
  return;
}


