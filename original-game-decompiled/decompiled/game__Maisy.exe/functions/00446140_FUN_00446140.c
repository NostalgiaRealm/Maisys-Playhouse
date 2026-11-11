
/* ==== FUN_00446140 @ 00446140 ==== 
 * signature: undefined __thiscall FUN_00446140(void * this, undefined4 param_1)
 * body: 00446140-00446174
 */

void __thiscall FUN_00446140(void *this,undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = FUN_0046da90(this,'\x01','\x01');
  if (pvVar1 != (void *)0x0) {
    piVar2 = FUN_0046da90(this,'\x01','\x01');
    *(undefined4 *)((int)piVar2 + 0x152) = param_1;
    (**(code **)(*piVar2 + 0x1c))(1);
  }
  return;
}


