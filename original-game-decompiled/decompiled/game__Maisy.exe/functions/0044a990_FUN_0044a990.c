
/* ==== FUN_0044a990 @ 0044a990 ==== 
 * signature: undefined __fastcall FUN_0044a990(undefined4 * param_1)
 * body: 0044a990-0044aa16
 */

void __fastcall FUN_0044a990(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0044aa17;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004c8440;
  local_8 = 0;
  iVar1 = FUN_00430190((int)param_1);
  iVar2 = *(int *)((int)param_1 + 0x26) + -1;
  if (-1 < iVar2) {
    piVar3 = (int *)(iVar1 + 8 + iVar2 * 0xc);
    do {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
      }
      if ((LPVOID)piVar3[-2] != (LPVOID)0x0) {
        FUN_0043ba20((LPVOID)piVar3[-2]);
      }
      piVar3 = piVar3 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  FUN_004301f0((int)param_1);
  local_8 = 0xffffffff;
  FUN_0044aa21();
  *unaff_FS_OFFSET = local_10;
  return;
}


