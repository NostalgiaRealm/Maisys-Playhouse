
/* ==== FUN_004926b0 @ 004926b0 ==== 
 * signature: undefined __stdcall FUN_004926b0(void)
 * body: 004926b0-004926de
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_004926b0(void)

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


