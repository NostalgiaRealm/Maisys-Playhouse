
/* ==== FUN_0043ce40 @ 0043ce40 ==== 
 * signature: short __cdecl FUN_0043ce40(int * param_1, short param_2)
 * body: 0043ce40-0043cefc
 */

short __cdecl FUN_0043ce40(int *param_1,short param_2)

{
  short sVar1;
  int *piVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043cefd;
  *unaff_FS_OFFSET = &local_10;
  local_14 = (undefined4 *)FUN_004a5fed(0xe);
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    *local_14 = &PTR_FUN_004be070;
  }
  local_8 = 0xffffffff;
  FUN_00430500(local_14,0);
  sVar4 = 1;
  FUN_0043ca10(param_1,local_14);
  sVar1 = *(short *)(local_14 + 3);
  if (0 < sVar1) {
    do {
      sVar5 = sVar4 + 1;
      piVar2 = (int *)FUN_004308b0(local_14,sVar4);
      uVar3 = CONCAT22(extraout_var,param_2);
      param_2 = param_2 + 1;
      (**(code **)(*piVar2 + 0x278))(uVar3);
      sVar4 = sVar5;
    } while (sVar5 <= sVar1);
  }
  FUN_00430540(local_14);
  *unaff_FS_OFFSET = local_10;
  return sVar1;
}


