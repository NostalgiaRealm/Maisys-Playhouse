
/* ==== FUN_0041d410 @ 0041d410 ==== 
 * signature: undefined __thiscall FUN_0041d410(void * this, undefined4 * param_1)
 * body: 0041d410-0041d42c
 */

void __thiscall FUN_0041d410(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0xd0);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  *(undefined2 *)param_1 = *(undefined2 *)puVar2;
  return;
}


