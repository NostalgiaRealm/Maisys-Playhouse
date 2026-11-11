
/* ==== FUN_10016480 @ 10016480 ==== 
 * signature: undefined __stdcall FUN_10016480(void)
 * body: 10016480-100164ae
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10016480(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


