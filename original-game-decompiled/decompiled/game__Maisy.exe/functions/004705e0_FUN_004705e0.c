
/* ==== FUN_004705e0 @ 004705e0 ==== 
 * signature: undefined1 __fastcall FUN_004705e0(int param_1)
 * body: 004705e0-00470701;0047070f-004709a3;004709ae-004709cb
 */

undefined1 __fastcall FUN_004705e0(int param_1)

{
  void *this;
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  short sVar8;
  CDocument *this_00;
  undefined4 *unaff_FS_OFFSET;
  int *piVar9;
  int *piVar10;
  char local_270;
  undefined4 local_26f;
  char local_170 [256];
  int local_70 [5];
  int local_5c [5];
  undefined1 local_48;
  int *local_44;
  int *local_40;
  undefined1 local_3c;
  undefined1 local_38 [2];
  int *local_36;
  undefined4 local_32;
  char *local_2e;
  int *local_28;
  undefined4 *local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 local_11;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004709cc;
  *unaff_FS_OFFSET = &local_10;
  local_18 = *(int *)(*(int *)(param_1 + 0xa2) + 0x82);
  local_20 = (int *)FUN_0045a3e0(*(int *)(param_1 + 0xa2));
  local_11 = 0;
  if ((local_18 == 0) || (local_20 == (int *)0x0)) {
code_r0x004709e3:
    *unaff_FS_OFFSET = local_10;
    return 0;
  }
  cVar2 = FUN_004704b0(*(char **)(param_1 + 0x9a),*(undefined4 *)(param_1 + 0xa2),&local_11,
                       local_170);
  if (cVar2 == '\0') goto code_r0x004709e3;
  iVar4 = FUN_00486f60(*(int *)(param_1 + 0xa2),local_170);
  if (iVar4 != 0) goto code_r0x004709e3;
  if (*(int *)(param_1 + 0x96) == 0) {
    local_1c = (CDocument *)FUN_00412c20(0x4a);
    local_8 = 0;
    puVar5 = (undefined4 *)0x0;
    if (local_1c != (CDocument *)0x0) {
      puVar5 = FUN_0042f970(local_1c,0xe,0,'\0',0,'\0');
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x96) = puVar5;
  }
  local_28 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0xa2) + 0x48) + 0xf0))();
  if (local_28 == (int *)0x0) goto code_r0x004709e3;
  local_1c = (CDocument *)
             (CONCAT13((char)*(uint *)(param_1 + 0x9e),(undefined3)local_1c) & 0x1ffffff);
  if ((*(char *)(local_18 + 0xad) == '\0') && (*(char *)(local_18 + 0xb3) == '\0')) {
    local_38[0] = 1;
  }
  else {
    local_38[0] = 0;
  }
  this = *(void **)(local_18 + 0x32);
  if ((0 < *(int *)((int)this + 0x26)) || ((*(uint *)(param_1 + 0x9e) & 2) != 0)) {
    local_24 = FUN_00412c20(0x4a);
    local_8 = 1;
    if (local_24 == (undefined4 *)0x0) {
      local_36 = (int *)0x0;
    }
    else {
      local_36 = FUN_0042f970(local_24,0x2a,0,'\0',0,'\0');
    }
    local_8 = 0xffffffff;
    sVar8 = 1;
    if (0 < *(int *)((int)this + 0x26)) {
      do {
        FUN_00430370(this,(int)sVar8,&local_44);
        if (local_44 == (int *)0x0) {
          local_70[0] = 0;
        }
        else {
          FUN_0043e610(local_44,4,local_70,(int *)0x0,(int *)0x0);
        }
        if (local_40 == (int *)0x0) {
          local_5c[0] = 0;
        }
        else {
          FUN_0043e610(local_40,4,local_5c,(int *)0x0,(int *)0x0);
        }
        sVar8 = sVar8 + 1;
        local_48 = local_3c;
        (**(code **)(*local_36 + 0xe8))(local_70);
      } while ((int)sVar8 <= *(int *)((int)this + 0x26));
    }
    if ((*(byte *)(param_1 + 0x9e) & 2) != 0) {
      piVar10 = (int *)0x0;
      piVar7 = local_70;
      piVar9 = (int *)0x0;
      sVar8 = 4;
      piVar6 = (int *)FUN_00409600(local_18);
      FUN_0043e610(piVar6,sVar8,piVar7,piVar9,piVar10);
      if (*(char *)(local_18 + 0xab) == '\0') {
        piVar10 = (int *)0x0;
        piVar7 = local_5c;
        piVar9 = (int *)0x0;
        sVar8 = 4;
        piVar6 = (int *)FUN_00409610(local_18);
        FUN_0043e610(piVar6,sVar8,piVar7,piVar9,piVar10);
      }
      else {
        local_5c[0] = 0;
      }
      local_48 = 0;
      (**(code **)(*local_36 + 0xe8))(local_70);
    }
    local_32 = *(undefined4 *)(param_1 + 0x9e);
    local_270 = DAT_004d99e4;
    puVar5 = &local_26f;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    *(undefined1 *)((int)puVar5 + 2) = 0;
    (**(code **)(*local_28 + 0x118))(&local_270);
    local_2e = FUN_0043b970(&local_270);
    (**(code **)(**(int **)(param_1 + 0x96) + 0xe8))(local_38);
  }
  iVar4 = FUN_00409590(local_18);
  uVar1 = *(undefined4 *)(iVar4 + 0x26);
  DAT_004dc57c = 1;
  if (local_1c._3_1_ != '\0') {
    iVar4 = FUN_00409590(local_18);
    DAT_004dc578 = *(CView **)(iVar4 + 0x2a);
    DAT_004dc574 = uVar1;
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 4))(1);
    }
    if (local_1c._3_1_ != '\0') {
      (**(code **)(*(int *)DAT_004dc578 + 0x110))();
      local_1c = (CDocument *)FUN_004a5fed(0x86);
      this_00 = (CDocument *)0x0;
      local_8 = 2;
      if (local_1c != (CDocument *)0x0) {
        this_00 = FUN_00451220(local_1c);
      }
      local_8 = 0xffffffff;
      if (this_00 == (CDocument *)0x0) goto code_r0x004709e3;
      iVar4 = FUN_00451960(this_00,local_170);
      if (iVar4 == 0) {
        if (this_00 != (CDocument *)0x0) {
          (**(code **)(*(int *)this_00 + 4))(1);
          uVar3 = FUN_004709e3();
          return uVar3;
        }
        goto code_r0x004709e3;
      }
      *(CDocument **)(DAT_004dc578 + 0x4c) = this_00;
      CDocument::AddView(this_00,DAT_004dc578);
      local_18 = FUN_004b478b((int)DAT_004d99a8);
      piVar7 = (int *)FUN_004b479d(DAT_004d99a8,&local_18);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x60))(this_00);
      }
      goto LAB_004709c3;
    }
  }
  (**(code **)(*DAT_004d99a8 + 0x80))(local_170);
LAB_004709c3:
  DAT_004dc57c = 0;
  uVar3 = FUN_004709e3();
  return uVar3;
}


