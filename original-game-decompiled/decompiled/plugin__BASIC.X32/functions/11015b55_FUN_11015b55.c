
/* ==== FUN_11015b55 @ 11015b55 ==== 
 * signature: undefined __thiscall FUN_11015b55(void * this, uint param_1)
 * body: 11015b55-11015b57
 */

void __thiscall FUN_11015b55(void *this,uint param_1)

{
  code *pcVar1;
  uint in_EAX;
  int unaff_retaddr;
  
  *(int *)this = *(int *)this + unaff_retaddr;
  *(int *)this = *(int *)this + unaff_retaddr;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ param_1;
  *(int *)(param_1 + 0x5b) = *(int *)(param_1 + 0x5b) + (in_EAX | 0x1f11015b);
  *(int *)this = *(int *)this + unaff_retaddr;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


