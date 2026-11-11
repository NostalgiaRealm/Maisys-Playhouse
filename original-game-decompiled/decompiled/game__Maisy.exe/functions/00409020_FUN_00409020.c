
/* ==== FUN_00409020 @ 00409020 ==== 
 * signature: undefined __thiscall FUN_00409020(void * this, undefined4 * param_1)
 * body: 00409020-00409060
 */

void __thiscall FUN_00409020(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[1];
    *(undefined4 *)((int)this + 0xd2) = *param_1;
    *(undefined4 *)((int)this + 0xd6) = uVar1;
    return;
  }
  *(undefined2 *)((int)this + 0xd8) = 0;
  *(undefined2 *)((int)this + 0xd4) = 0;
  *(undefined2 *)((int)this + 0xd6) = 0;
  *(undefined2 *)((int)this + 0xd2) = 0;
  return;
}


