
/* ==== FUN_0040ad00 @ 0040ad00 ==== 
 * signature: undefined4 __cdecl FUN_0040ad00(LPCSTR param_1, LPCSTR param_2)
 * body: 0040ad00-0040ad31
 */

undefined4 __cdecl FUN_0040ad00(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_0040b040(uVar2);
    return 0xffffffff;
  }
  return 0;
}


