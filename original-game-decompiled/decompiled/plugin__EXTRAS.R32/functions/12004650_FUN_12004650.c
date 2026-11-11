
/* ==== FUN_12004650 @ 12004650 ==== 
 * signature: undefined4 __cdecl FUN_12004650(int param_1, LPCSTR param_2)
 * body: 12004650-1200472f
 */

undefined4 __cdecl FUN_12004650(int param_1,LPCSTR param_2)

{
  int iVar1;
  DWORD DVar2;
  HANDLE local_4;
  
  iVar1 = *(int *)(param_1 + 0x5e);
  if (iVar1 == 0) {
    local_4 = CreateFileA(param_2,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  }
  else if (iVar1 == 1) {
    local_4 = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  }
  else if (iVar1 == 2) {
    local_4 = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  }
  if (local_4 != (HANDLE)0xffffffff) {
    *(undefined1 *)(param_1 + 0x6c) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(HANDLE *)(param_1 + 0x6e) = local_4;
    *(char *)(param_1 + 0x6d) = '\x01' - (*(int *)(param_1 + 0x5e) == 0);
    return 0;
  }
  if (*(int *)(param_1 + 0x5e) != 0) {
    return 0xa0005;
  }
  DVar2 = GetLastError();
  if ((DVar2 != 2) && (DVar2 != 0x10b)) {
    return 0xa0004;
  }
  return 0xa0001;
}


