
/* ==== FUN_0042d060 @ 0042d060 ==== 
 * signature: undefined __thiscall FUN_0042d060(void * this, int * param_1)
 * body: 0042d060-0042d15f
 */

void __thiscall FUN_0042d060(void *this,int *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *this_00;
  char local_104 [244];
  int *local_10 [3];
  
  FUN_0040c840(this,param_1);
  if ((param_1 != (int *)0x0) && ((*(byte *)((int)param_1 + 0x1e) & 0x10) != 0)) {
    if (*(int *)((int)this + 0x4c) != 0) {
      local_10[0] = param_1;
      FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(int *)((int)this + 0x4c),4,local_10
                   ,0xc);
    }
    if (*(int *)((int)param_1 + 0x2e) != 0) {
      if (*(LPVOID *)((int)this + 0x2e) != (LPVOID)0x0) {
        FUN_0043f6d0(*(LPVOID *)((int)this + 0x2e));
        *(undefined4 *)((int)this + 0x2e) = 0;
      }
      if (*(int *)((int)this + 0x2a) == 0) {
        pcVar2 = *(char **)((int)param_1 + 0x2e);
      }
      else {
        (**(code **)(*param_1 + 0x70))(local_104);
        pcVar2 = local_104;
      }
      pcVar2 = FUN_0043f650(pcVar2);
      *(char **)((int)this + 0x2e) = pcVar2;
    }
    iVar3 = param_1[1];
    if ((iVar3 != 0) && (*(int *)((int)this + 4) != iVar3)) {
      iVar1 = *(int *)this;
      (**(code **)(iVar1 + 0x294))(iVar3);
      (**(code **)(iVar1 + 0x298))(param_1[1]);
      (**(code **)(iVar1 + 0x29c))(param_1[1]);
    }
  }
  if ((*(int *)((int)this + 0x2a) != 0) && (*(int *)((int)this + 4) != 0)) {
    iVar3 = FUN_00466a80(*(int *)((int)this + 4));
    if ((iVar3 != 0) && ((*(byte *)((int)this + 0x29) & 0x80) == 0)) {
      iVar3 = *(int *)(*(int *)((int)this + 4) + 8);
      this_00 = (void *)FUN_00466a80(*(int *)((int)this + 4));
      FUN_00450310(this_00,iVar3,this,param_1);
    }
  }
  return;
}


