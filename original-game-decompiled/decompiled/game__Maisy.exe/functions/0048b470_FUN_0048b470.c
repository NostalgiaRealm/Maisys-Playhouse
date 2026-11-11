
/* ==== FUN_0048b470 @ 0048b470 ==== 
 * signature: undefined __cdecl FUN_0048b470(undefined4 param_1, undefined4 param_2)
 * body: 0048b470-0048b4ad
 */

void __cdecl FUN_0048b470(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0x1c,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,param_1,param_2,&stack0x0000000c);
  return;
}


