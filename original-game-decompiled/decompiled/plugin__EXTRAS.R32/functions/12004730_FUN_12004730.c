
/* ==== FUN_12004730 @ 12004730 ==== 
 * signature: undefined4 __cdecl FUN_12004730(int param_1, LPDWORD param_2, LPVOID param_3)
 * body: 12004730-1200478f
 */

undefined4 __cdecl FUN_12004730(int param_1,LPDWORD param_2,LPVOID param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 0x6e),*(LONG *)(param_1 + 0x68),(PLONG)0x0,0);
  if (DVar1 == 0xffffffff) {
    return 0xa0003;
  }
  BVar2 = ReadFile(*(HANDLE *)(param_1 + 0x6e),param_3,*param_2,param_2,(LPOVERLAPPED)0x0);
  if (BVar2 != 0) {
    if (*param_2 == 0) {
      return 0xa0006;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *param_2;
    return 0;
  }
  return 0xa0003;
}


