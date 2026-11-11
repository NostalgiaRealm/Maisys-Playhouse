
/* ==== FUN_00448e70 @ 00448e70 ==== 
 * signature: undefined __thiscall FUN_00448e70(void * this, undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 00448e70-00448ebd
 */

void __thiscall FUN_00448e70(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[1];
    *(undefined4 *)((int)this + 0xb8) = *param_1;
    *(undefined4 *)((int)this + 0xbc) = uVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    *(undefined4 *)((int)this + 0x160) = *param_2;
    *(undefined4 *)((int)this + 0x164) = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((int)this + 0x168);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


