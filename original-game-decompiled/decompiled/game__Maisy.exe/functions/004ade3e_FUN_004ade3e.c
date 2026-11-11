
/* ==== FUN_004ade3e @ 004ade3e ==== 
 * signature: undefined __thiscall FUN_004ade3e(void * this, DWORD param_1, DWORD param_2)
 * body: 004ade3e-004ade67
 */

void __thiscall FUN_004ade3e(void *this,DWORD param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  
  BVar1 = LockFile(*(HANDLE *)((int)this + 4),param_1,0,param_2,0);
  if (BVar1 == 0) {
    pcVar3 = (char *)0x0;
    DVar2 = GetLastError();
    CFileException::ThrowOsError(DVar2,pcVar3);
  }
  return;
}


