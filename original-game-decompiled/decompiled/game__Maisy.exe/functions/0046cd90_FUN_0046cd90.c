
/* ==== FUN_0046cd90 @ 0046cd90 ==== 
 * signature: int * __thiscall FUN_0046cd90(void * this, int param_1)
 * body: 0046cd90-0046cdcc
 */

int * __thiscall FUN_0046cd90(void *this,int param_1)

{
  int *piVar1;
  
  if (((*(byte *)((int)this + 0x29) & 0x80) == 0) && (*(int *)((int)this + 0xc) == param_1)) {
    return this;
  }
  piVar1 = (int *)FUN_00469fb0(this);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (((*(uint *)((int)piVar1 + 0x26) & 0x80000000) == 0) && (piVar1[3] == param_1)) break;
    piVar1 = *(int **)((int)piVar1 + 0x6a);
  }
  return piVar1;
}


