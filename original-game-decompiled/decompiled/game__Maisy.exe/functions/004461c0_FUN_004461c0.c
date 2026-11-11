
/* ==== FUN_004461c0 @ 004461c0 ==== 
 * signature: undefined __thiscall FUN_004461c0(void * this, undefined4 param_1)
 * body: 004461c0-0044620e
 */

void __thiscall FUN_004461c0(void *this,undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  
  (**(code **)(*(int *)this + 0x80))(0x7fffffff,10);
  pvVar1 = FUN_0046da90(this,'\x01','\x01');
  if (pvVar1 != (void *)0x0) {
    piVar2 = FUN_0046da90(this,'\x01','\x01');
    *(undefined4 *)((int)piVar2 + 0x156) = param_1;
    *(undefined2 *)(piVar2 + 0x41) = 0;
    (**(code **)(*piVar2 + 0x1c))(1);
  }
  return;
}


