
/* ==== FUN_14009f00 @ 14009f00 ==== 
 * signature: undefined4 __cdecl FUN_14009f00(int param_1)
 * body: 14009f00-14009f42
 */

undefined4 __cdecl FUN_14009f00(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,param_1 + 10);
  return 0;
}


