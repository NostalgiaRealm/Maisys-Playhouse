
/* ==== FUN_00447150 @ 00447150 ==== 
 * signature: int * __thiscall FUN_00447150(void * this, int param_1)
 * body: 00447150-004471c7;004471e8-004472cc
 */

int * __thiscall FUN_00447150(void *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_44 [40];
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004472f8;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffb0;
  local_18 = (int *)0x0;
  piVar1 = FUN_00412c20(0x160);
  local_8 = 0;
  local_1c = piVar1;
  if (piVar1 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    FUN_00412c90(piVar1,0);
    *piVar1 = (int)&PTR_FUN_004bf780;
    *piVar1 = (int)&PTR_FUN_004bf978;
    *piVar1 = (int)&PTR_FUN_004bfca8;
    *piVar1 = (int)&PTR_FUN_004c25c0;
    local_18 = piVar1;
  }
  local_8 = 0xffffffff;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_44);
  local_8 = 6;
  FUN_00445e00(local_18,param_1,0,0);
  pvVar2 = FUN_0046da90(this,'\x01','\x01');
  if (*(char *)((int)pvVar2 + 0x17d) == '\0') {
    iVar4 = FUN_00466a70(param_1);
    piVar3 = FUN_0041be50(0x1f,iVar4);
    pvVar2 = FUN_0046da90(this,'\x01','\x01');
    (**(code **)(*piVar3 + 0x120))(pvVar2);
    piVar1 = piVar3;
    pvVar2 = (void *)FUN_00466a70(param_1);
    FUN_0044e650(pvVar2,piVar1);
  }
  else {
    piVar3 = FUN_0046da90(this,'\x01','\x01');
  }
  *(int **)((int)local_18 + 0x52) = piVar3;
  FUN_0046c1c0(local_18,this);
  (**(code **)(*local_18 + 0x334))(this);
  *(undefined4 *)((int)local_18 + 0x52) = 0;
  (**(code **)(*local_18 + 0x2a4))(piVar3);
  (**(code **)(*local_18 + 0x2c8))();
  local_8 = 0xffffffff;
  FUN_004472f0();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


