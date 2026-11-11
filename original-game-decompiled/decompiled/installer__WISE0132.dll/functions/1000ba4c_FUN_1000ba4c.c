
/* ==== FUN_1000ba4c @ 1000ba4c ==== 
 * signature: undefined __cdecl FUN_1000ba4c(HANDLE param_1)
 * body: 1000ba4c-1000ba70
 */

void __cdecl FUN_1000ba4c(HANDLE param_1)

{
  DWORD DVar1;
  
  do {
    FUN_10012db9();
    DVar1 = WaitForSingleObject(param_1,100);
  } while (DVar1 == 0x102);
  return;
}


