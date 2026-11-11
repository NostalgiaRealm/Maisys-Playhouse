
/* ==== FUN_1400a150 @ 1400a150 ==== 
 * signature: undefined4 __cdecl FUN_1400a150(int param_1)
 * body: 1400a150-1400a182
 */

undefined4 __cdecl FUN_1400a150(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,2,param_1);
  return 0;
}


