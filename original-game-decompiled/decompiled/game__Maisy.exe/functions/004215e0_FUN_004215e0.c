
/* ==== FUN_004215e0 @ 004215e0 ==== 
 * signature: uint __fastcall FUN_004215e0(int * param_1)
 * body: 004215e0-004216ed;00421710-0042172e
 */

uint __fastcall FUN_004215e0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined2 extraout_var;
  uint uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  undefined2 uVar4;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004216fe;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc8;
  iVar5 = 0;
  local_15 = 0;
  cVar2 = (**(code **)(*param_1 + 0xec))();
  if ((cVar2 == '\0') || (*(int *)((int)param_1 + 0x152) == 0)) {
    local_15 = '\0';
  }
  else {
    iVar6 = -1;
    iVar7 = iVar6;
    if ((*(int *)((int)param_1 + 0x162) != 0) && (0 < *(short *)((int)param_1 + 0x176))) {
      do {
        iVar7 = iVar5;
        if (*(char *)(*(int *)((int)param_1 + 0x162) + iVar5) != '\0') break;
        iVar5 = iVar5 + 1;
        iVar7 = iVar6;
      } while (iVar5 < *(short *)((int)param_1 + 0x176));
    }
    if (iVar7 == -1) {
      uVar4 = 0;
      if (*(int *)((int)param_1 + 0x15e) != 0) {
        local_20 = 0;
        local_24 = 0;
        if (*(int *)(*(int *)((int)param_1 + 0x15e) + 0x26) != 0) {
          pcVar1 = *(code **)(*param_1 + 0x238);
          uVar3 = 1;
          do {
            uVar8 = uVar3 + 1;
            FUN_00430370(*(void **)((int)param_1 + 0x15e),uVar3,&local_24);
            (*pcVar1)(&local_24);
            uVar3 = uVar8;
          } while (uVar8 <= *(uint *)(*(int *)((int)param_1 + 0x15e) + 0x26));
        }
        (**(code **)(**(int **)((int)param_1 + 0x15e) + 4))();
        *(undefined4 *)((int)param_1 + 0x15e) = 0;
        uVar4 = extraout_var;
      }
      uVar3 = CONCAT22(uVar4,1);
      goto LAB_0042171e;
    }
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_2c);
    local_8 = 1;
    FUN_00420e80(param_1,iVar7,(short)param_1[9]);
    local_15 = '\x01';
    local_8 = 0xffffffff;
    FUN_00421708();
  }
  uVar3 = -(uint)(local_15 == '\0') & 0xffff0002;
LAB_0042171e:
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}


