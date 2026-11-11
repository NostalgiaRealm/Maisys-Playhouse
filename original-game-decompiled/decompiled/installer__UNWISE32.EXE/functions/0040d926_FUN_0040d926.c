
/* ==== FUN_0040d926 @ 0040d926 ==== 
 * signature: undefined FUN_0040d926(void)
 * body: 0040d926-0040d927
 */

int __fastcall FUN_0040d926(int param_1)

{
  char *pcVar1;
  int in_EAX;
  int unaff_EBX;
  
  *(char *)(in_EAX + -0x26) = *(char *)(in_EAX + -0x26) + (char)in_EAX + '\x01';
  pcVar1 = (char *)(param_1 + 0x40 + unaff_EBX * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(char *)(in_EAX + -0x25) = *(char *)(in_EAX + -0x25) + (char)((uint)(in_EAX + 2) >> 8);
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + (char)param_1;
  return in_EAX + 3;
}


