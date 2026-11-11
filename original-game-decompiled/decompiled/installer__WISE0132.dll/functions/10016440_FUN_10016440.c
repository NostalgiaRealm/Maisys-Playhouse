
/* ==== FUN_10016440 @ 10016440 ==== 
 * signature: undefined4 __cdecl FUN_10016440(uint param_1)
 * body: 10016440-1001647f
 */

undefined4 __cdecl FUN_10016440(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  cVar1 = (char)param_1;
  param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
  UVar2 = GetDriveTypeA((LPCSTR)&param_1);
  if ((UVar2 != 0) && (UVar2 != 1)) {
    return 1;
  }
  return 0;
}


