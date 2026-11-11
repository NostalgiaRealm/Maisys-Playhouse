
/* ==== FUN_0046a930 @ 0046a930 ==== 
 * signature: int * __stdcall FUN_0046a930(int param_1)
 * body: 0046a930-0046aa74;0046aa82-0046ab23
 */

int * FUN_0046a930(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_60 [32];
  undefined4 *local_40;
  int *local_3c;
  int *local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined1 local_18 [2];
  char local_16;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0046ab91;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff94;
  local_16 = '\0';
  FUN_0043bd50(local_18,'\x01','\x01');
  local_8 = 0;
  local_20 = (int *)0x0;
  local_15 = '\0';
  local_24 = *local_1c;
  cVar1 = (**(code **)(local_24 + 0x218))();
  if ((cVar1 != '\0') &&
     ((*(short *)(local_1c[1] + 0x22) == 0x6b ||
      ((((short)local_1c[0x18] == 0 && ((*(byte *)((int)local_1c + 0x21) & 0x40) == 0)) &&
       (*(short *)((int)local_1c + 0x22) != 0x43)))))) {
    local_15 = '\x01';
  }
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_60);
  local_8._0_1_ = 2;
  if (DAT_004d95bc == (undefined4 *)0x0) {
    local_40 = FUN_00412c20(0x4a);
    local_8._0_1_ = 3;
    puVar2 = (undefined4 *)0x0;
    if (local_40 != (undefined4 *)0x0) {
      puVar2 = FUN_0042f970(local_40,0x2e,0x200,'\0',0,'\0');
    }
    local_16 = '\x01';
    DAT_004d95c0 = local_1c;
    DAT_004d95bc = puVar2;
  }
  local_8._0_1_ = 2;
  local_20 = (int *)(**(code **)(local_24 + 0xec))(param_1);
  piVar3 = (int *)FUN_00469fb0(local_1c);
  piVar5 = (int *)0x0;
  if (local_1c[1] == param_1) {
    *(undefined4 *)((int)local_20 + 0x3a) = *(undefined4 *)((int)local_1c + 0x3a);
    (**(code **)(**(int **)((int)local_20 + 0x5a) + 500))(*(undefined4 *)((int)local_1c + 0x3a));
  }
  for (; piVar3 != (int *)0x0; piVar3 = *(int **)((int)piVar3 + 0x6a)) {
    piVar4 = (int *)(**(code **)(*piVar3 + 0x20c))(param_1);
    local_3c = piVar4;
    if (piVar5 == (int *)0x0) {
      local_28 = local_20;
      (**(code **)(*local_20 + 0x2b0))(piVar4,1);
    }
    else {
      (**(code **)(*piVar5 + 0x2b4))(piVar4,0);
    }
    piVar5 = piVar4;
  }
  if (local_16 != '\0') {
    FUN_0046a6d0(local_1c,(int)local_20,(int)DAT_004d95bc);
    if (DAT_004d95bc != (undefined4 *)0x0) {
      (**(code **)*DAT_004d95bc)(1);
    }
    DAT_004d95bc = (undefined4 *)0x0;
    DAT_004d95c0 = (int *)0x0;
  }
  if (local_15 != '\0') {
    (**(code **)(local_24 + 0x1f8))(0);
    FUN_0047dc10();
  }
  local_8 = 0;
  FUN_0046ab89();
  local_8 = 0xffffffff;
  local_2c = local_20;
  FUN_0046ab9b();
  *unaff_FS_OFFSET = local_10;
  return local_2c;
}


