
/* ==== FUN_00446240 @ 00446240 ==== 
 * signature: undefined __thiscall FUN_00446240(void * this, undefined2 param_1)
 * body: 00446240-00446276
 */

void __thiscall FUN_00446240(void *this,undefined2 param_1)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = FUN_0046da90(this,'\x01','\x01');
  if (pvVar1 != (void *)0x0) {
    piVar2 = FUN_0046da90(this,'\x01','\x01');
    *(undefined2 *)((int)piVar2 + 0x15a) = param_1;
    (**(code **)(*piVar2 + 0x1c))(1);
  }
  return;
}


