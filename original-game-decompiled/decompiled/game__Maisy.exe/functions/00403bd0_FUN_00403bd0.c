
/* ==== FUN_00403bd0 @ 00403bd0 ==== 
 * signature: undefined __thiscall FUN_00403bd0(void * this, short param_1, int * param_2, char param_3, int * param_4)
 * body: 00403bd0-00403dc2;00403dd0-00403e64;00403e7c-00404032
 */

void __thiscall FUN_00403bd0(void *this,short param_1,int *param_2,char param_3,int *param_4)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uVar9;
  short local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00403e65;
  *unaff_FS_OFFSET = &local_10;
  switch(param_1) {
  case 0:
    if (*(int *)((int)this + 0x162) == 0) {
      if (param_3 == '\0') {
        if (*(void **)((int)this + 0x62) != (void *)0x0) {
          FUN_00430790(*(void **)((int)this + 0x62),(int)param_2);
        }
      }
      else {
        uVar7 = FUN_00430570(*(void **)((int)this + 0x62),(int)param_2);
        if ((char)uVar7 == '\0') {
          FUN_004306b0(*(void **)((int)this + 0x62),param_2);
        }
      }
    }
    break;
  case 4:
    if (param_3 == '\0') {
      if (*(int **)((int)this + 0x42) != (int *)0x0) {
        FUN_004040c0(this,*(int **)((int)this + 0x42));
        *(undefined4 *)((int)this + 0x42) = 0;
      }
    }
    else if ((*(byte *)((int)param_2 + 0x1e) & 0x10) != 0) {
      if (*(int **)((int)this + 0x42) != (int *)0x0) {
        FUN_004040c0(this,*(int **)((int)this + 0x42));
      }
      iVar5 = FUN_00404070(this,param_2);
      *(int *)((int)this + 0x42) = iVar5;
    }
    break;
  case 8:
  case 9:
    if (param_4 == (int *)0x0) {
      param_4 = param_2;
    }
    if (param_2 == (int *)0x0) break;
    bVar3 = true;
    bVar4 = false;
    local_14 = FUN_004063d0(this,(int)param_2);
    if (local_14 == -1) {
      local_14 = FUN_00406440(this,param_2);
      if (local_14 == -1) {
        if (param_3 == '\0') break;
        FUN_00406bb0(this,0,param_2,(undefined4 *)0x0);
        bVar4 = true;
        local_14 = FUN_004063d0(this,(int)param_2);
        if (local_14 != -1) goto LAB_00403d31;
        local_14 = FUN_00406440(this,param_2);
        if (local_14 == -1) break;
      }
      bVar3 = false;
    }
LAB_00403d31:
    if (bVar3) {
      iVar5 = *(int *)((int)this + 0x56);
    }
    else {
      iVar5 = *(int *)((int)this + 0x52);
    }
    iVar5 = FUN_00430190(iVar5);
    if (param_1 == 9) {
      if (param_3 == '\0') {
        piVar2 = (int *)(local_14 * 0x1a + 0x14 + iVar5);
        if ((void *)*piVar2 != (void *)0x0) {
          FUN_00430790((void *)*piVar2,(int)param_4);
          puVar8 = (undefined4 *)*piVar2;
          sVar1 = *(short *)(puVar8 + 3);
joined_r0x00403e98:
          if (sVar1 == 0) {
            FUN_00430540(puVar8);
            *piVar2 = 0;
          }
        }
      }
      else {
        piVar2 = (int *)(local_14 * 0x1a + 0x14 + iVar5);
        if (*piVar2 == 0) {
          puVar6 = (undefined4 *)FUN_004a5fed(0xe);
          puVar8 = (undefined4 *)0x0;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = &PTR_FUN_004be070;
            puVar8 = puVar6;
          }
          local_8 = 0xffffffff;
          *piVar2 = (int)puVar8;
          FUN_00430500(puVar8,this);
        }
        uVar7 = FUN_00430570((void *)*piVar2,(int)param_4);
        if ((char)uVar7 == '\0') {
          FUN_004306b0((void *)*piVar2,param_4);
        }
      }
    }
    else if (param_3 == '\0') {
      piVar2 = (int *)(local_14 * 0x1a + 0x10 + iVar5);
      if ((void *)*piVar2 != (void *)0x0) {
        FUN_00430790((void *)*piVar2,(int)param_4);
        puVar8 = (undefined4 *)*piVar2;
        sVar1 = *(short *)(puVar8 + 3);
        goto joined_r0x00403e98;
      }
    }
    else {
      piVar2 = (int *)(local_14 * 0x1a + 0x10 + iVar5);
      if (*piVar2 == 0) {
        puVar6 = (undefined4 *)FUN_004a5fed(0xe);
        puVar8 = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = &PTR_FUN_004be070;
          puVar8 = puVar6;
        }
        local_8 = 0xffffffff;
        *piVar2 = (int)puVar8;
        FUN_00430500(puVar8,this);
      }
      uVar7 = FUN_00430570((void *)*piVar2,(int)param_4);
      if ((char)uVar7 == '\0') {
        FUN_004306b0((void *)*piVar2,param_4);
      }
    }
    if (bVar4) {
      *(undefined1 *)(local_14 * 0x1a + 0x18 + iVar5) = 0;
    }
    if (bVar3) {
      FUN_004301f0(*(int *)((int)this + 0x56));
    }
    else {
      FUN_004301f0(*(int *)((int)this + 0x52));
    }
    break;
  case 10:
    if (param_3 == '\0') {
      FUN_00430790(*(void **)((int)this + 0x6a),(int)param_2);
    }
    else {
      uVar7 = FUN_00430570(*(void **)((int)this + 0x6a),(int)param_2);
      if ((char)uVar7 == '\0') {
        FUN_004306b0(*(void **)((int)this + 0x6a),param_2);
      }
    }
    break;
  case 0xb:
    if (param_3 == '\0') {
      FUN_00430790(*(void **)((int)this + 0x6e),(int)param_2);
    }
    else if ((*(char *)((int)this + 0xaf) == '\0') &&
            (uVar7 = FUN_00430570(*(void **)((int)this + 0x6e),(int)param_2), (char)uVar7 == '\0'))
    {
      FUN_004306b0(*(void **)((int)this + 0x6e),param_2);
    }
    break;
  case 0xc:
    if (param_3 == '\0') {
      if (*(void **)((int)this + 0x66) != (void *)0x0) {
        FUN_00430790(*(void **)((int)this + 0x66),(int)param_2);
      }
    }
    else {
      uVar7 = FUN_00430570(*(void **)((int)this + 0x66),(int)param_2);
      if ((char)uVar7 == '\0') {
        FUN_004306b0(*(void **)((int)this + 0x66),param_2);
      }
    }
    break;
  case 0xd:
    if (param_3 == '\0') {
      piVar2 = *(int **)((int)this + 0x15c);
      if ((piVar2 != (int *)0x0) && (param_2 == piVar2)) {
        uVar9 = 0;
        uVar7 = FUN_00458a00(*(int *)((int)this + 0x2a));
        (**(code **)(*piVar2 + 0x1c8))(uVar7,uVar9);
        *(undefined4 *)((int)this + 0x15c) = 0;
      }
    }
    else {
      piVar2 = *(int **)((int)this + 0x15c);
      if (piVar2 != (int *)0x0) {
        uVar9 = 0;
        uVar7 = FUN_00458a00(*(int *)((int)this + 0x2a));
        (**(code **)(*piVar2 + 0x1c8))(uVar7,uVar9);
        *(undefined4 *)((int)this + 0x15c) = 0;
      }
      if ((param_2 != (int *)0x0) && ((*(byte *)((int)param_2 + 0x21) & 8) != 0)) {
        uVar9 = 0;
        *(int **)((int)this + 0x15c) = param_2;
        uVar7 = FUN_00458a00(*(int *)((int)this + 0x2a));
        (**(code **)(*param_2 + 0x1c4))(uVar7,uVar9);
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


