
/* ==== FUN_1000b61e @ 1000b61e ==== 
 * signature: undefined __cdecl FUN_1000b61e(undefined4 param_1)
 * body: 1000b61e-1000b672
 */

void __cdecl FUN_1000b61e(undefined4 param_1)

{
  DWORD DVar1;
  CHAR local_104 [256];
  
  if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
    wsprintfA(local_104,s_Made_Dir___s_1001fa04,param_1);
    DVar1 = lstrlenA(local_104);
    FileWrite(DAT_1001f030,local_104,DVar1);
  }
  return;
}


