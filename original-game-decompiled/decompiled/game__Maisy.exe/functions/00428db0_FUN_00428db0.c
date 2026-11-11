
/* ==== FUN_00428db0 @ 00428db0 ==== 
 * signature: undefined __thiscall FUN_00428db0(void * this, undefined4 param_1, undefined2 param_2, undefined4 * param_3, undefined4 param_4)
 * body: 00428db0-00428de2
 */

void __thiscall
FUN_00428db0(void *this,undefined4 param_1,undefined2 param_2,undefined4 *param_3,undefined4 param_4
            )

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)this + 0x4c) = param_2;
  *(undefined4 *)((int)this + 0x44) = param_1;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = param_3[1];
    *(undefined4 *)((int)this + 0x4e) = *param_3;
    *(undefined4 *)((int)this + 0x52) = uVar1;
  }
  *(undefined4 *)((int)this + 0x48) = param_4;
  return;
}


