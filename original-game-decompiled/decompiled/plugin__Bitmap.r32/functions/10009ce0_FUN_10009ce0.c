
/* ==== FUN_10009ce0 @ 10009ce0 ==== 
 * signature: undefined __stdcall FUN_10009ce0(void)
 * body: 10009ce0-10009d08
 */

void FUN_10009ce0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_10009c90();
  return;
}


