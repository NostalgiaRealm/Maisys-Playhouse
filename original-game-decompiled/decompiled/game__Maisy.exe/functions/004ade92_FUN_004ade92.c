
/* ==== FUN_004ade92 @ 004ade92 ==== 
 * signature: undefined __thiscall FUN_004ade92(void * this, undefined4 param_1)
 * body: 004ade92-004adec0
 */

void __thiscall FUN_004ade92(void *this,undefined4 param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  
  (**(code **)(*(int *)this + 0x30))(param_1,0);
  BVar1 = SetEndOfFile(*(HANDLE *)((int)this + 4));
  if (BVar1 == 0) {
    pcVar3 = (char *)0x0;
    DVar2 = GetLastError();
    CFileException::ThrowOsError(DVar2,pcVar3);
  }
  return;
}


