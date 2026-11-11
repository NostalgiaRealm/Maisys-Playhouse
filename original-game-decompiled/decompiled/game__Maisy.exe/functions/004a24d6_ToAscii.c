
/* ==== USER32.DLL::ToAscii @ 004a24d6 ==== 
 * signature: int __stdcall ToAscii(UINT uVirtKey, UINT uScanCode, BYTE * lpKeyState, LPWORD lpChar, UINT uFlags)
 * body: 004a24d6-004a24db
 * thunk to: USER32.DLL::ToAscii
 */

int ToAscii(UINT uVirtKey,UINT uScanCode,BYTE *lpKeyState,LPWORD lpChar,UINT uFlags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a24d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ToAscii(uVirtKey,uScanCode,lpKeyState,lpChar,uFlags);
  return iVar1;
}


