
/* ==== FUN_120163b0 @ 120163b0 ==== 
 * signature: undefined __fastcall FUN_120163b0(int * param_1)
 * body: 120163b0-12016411
 */

void __fastcall FUN_120163b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_12016412;
  *unaff_FS_OFFSET = &local_10;
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_12016010(10);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_12004dd0(puVar1);
    }
    *param_1 = (int)puVar2;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


