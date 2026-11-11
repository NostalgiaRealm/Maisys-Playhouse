
/* ==== FUN_004add8a @ 004add8a ==== 
 * signature: DWORD __fastcall FUN_004add8a(int param_1)
 * body: 004add8a-004addb2
 */

DWORD __fastcall FUN_004add8a(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  char *pcVar3;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
  if (DVar1 == 0xffffffff) {
    pcVar3 = (char *)0x0;
    DVar2 = GetLastError();
    CFileException::ThrowOsError(DVar2,pcVar3);
  }
  return DVar1;
}


