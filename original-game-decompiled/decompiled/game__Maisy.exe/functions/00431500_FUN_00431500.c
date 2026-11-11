
/* ==== FUN_00431500 @ 00431500 ==== 
 * signature: undefined __thiscall FUN_00431500(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00431500-004315e9
 */

void __thiscall FUN_00431500(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_64;
  short local_60;
  undefined1 local_33;
  undefined4 local_e;
  undefined4 local_a;
  
  FUN_00486dd0(param_1,&local_64,param_3,0x5e);
  if (local_60 == 0) {
    local_33 = 1;
  }
  if (local_60 == 1) {
    FUN_004283b0(this,param_1,(int)&local_64);
    *(undefined4 *)((int)this + 0xfc) = local_e;
    *(undefined4 *)((int)this + 0xbc) = local_a;
    FUN_00428460(this,param_1,(int)&local_64);
    cVar2 = (**(code **)(*(int *)this + 0x15c))(0xb);
    if (cVar2 != '\0') {
      *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)((int)this + 0x74);
      return;
    }
  }
  else {
    FUN_004283b0(this,param_1,(int)&local_64);
    *(undefined4 *)((int)this + 0xfc) = local_e;
    *(undefined4 *)((int)this + 0xbc) = local_a;
    FUN_00428460(this,param_1,(int)&local_64);
    iVar1 = *(int *)this;
    cVar2 = (**(code **)(iVar1 + 0x15c))(0xb);
    if (cVar2 != '\0') {
      uVar5 = 0;
      uVar4 = *(undefined4 *)((int)this + 0xfc);
      uVar3 = FUN_00486c30(param_1);
      uVar4 = (**(code **)(*param_1 + 0x110))(uVar3,uVar4,uVar5);
      (**(code **)(iVar1 + 0x138))(uVar4);
      *(undefined4 *)((int)this + 0x52) = 0xffffffff;
    }
  }
  return;
}


