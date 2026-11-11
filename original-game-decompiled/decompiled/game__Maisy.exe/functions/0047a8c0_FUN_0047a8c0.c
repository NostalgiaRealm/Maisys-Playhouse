
/* ==== FUN_0047a8c0 @ 0047a8c0 ==== 
 * signature: undefined __thiscall FUN_0047a8c0(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 0047a8c0-0047a8e5
 */

void __thiscall FUN_0047a8c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = *(undefined4 *)((int)this + 0x468);
  puVar2 = (undefined4 *)((int)this + 0x46c);
  for (iVar1 = 0x10d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


