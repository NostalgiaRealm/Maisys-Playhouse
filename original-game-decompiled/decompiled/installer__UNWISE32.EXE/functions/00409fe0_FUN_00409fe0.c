
/* ==== FUN_00409fe0 @ 00409fe0 ==== 
 * signature: undefined4 __cdecl FUN_00409fe0(LPCSTR param_1)
 * body: 00409fe0-0040a078
 */

undefined4 __cdecl FUN_00409fe0(LPCSTR param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  CHAR local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  uint local_108 [66];
  
  BVar2 = SetCurrentDirectoryA(param_1);
  if (BVar2 != 0) {
    DVar3 = GetCurrentDirectoryA(0x105,(LPSTR)local_108);
    if (DVar3 != 0) {
      cVar1 = (char)local_108[0];
      if (((cVar1 == '\\') || (cVar1 == '/')) && (cVar1 == (char)(local_108[0] >> 8))) {
        return 0;
      }
      local_10c = '=';
      uVar4 = FUN_0040b0b0(local_108[0] & 0xff);
      local_10b = (undefined1)uVar4;
      local_10a = 0x3a;
      local_109 = 0;
      BVar2 = SetEnvironmentVariableA(&local_10c,(LPCSTR)local_108);
      if (BVar2 != 0) {
        return 0;
      }
    }
  }
  DVar3 = GetLastError();
  FUN_0040b040(DVar3);
  return 0xffffffff;
}


