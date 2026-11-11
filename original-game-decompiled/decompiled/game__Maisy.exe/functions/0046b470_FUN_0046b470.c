
/* ==== FUN_0046b470 @ 0046b470 ==== 
 * signature: int __thiscall FUN_0046b470(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0046b470-0046b646
 */

int __thiscall FUN_0046b470(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *this_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 unaff_EBP;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char local_108 [259];
  undefined4 local_5;
  undefined1 uStack_1;
  
  local_5._1_3_ = (undefined3)unaff_EBP;
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  iVar3 = 0;
  bVar1 = FUN_00437430(param_1,(int *)s_debug_004dc46c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 0;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_sendondraw_004dc408);
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    if (*(int *)((int)this + 0x3a) != 0) {
      iVar3 = FUN_00456560(param_3,local_108,0xff,(int *)0x0);
      if (iVar3 == 0) {
        puVar6 = (undefined4 *)((int)this + 0x76);
        piVar5 = (int *)((int)this + 0x72);
        puVar7 = (undefined1 *)0x0;
        pcVar4 = local_108;
        *puVar6 = 0;
        *piVar5 = 0;
        this_00 = (void *)FUN_00466a60(*(int *)((int)this + 4));
        cVar2 = FUN_00479ad0(this_00,pcVar4,piVar5,puVar6,puVar7);
        if (cVar2 != '\0') {
          (**(code **)(**(int **)((int)this + 0x3a) + 0x78))(0xb,this,1);
          return 0;
        }
        return 0x10000;
      }
    }
    return 0x60002;
  }
  bVar1 = FUN_00437430(param_1,(int *)s_locked_004dc458);
  if (CONCAT31(extraout_var_01,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_unload_004d98b8);
    if (CONCAT31(extraout_var_02,bVar1) != 0) {
      (**(code **)(*(int *)this + 0x1f8))(0);
      return 0;
    }
    bVar1 = FUN_00437430(param_1,(int *)&DAT_004dc480);
    if (CONCAT31(extraout_var_03,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_paused_004db88c);
      if (CONCAT31(extraout_var_04,bVar1) == 0) {
        iVar3 = FUN_0040bd70(this,param_1,param_2,param_3);
        return iVar3;
      }
      iVar3 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
      if (iVar3 == 0) {
        (**(code **)(*(int *)this + 0x148))(local_5);
      }
    }
    else if ((*(byte *)((int)this + 0x81) & 0x80) != 0) {
      (**(code **)(*(int *)this + 500))();
      return 0;
    }
  }
  else {
    iVar3 = FUN_00455730(param_3,(char *)&local_5,(int *)0x0);
    if (iVar3 == 0) {
      *(byte *)((int)this + 0x48) =
           ((char)local_5 == '\0' ^ *(byte *)((int)this + 0x48)) & 1 ^ *(byte *)((int)this + 0x48);
      return 0;
    }
  }
  return iVar3;
}


