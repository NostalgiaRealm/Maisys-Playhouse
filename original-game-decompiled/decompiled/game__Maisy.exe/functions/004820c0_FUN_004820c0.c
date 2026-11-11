
/* ==== FUN_004820c0 @ 004820c0 ==== 
 * signature: undefined4 __thiscall FUN_004820c0(void * this, int param_1)
 * body: 004820c0-00482112
 */

undefined4 __thiscall FUN_004820c0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 < *(int *)((int)this + 0x26)) {
    iVar1 = FUN_00430190((int)this);
    puVar2 = (undefined4 *)(iVar1 + param_1 * 0x46);
    FUN_0043ba20((LPVOID)*puVar2);
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0;
    FUN_004301f0((int)this);
    return 0;
  }
  return 0x10000;
}


