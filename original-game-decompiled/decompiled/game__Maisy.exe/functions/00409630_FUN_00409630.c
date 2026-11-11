
/* ==== FUN_00409630 @ 00409630 ==== 
 * signature: undefined4 __thiscall FUN_00409630(void * this, int * param_1)
 * body: 00409630-004096cf
 */

uint __thiscall FUN_00409630(void *this,int *param_1)

{
  uint in_EAX;
  
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    return in_EAX & 0xffffff00;
  }
  if (*(int *)((int)this + 0x124) != 0) {
    in_EAX = (**(code **)(*param_1 + 0x1cc))(*(undefined4 *)((int)this + 0x96));
    if ((char)in_EAX != '\0') goto LAB_004096c0;
  }
  if (*(int *)((int)this + 0x11c) != 0) {
    in_EAX = (**(code **)(*param_1 + 0x1cc))(*(undefined4 *)((int)this + 0x96));
    if ((char)in_EAX != '\0') goto LAB_004096c0;
  }
  if (*(int *)((int)this + 0x118) != 0) {
    in_EAX = (**(code **)(*param_1 + 0x1cc))(*(undefined4 *)((int)this + 0x92));
    if ((char)in_EAX != '\0') goto LAB_004096c0;
  }
  if (*(int *)((int)this + 0x120) != 0) {
    in_EAX = (**(code **)(*param_1 + 0x1cc))(*(undefined4 *)((int)this + 0x92));
    if ((char)in_EAX != '\0') {
LAB_004096c0:
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


