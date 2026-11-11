
/* ==== FUN_00472180 @ 00472180 ==== 
 * signature: undefined __fastcall FUN_00472180(int param_1)
 * body: 00472180-004721b4
 */

void __fastcall FUN_00472180(int param_1)

{
  code *pcVar1;
  int local_8;
  
  if (*(int *)(param_1 + 0x15e) != 0) {
    pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 0x15e),1,0x10,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
  }
  return;
}


