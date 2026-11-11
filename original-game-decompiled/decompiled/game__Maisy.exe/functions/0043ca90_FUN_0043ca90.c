
/* ==== FUN_0043ca90 @ 0043ca90 ==== 
 * signature: undefined __cdecl FUN_0043ca90(int * param_1, uint param_2, short param_3)
 * body: 0043ca90-0043cb5e
 */

void __cdecl FUN_0043ca90(int *param_1,uint param_2,short param_3)

{
  short sVar1;
  code *pcVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043cb5f;
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
  iVar5 = 1;
  FUN_0043ca40(param_1,local_14);
  sVar1 = *(short *)(local_14 + 3);
  if (0 < sVar1) {
    do {
      piVar4 = (int *)FUN_004308b0(local_14,(short)iVar5);
      pcVar2 = *(code **)(*piVar4 + 0x27c);
      sVar3 = (*pcVar2)();
      if (param_2 <= (uint)(int)sVar3) {
        sVar3 = (*pcVar2)();
        (**(code **)(*piVar4 + 0x278))(sVar3 + param_3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= sVar1);
  }
  FUN_00430540(local_14);
  *unaff_FS_OFFSET = local_10;
  return;
}


