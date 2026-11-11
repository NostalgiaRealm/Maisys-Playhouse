
/* ==== FUN_00408980 @ 00408980 ==== 
 * signature: bool __cdecl FUN_00408980(LPCSTR param_1, DWORD param_2)
 * body: 00408980-004089a2
 */

bool __cdecl FUN_00408980(LPCSTR param_1,DWORD param_2)

{
  BOOL BVar1;
  
  if (param_2 == 0) {
    param_2 = 0x80;
  }
  BVar1 = SetFileAttributesA(param_1,param_2);
  return (bool)('\x01' - (BVar1 != 0));
}


