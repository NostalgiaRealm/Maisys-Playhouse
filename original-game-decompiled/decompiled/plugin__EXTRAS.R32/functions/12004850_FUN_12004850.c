
/* ==== FUN_12004850 @ 12004850 ==== 
 * signature: undefined4 __cdecl FUN_12004850(int param_1, DWORD param_2)
 * body: 12004850-120048b4
 */

undefined4 __cdecl FUN_12004850(int param_1,DWORD param_2)

{
  DWORD local_4;
  
  FUN_12004820(param_1,&local_4);
  if (*(char *)(param_1 + 0x6d) != '\0') {
    if ((int)param_2 <= (int)local_4) {
      if (local_4 == param_2) {
        return 0;
      }
      SetFilePointer(*(HANDLE *)(param_1 + 0x6e),param_2,(PLONG)0x0,0);
      SetEndOfFile(*(HANDLE *)(param_1 + 0x6e));
      if ((int)param_2 < *(int *)(param_1 + 0x68)) {
        *(DWORD *)(param_1 + 0x68) = param_2;
      }
      return 0;
    }
  }
  return 0xa0002;
}


