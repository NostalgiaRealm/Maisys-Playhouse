
/* ==== FUN_0040d4e0 @ 0040d4e0 ==== 
 * signature: short __thiscall FUN_0040d4e0(void * this, char param_1)
 * body: 0040d4e0-0040d563
 */

short __thiscall FUN_0040d4e0(void *this,char param_1)

{
  undefined2 uVar1;
  
  if (param_1 == '\0') {
    if (*(short *)((int)this + 0xa6) != -1) {
      return *(short *)((int)this + 0xa6);
    }
    if (*(int *)((int)this + 0xa2) != 0) {
      uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x48) + 0x120))
                        (*(int *)((int)this + 0xa2));
      *(undefined2 *)((int)this + 0xa6) = uVar1;
    }
  }
  else {
    if (*(short *)((int)this + 0xa0) != -1) {
      return *(short *)((int)this + 0xa0);
    }
    uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x48) + 0x120))
                      (*(undefined4 *)((int)this + 0x9c));
    *(undefined2 *)((int)this + 0xa0) = uVar1;
  }
  if (param_1 == '\0') {
    return *(short *)((int)this + 0xa6);
  }
  return *(short *)((int)this + 0xa0);
}


