
/* ==== FUN_004111a0 @ 004111a0 ==== 
 * signature: undefined __thiscall FUN_004111a0(void * this, undefined4 * param_1)
 * body: 004111a0-004111f5
 */

void __thiscall FUN_004111a0(void *this,undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_00444810((undefined4 *)*param_1);
    FUN_00444690((LPVOID)*param_1);
    *param_1 = 0;
    *(undefined4 *)((int)this + 0xd2) = 0xffffffff;
    *(short *)((int)this + 0xc0) = *(short *)((int)this + 0xc0) + -1;
  }
  *(undefined1 *)((int)this + 0xf8) = 0;
  (**(code **)(*(int *)this + 0x19c))();
  return;
}


