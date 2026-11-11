
/* ==== FUN_0043cbd0 @ 0043cbd0 ==== 
 * signature: int * __cdecl FUN_0043cbd0(int * param_1, int param_2)
 * body: 0043cbd0-0043cc98
 */

int * __cdecl FUN_0043cbd0(int *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  short sVar4;
  undefined4 *unaff_FS_OFFSET;
  int *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043cc99;
  *unaff_FS_OFFSET = &local_10;
  local_14 = (undefined4 *)FUN_004a5fed(0xe);
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    *local_14 = &PTR_FUN_004be070;
  }
  local_8 = 0xffffffff;
  local_18 = (int *)0x0;
  FUN_00430500(local_14,0);
  sVar4 = 1;
  FUN_0043ca40(param_1,local_14);
  sVar1 = *(short *)(local_14 + 3);
  piVar3 = local_18;
  if (0 < sVar1) {
    do {
      piVar3 = (int *)FUN_004308b0(local_14,sVar4);
      sVar2 = (**(code **)(*piVar3 + 0x27c))();
      if (sVar2 == param_2) break;
      sVar4 = sVar4 + 1;
      piVar3 = local_18;
    } while (sVar4 <= sVar1);
  }
  local_18 = piVar3;
  FUN_00430540(local_14);
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


