
/* ==== FUN_0040da51 @ 0040da51 ==== 
 * signature: undefined FUN_0040da51(void)
 * body: 0040da51-0040da53
 */

/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_0040da51(char param_1,int param_2)

{
  char *pcVar1;
  int in_EAX;
  int unaff_EBX;
  bool in_ZF;
  
  if (!in_ZF) {
    pcVar1 = (char *)(param_2 + 0x40 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)((uint)unaff_EBX >> 8);
    pcVar1 = (char *)(param_2 + -0x2573ffc0 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)in_EAX + '\x01';
    pcVar1 = (char *)(param_2 + -0x2563ffc0 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)param_2;
    pcVar1 = (char *)(param_2 + -0x2548ffc0 + unaff_EBX * 8);
    *pcVar1 = *pcVar1 + (char)((uint)(in_EAX + 3) >> 8);
    *(char *)(unaff_EBX + -0x76e371bc) = *(char *)(unaff_EBX + -0x76e371bc) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


