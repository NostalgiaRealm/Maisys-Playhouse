
/* ==== FUN_00475e85 @ 00475e85 ==== 
 * signature: undefined __fastcall FUN_00475e85(char * param_1, int param_2)
 * body: 00475e85-00475e87
 */

void __fastcall FUN_00475e85(char *param_1,int param_2)

{
  code *pcVar1;
  char *in_EAX;
  char unaff_BL;
  
  *in_EAX = *in_EAX + unaff_BL;
  *param_1 = *param_1 + (char)((uint)param_1 >> 8);
  *(char *)(param_2 + 0x5e) = *(char *)(param_2 + 0x5e) + (char)param_1;
  *(char *)(param_2 + 0x5e) = *(char *)(param_2 + 0x5e) + (char)((uint)in_EAX >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


