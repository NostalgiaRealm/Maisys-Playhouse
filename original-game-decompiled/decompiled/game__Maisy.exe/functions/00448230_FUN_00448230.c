
/* ==== FUN_00448230 @ 00448230 ==== 
 * signature: undefined __thiscall FUN_00448230(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00448230-0044831a;00448332-00448380
 */

void __thiscall FUN_00448230(void *this,int *param_1,short *param_2,short *param_3)

{
  short sVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *this_00;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var_00;
  short sVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044831b;
  *unaff_FS_OFFSET = &local_10;
  bVar2 = FUN_00437430(param_1,(int *)&DAT_004dba0c);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    bVar2 = FUN_00437430(param_1,(int *)s_bytesloaded_004da31c);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      FUN_004131b0(this,param_1,param_2,param_3);
    }
    else {
      iVar4 = FUN_004486a0(this,0,100);
      FUN_00454d00(param_3,iVar4);
    }
  }
  else {
    if (*(int *)((int)this + 0x2e) == 0) {
      this_00 = FUN_00412c20(0x4a);
      local_8 = 0;
      puVar3 = (undefined4 *)0x0;
      if (this_00 != (undefined4 *)0x0) {
        puVar3 = FUN_00430a50(this_00,0xc,0x10,'\0',0);
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 0x2e) = puVar3;
    }
    sVar1 = *(short *)(*(int *)((int)this + 0x2a) + 0x26);
    sVar6 = 0;
    iVar4 = FUN_00430190(*(int *)((int)this + 0x2a));
    FUN_0042fc00(*(void **)((int)this + 0x2e));
    if (0 < sVar1) {
      do {
        iVar5 = (int)sVar6;
        sVar6 = sVar6 + 1;
        (**(code **)(**(int **)((int)this + 0x2e) + 0xe8))(iVar4 + iVar5 * 0xc);
      } while (sVar6 < sVar1);
    }
    FUN_004301f0(*(int *)((int)this + 0x2a));
    FUN_00488540(*(int *)(*(int *)((int)this + 0x2e) + 0x26),FUN_00448390,FUN_00448150,
                 *(int *)((int)this + 0x2e));
    FUN_00454d50(param_3,*(undefined4 *)((int)this + 0x2e));
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


