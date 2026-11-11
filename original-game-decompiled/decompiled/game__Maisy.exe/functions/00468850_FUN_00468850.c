
/* ==== FUN_00468850 @ 00468850 ==== 
 * signature: undefined __thiscall FUN_00468850(void * this, char param_1)
 * body: 00468850-004688b9
 */

void __thiscall FUN_00468850(void *this,char param_1)

{
  undefined4 uVar1;
  
  if ((*(int **)((int)this + 0x3a) != (int *)0x0) && (*(int *)((int)this + 0x48) != 0)) {
    (**(code **)(**(int **)((int)this + 0x3a) + 0x214))(*(int *)((int)this + 0x48),param_1);
    *(undefined1 *)((int)this + 0x4e) = 0;
    if (param_1 == '\0') {
      uVar1 = *(undefined4 *)(*(int *)((int)this + 0x48) + 0x1e);
      *(undefined4 *)((int)this + 0x58) = uVar1;
      *(undefined4 *)((int)this + 0x54) = uVar1;
    }
    else {
      *(undefined4 *)((int)this + 0x58) = 0;
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    FUN_00434950(*(LPVOID *)((int)this + 0x48));
    *(undefined4 *)((int)this + 0x48) = 0;
    return;
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  return;
}


