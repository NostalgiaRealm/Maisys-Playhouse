
/* ==== FUN_004add5b @ 004add5b ==== 
 * signature: DWORD __thiscall FUN_004add5b(void * this, LONG param_1, DWORD param_2)
 * body: 004add5b-004add89
 */

DWORD __thiscall FUN_004add5b(void *this,LONG param_1,DWORD param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  char *pcVar3;
  
  DVar1 = SetFilePointer(*(HANDLE *)((int)this + 4),param_1,(PLONG)0x0,param_2);
  if (DVar1 == 0xffffffff) {
    pcVar3 = (char *)0x0;
    DVar2 = GetLastError();
    CFileException::ThrowOsError(DVar2,pcVar3);
  }
  return DVar1;
}


