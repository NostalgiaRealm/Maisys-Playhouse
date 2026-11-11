
/* ==== FUN_00411c40 @ 00411c40 ==== 
 * signature: int __thiscall FUN_00411c40(void * this, undefined4 param_1, int param_2)
 * body: 00411c40-00411cbe
 */

int __thiscall FUN_00411c40(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  SIZE_T SVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)((int)this + 0xc0) != 0) {
    iVar1 = *(int *)this;
    cVar2 = (**(code **)(iVar1 + 0xe8))();
    if ((cVar2 != '\0') || (param_2 == 0x66)) {
      if (*(int *)((int)this + 0x4a) == 1) {
        cVar2 = (**(code **)(iVar1 + 0x15c))(0xb);
        if (cVar2 != '\0') goto LAB_00411ca7;
      }
      iVar4 = 8;
      if (*(char *)((int)this + 0xca) == '\0') {
        DeleteObject(*(HLOCAL *)((int)this + 0xc0));
      }
      else {
        FUN_0043f720(*(HLOCAL *)((int)this + 0xc0));
      }
      *(undefined4 *)((int)this + 0xc0) = 0;
    }
  }
LAB_00411ca7:
  SVar3 = FUN_0047d5f0(this,param_1,param_2);
  return SVar3 + iVar4;
}


