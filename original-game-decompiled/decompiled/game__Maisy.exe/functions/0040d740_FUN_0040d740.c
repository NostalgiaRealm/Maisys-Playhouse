
/* ==== FUN_0040d740 @ 0040d740 ==== 
 * signature: undefined __thiscall FUN_0040d740(void * this, undefined4 * param_1)
 * body: 0040d740-0040d75c
 */

void __thiscall FUN_0040d740(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x86);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)param_1;
  return;
}


