
/* ==== FUN_00472770 @ 00472770 ==== 
 * signature: undefined __fastcall FUN_00472770(int param_1)
 * body: 00472770-004727a2
 */

void __fastcall FUN_00472770(int param_1)

{
  code *pcVar1;
  int local_8;
  
  if (*(int *)(param_1 + 0x15e) != 0) {
    pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 0x15e),1,7,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
  }
  return;
}


