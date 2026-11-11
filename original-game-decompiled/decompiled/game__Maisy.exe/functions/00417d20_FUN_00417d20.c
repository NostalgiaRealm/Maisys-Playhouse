
/* ==== FUN_00417d20 @ 00417d20 ==== 
 * signature: undefined __fastcall FUN_00417d20(int param_1)
 * body: 00417d20-00417d5d
 */

void __fastcall FUN_00417d20(int param_1)

{
  code *pcVar1;
  int local_8;
  
  if (*(int *)(param_1 + 0x166) != 0) {
    pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 0x166),1,6,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
  }
  FUN_0040dfd0();
  return;
}


