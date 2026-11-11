
/* ==== FUN_004089a3 @ 004089a3 ==== 
 * signature: bool __cdecl FUN_004089a3(LPCSTR param_1, undefined4 param_2, LPSTR param_3)
 * body: 004089a3-004089e4
 */

bool __cdecl FUN_004089a3(LPCSTR param_1,undefined4 param_2,LPSTR param_3)

{
  HANDLE pvVar1;
  
  pvVar1 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)(param_3 + 0x108));
  *(HANDLE *)(param_3 + 0x104) = pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    lstrcpyA(param_3,param_3 + 0x134);
    *(DWORD *)(param_3 + 0x100) = ((LPWIN32_FIND_DATAA)(param_3 + 0x108))->dwFileAttributes;
  }
  return pvVar1 == (HANDLE)0xffffffff;
}


