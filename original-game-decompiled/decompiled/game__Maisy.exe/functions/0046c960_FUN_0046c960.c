
/* ==== FUN_0046c960 @ 0046c960 ==== 
 * signature: undefined4 __fastcall FUN_0046c960(int * param_1)
 * body: 0046c960-0046c98f
 */

undefined4 __fastcall FUN_0046c960(int *param_1)

{
  undefined4 in_EAX;
  int *piVar1;
  int *piVar2;
  
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  piVar1 = (int *)FUN_00469fb0(param_1);
  piVar2 = piVar1;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (uint)piVar2 & 0xffffff00;
    }
    piVar2 = (int *)FUN_0046c960(piVar1);
    if ((char)piVar2 != '\0') break;
    piVar1 = *(int **)((int)piVar1 + 0x6a);
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


