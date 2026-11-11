
/* ==== FUN_10002639 @ 10002639 ==== 
 * signature: undefined __cdecl FUN_10002639(LPCSTR param_1)
 * body: 10002639-10002677
 */

void __cdecl FUN_10002639(LPCSTR param_1)

{
  DWORD DVar1;
  
  if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
    DVar1 = lstrlenA(param_1);
    FileWrite(DAT_1001f030,param_1,DVar1);
    FileWrite(DAT_1001f030,&DAT_1001f3a4,2);
  }
  return;
}


