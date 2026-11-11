
/* ==== FUN_100121d4 @ 100121d4 ==== 
 * signature: undefined __cdecl FUN_100121d4(LPSTR param_1)
 * body: 100121d4-10012219
 */

void __cdecl FUN_100121d4(LPSTR param_1)

{
  BOOL BVar1;
  
  if (DAT_100241e8 != 0) {
    BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x104),(LPWIN32_FIND_DATAA)(param_1 + 0x108));
    if (BVar1 != 0) {
      lstrcpyA(param_1,param_1 + 0x134);
      *(DWORD *)(param_1 + 0x100) = ((LPWIN32_FIND_DATAA)(param_1 + 0x108))->dwFileAttributes;
    }
  }
  return;
}


