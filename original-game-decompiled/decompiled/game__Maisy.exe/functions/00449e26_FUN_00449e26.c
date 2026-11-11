
/* ==== FUN_00449e26 @ 00449e26 ==== 
 * signature: undefined __fastcall FUN_00449e26(int param_1, char * param_2)
 * body: 00449e26-00449e27
 */

void __fastcall FUN_00449e26(int param_1,char *param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  char unaff_BL;
  
  *param_2 = *param_2 + unaff_BL;
  *(char *)(param_1 + 0x449d) = *(char *)(param_1 + 0x449d) + (char)((uint)in_EAX >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


