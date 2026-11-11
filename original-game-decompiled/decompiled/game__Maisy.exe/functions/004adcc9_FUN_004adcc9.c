
/* ==== FUN_004adcc9 @ 004adcc9 ==== 
 * signature: DWORD __thiscall FUN_004adcc9(void * this, LPVOID param_1, DWORD param_2)
 * body: 004adcc9-004add0a
 */

DWORD __thiscall FUN_004adcc9(void *this,LPVOID param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  DWORD local_8;
  
  if (param_2 == 0) {
    local_8 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)((int)this + 4),param_1,param_2,&local_8,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      pcVar3 = (char *)0x0;
      DVar2 = GetLastError();
      CFileException::ThrowOsError(DVar2,pcVar3);
    }
  }
  return local_8;
}


