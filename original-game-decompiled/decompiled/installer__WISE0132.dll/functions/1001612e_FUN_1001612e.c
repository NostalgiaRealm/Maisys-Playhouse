
/* ==== FUN_1001612e @ 1001612e ==== 
 * signature: undefined4 __stdcall FUN_1001612e(void)
 * body: 1001612e-1001612f
 */

undefined4 FUN_1001612e(void)

{
  undefined1 uVar1;
  int in_stack_00000014;
  int *in_stack_0000001c;
  int in_stack_00000034;
  int *in_stack_0000003c;
  undefined1 *in_stack_00000044;
  int in_stack_00000058;
  int *in_stack_00000060;
  int in_stack_0000006c;
  int in_stack_00000078;
  int *in_stack_00000080;
  
  *in_stack_0000001c = *in_stack_0000001c + in_stack_00000014;
  *in_stack_0000003c = *in_stack_0000003c + in_stack_00000034;
  *in_stack_00000060 = *in_stack_00000060 + in_stack_00000058;
  uVar1 = in((short)in_stack_00000058);
  *in_stack_00000044 = uVar1;
  *in_stack_00000080 = *in_stack_00000080 + in_stack_00000078;
  return *(undefined4 *)(in_stack_0000006c + 8);
}


