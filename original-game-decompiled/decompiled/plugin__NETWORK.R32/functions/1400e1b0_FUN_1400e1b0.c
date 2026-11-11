
/* ==== FUN_1400e1b0 @ 1400e1b0 ==== 
 * signature: undefined4 __cdecl FUN_1400e1b0(int param_1)
 * body: 1400e1b0-1400e1e2
 */

undefined4 __cdecl FUN_1400e1b0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,1,param_1);
  return 0;
}


