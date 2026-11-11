
/* ==== FUN_12001f90 @ 12001f90 ==== 
 * signature: undefined1 __cdecl FUN_12001f90(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 12001f90-12001fd8
 */

undefined1 __cdecl
FUN_12001f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 local_5;
  int local_4;
  
  local_5 = 0;
  pcVar1 = (code *)FUN_12027370(param_1,0,0x2d,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_2,param_3,param_4,&local_5);
  return local_5;
}


