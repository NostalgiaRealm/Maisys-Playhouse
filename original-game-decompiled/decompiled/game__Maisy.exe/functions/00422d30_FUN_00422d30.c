
/* ==== FUN_00422d30 @ 00422d30 ==== 
 * signature: undefined __thiscall FUN_00422d30(void * this, undefined4 * param_1, undefined4 * param_2, short param_3)
 * body: 00422d30-00422d9f;00422db7-00422de0
 */

void __thiscall FUN_00422d30(void *this,undefined4 *param_1,undefined4 *param_2,short param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00422da0;
  *unaff_FS_OFFSET = &local_10;
  if (param_1[1] == 1) {
    puVar1 = FUN_00412c20(0x56);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_00422bd0(puVar1);
    }
    param_1[3] = puVar2;
  }
  local_8 = 0xffffffff;
  if (param_3 == 0) {
    (**(code **)(*(int *)this + 0xe8))();
  }
  else {
    FUN_0042ff60(this,(int)param_3,param_1);
  }
  if (param_2 != (undefined4 *)0x0) {
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


