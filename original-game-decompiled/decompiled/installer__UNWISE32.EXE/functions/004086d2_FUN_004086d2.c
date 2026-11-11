
/* ==== FUN_004086d2 @ 004086d2 ==== 
 * signature: bool __cdecl FUN_004086d2(LPCSTR param_1)
 * body: 004086d2-00408712
 */

bool __cdecl FUN_004086d2(LPCSTR param_1)

{
  BOOL BVar1;
  
  FUN_00408980(param_1,0);
  BVar1 = RemoveDirectoryA(param_1);
  if (((DAT_0041385c != 0) && (BVar1 != 0)) && (DAT_00413ccc != (code *)0x0)) {
    (*DAT_00413ccc)(0x10,1,param_1,0);
  }
  return BVar1 == 0;
}


