
/* ==== FUN_00422990 @ 00422990 ==== 
 * signature: char __thiscall FUN_00422990(void * this, int * param_1)
 * body: 00422990-00422a44
 */

char __thiscall FUN_00422990(void *this,int *param_1)

{
  short sVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return '\r';
  }
  uVar2 = *(uint *)((int)param_1 + 0x1e);
  if ((uVar2 & 0x400) != 0) {
    return '\0';
  }
  if ((uVar2 & 2) == 0) {
    return ((uVar2 & 0x4000000) == 0) + '\t';
  }
  sVar1 = *(short *)((int)param_1 + 0x22);
  if (sVar1 == 0x43) {
    return '\x04';
  }
  if (sVar1 == 0x40) {
    return '\x05';
  }
  if (sVar1 == 0x3f) {
    return '\x06';
  }
  if ((((short)param_1[0x18] == 0) && ((uVar2 & 0x40000000) == 0)) && (sVar1 != 0x43)) {
    while( true ) {
      if (this == (int *)0x0) {
        return '\0';
      }
      if (param_1 == this) break;
      this = (void *)(**(code **)(*(int *)this + 0x16c))();
    }
    return '\v';
  }
  return '\b';
}


