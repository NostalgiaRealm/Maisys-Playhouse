
/* ==== FUN_00404e30 @ 00404e30 ==== 
 * signature: undefined __thiscall FUN_00404e30(void * this, int * param_1, char param_2)
 * body: 00404e30-00404fc3
 */

void __thiscall FUN_00404e30(void *this,int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_60 [21];
  int *local_c;
  undefined4 local_8;
  
  if ((param_1 == (int *)0x0) || ((*(byte *)((int)param_1 + 0x1e) & 2) == 0)) {
    return;
  }
  iVar1 = FUN_00430cd0(*(void **)((int)this + 0x72),(int)param_1);
  local_8._2_2_ = (short)iVar1;
  if (param_2 == '\0') {
    if (local_8._2_2_ == 0) {
      return;
    }
    FUN_0046ba40(param_1,1,1);
    FUN_004142c0(local_60,0x7d2,0,0,0);
    FUN_0046b730(param_1,(int)local_60);
    FUN_00430090(*(void **)((int)this + 0x72),(int)local_8._2_2_);
    return;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x1c8))();
  if (local_8._2_2_ == 0) {
    local_c = param_1;
    local_8 = piVar2;
    (**(code **)(**(int **)((int)this + 0x72) + 0xe8))(&local_c);
    (**(code **)(*param_1 + 0x268))(this);
    if ((*(char *)((int)this + 0xa4) == '\0') ||
       (uVar3 = FUN_00403790(this,piVar2,'\0'), (char)uVar3 == '\0')) {
      if ((piVar2 != (int *)0x0) && (uVar3 = FUN_00403790(this,piVar2,'\x01'), (char)uVar3 != '\0'))
      {
        FUN_0046ba40(param_1,1,0);
      }
      (**(code **)(*param_1 + 0x230))();
      FUN_004142c0(local_60,0x7d1,0,this,0);
      FUN_0046b730(param_1,(int)local_60);
      if ((*(byte *)((int)param_1 + 0x1e) & 4) != 0) {
        (**(code **)(*param_1 + 0x424))(0);
      }
      if ((((short)param_1[0x18] == 0) && ((*(byte *)((int)param_1 + 0x21) & 0x40) == 0)) &&
         (*(short *)((int)param_1 + 0x22) != 0x43)) {
        piVar2 = (int *)(**(code **)(*param_1 + 0x31c))();
        (**(code **)(*piVar2 + 0x1f8))();
      }
      else if ((*(byte *)((int)param_1 + 0x1e) & 4) != 0) {
        (**(code **)(*param_1 + 0x40c))();
      }
      FUN_004142c0(local_60,0x65,0,this,0);
      FUN_0046b730(param_1,(int)local_60);
    }
    FUN_0046c920(param_1,1);
    return;
  }
  return;
}


