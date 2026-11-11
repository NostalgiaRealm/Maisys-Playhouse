
/* ==== FUN_00451480 @ 00451480 ==== 
 * signature: undefined __thiscall FUN_00451480(void * this, undefined4 * param_1, char param_2)
 * body: 00451480-004514b4
 */

void __thiscall FUN_00451480(void *this,undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != '\0') {
    puVar2 = (undefined4 *)((int)this + 0x58);
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = *(undefined2 *)param_1;
    return;
  }
  puVar2 = (undefined4 *)((int)this + 0x6e);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)param_1;
  return;
}


