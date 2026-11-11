
/* ==== FUN_12004790 @ 12004790 ==== 
 * signature: undefined4 __cdecl FUN_12004790(int param_1, DWORD param_2, LPCVOID param_3)
 * body: 12004790-120047f0
 */

undefined4 __cdecl FUN_12004790(int param_1,DWORD param_2,LPCVOID param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  
  if (*(char *)(param_1 + 0x6d) == '\0') {
    return 0xa0002;
  }
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0x6e),*(LONG *)(param_1 + 0x68),(PLONG)0x0,0);
  if (DVar1 == 0xffffffff) {
    return 0xa0002;
  }
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 0x6e),param_3,param_2,&param_2,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    return 0xa0002;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_2;
  return 0;
}


