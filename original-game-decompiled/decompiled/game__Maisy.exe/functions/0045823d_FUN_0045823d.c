
/* ==== FUN_0045823d @ 0045823d ==== 
 * signature: undefined __stdcall FUN_0045823d(void)
 * body: 0045823d-0045823f
 */

void FUN_0045823d(void)

{
  uint *puVar1;
  code *pcVar2;
  int in_EAX;
  int unaff_EBP;
  int *piVar3;
  
  puVar1 = (uint *)(in_EAX + -0x7f1dffbb);
  *puVar1 = *puVar1 << 1 | (uint)((int)*puVar1 < 0);
  piVar3 = (int *)(unaff_EBP + 1);
  *(char *)piVar3 = *(char *)piVar3 + '\x12';
  *piVar3 = *piVar3 + 0x458009;
  (&stack0x00000000)[in_EAX] = (&stack0x00000000)[in_EAX] + (char)in_EAX;
  *(int *)(&stack0x00000000 + in_EAX) = *(int *)(&stack0x00000000 + in_EAX) + in_EAX;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


