
/* ==== FUN_00425ab0 @ 00425ab0 ==== 
 * signature: undefined __thiscall FUN_00425ab0(void * this, int param_1, int param_2, short * param_3)
 * body: 00425ab0-00425bd5
 */

void __thiscall FUN_00425ab0(void *this,int param_1,int param_2,short *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short local_3c [24];
  int local_c;
  byte local_8;
  
  bVar1 = false;
  if ((param_1 != 0xc9) || ((*(byte *)((int)this + 0x28) & 0x20) != 0)) goto LAB_00425bb4;
  local_c = *(int *)((int)this + 0x156);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x228))();
  *(undefined2 *)((int)this + 0x46) = 5;
  FUN_0044f650(this,'\0');
  if (*param_3 != 0) {
    psVar5 = param_3;
    psVar6 = local_3c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)psVar6 = *(undefined4 *)psVar5;
      psVar5 = psVar5 + 2;
      psVar6 = psVar6 + 2;
    }
    *psVar6 = *psVar5;
    iVar4 = FUN_00414340(this,local_3c,0x1d);
    if ((char)iVar4 == '\0') {
      iVar4 = FUN_00414340(this,local_3c,0x11);
      if ((char)iVar4 == '\0') goto LAB_00425b63;
    }
    local_8 = *(byte *)((int)this + 0x15c) & 1;
    (**(code **)(*(int *)this + 0x90))(5,local_3c);
    *(byte *)((int)this + 0x15c) =
         (local_8 ^ *(byte *)((int)this + 0x15c)) & 1 ^ *(byte *)((int)this + 0x15c);
  }
LAB_00425b63:
  if ((*(byte *)((int)this + 0x15c) & 1) == 0) {
    uVar2 = *(undefined4 *)((int)this + 0x152);
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x14e);
  }
  *(undefined4 *)((int)this + 0x156) = uVar2;
  if (*(int *)((int)this + 0x156) != local_c) {
    piVar3 = (int *)(**(code **)(*(int *)this + 0x3c0))();
    (**(code **)(*piVar3 + 0x32c))(*(undefined4 *)((int)this + 0x156));
  }
  (**(code **)(*(int *)this + 0x140))(0);
  bVar1 = true;
LAB_00425bb4:
  if (!bVar1) {
    FUN_0044fa80(this,param_1,param_2,param_3,(int *)0x0);
  }
  return;
}


