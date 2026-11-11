
/* ==== FUN_0043f7f0 @ 0043f7f0 ==== 
 * signature: undefined4 __stdcall FUN_0043f7f0(void)
 * body: 0043f7f0-0043f848
 */

undefined4 FUN_0043f7f0(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int *in_stack_00000010;
  
  uVar2 = FUN_00441e90(in_stack_00000010);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_00440230(in_stack_00000010,4);
    if (cVar1 == '\0') {
      piVar3 = (int *)(**(code **)(*in_stack_00000010 + 0x210))();
      (**(code **)(*piVar3 + 0x148))(1);
    }
    piVar3 = (int *)(**(code **)(*in_stack_00000010 + 0x210))();
    (**(code **)(*piVar3 + 0x240))(0x325,0,0);
  }
  return 0;
}


