
/* ==== FUN_14008990 @ 14008990 ==== 
 * signature: undefined __cdecl FUN_14008990(undefined4 param_1, undefined4 param_2)
 * body: 14008990-140089d6
 */

void __cdecl FUN_14008990(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1c,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,param_2,&stack0x0000000c);
  return;
}


