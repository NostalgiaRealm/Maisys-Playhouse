
/* ==== FUN_004b64e7 @ 004b64e7 ==== 
 * signature: int __thiscall FUN_004b64e7(void * this, uint param_1, uint param_2, long param_3, long * param_4)
 * body: 004b64e7-004b658e
 */

int __thiscall FUN_004b64e7(void *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0x2b) {
    (**(code **)(*(int *)this + 0xbc))(param_3);
  }
  else if (param_1 == 0x2c) {
    (**(code **)(*(int *)this + 0xc0))(param_3);
  }
  else if (param_1 == 0x2d) {
    (**(code **)(*(int *)this + 200))(param_3);
  }
  else {
    if (param_1 == 0x2e) {
      lVar2 = (**(code **)(*(int *)this + 0xcc))(param_2 & 0xffff,param_2 >> 0x10);
    }
    else if (param_1 == 0x2f) {
      lVar2 = (**(code **)(*(int *)this + 0xd0))(param_2 & 0xffff,param_2 >> 0x10);
    }
    else {
      if (param_1 != 0x39) {
        iVar1 = FUN_004aad59(this,param_1,param_2,param_3,param_4);
        return iVar1;
      }
      lVar2 = (**(code **)(*(int *)this + 0xc4))(param_3);
    }
    *param_4 = lVar2;
  }
  return 1;
}


