
/* ==== FUN_004addb3 @ 004addb3 ==== 
 * signature: undefined __fastcall FUN_004addb3(int param_1)
 * body: 004addb3-004addd4
 */

void __fastcall FUN_004addb3(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    BVar1 = FlushFileBuffers(*(HANDLE *)(param_1 + 4));
    if (BVar1 == 0) {
      pcVar3 = (char *)0x0;
      DVar2 = GetLastError();
      CFileException::ThrowOsError(DVar2,pcVar3);
    }
  }
  return;
}


