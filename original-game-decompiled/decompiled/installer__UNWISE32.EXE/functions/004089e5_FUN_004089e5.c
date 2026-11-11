
/* ==== FUN_004089e5 @ 004089e5 ==== 
 * signature: bool __cdecl FUN_004089e5(LPSTR param_1)
 * body: 004089e5-00408a21
 */

bool __cdecl FUN_004089e5(LPSTR param_1)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x104),(LPWIN32_FIND_DATAA)(param_1 + 0x108));
  if (BVar1 != 0) {
    lstrcpyA(param_1,param_1 + 0x134);
    *(DWORD *)(param_1 + 0x100) = ((LPWIN32_FIND_DATAA)(param_1 + 0x108))->dwFileAttributes;
  }
  return BVar1 == 0;
}


