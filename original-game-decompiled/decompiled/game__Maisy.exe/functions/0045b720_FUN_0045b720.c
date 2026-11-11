
/* ==== FUN_0045b720 @ 0045b720 ==== 
 * signature: undefined __thiscall FUN_0045b720(void * this, int * param_1)
 * body: 0045b720-0045b7fd;0045b815-0045b887
 */

void __thiscall FUN_0045b720(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045b7fe;
  *unaff_FS_OFFSET = &local_10;
  if ((*param_1 <= param_1[1]) && (param_1[1] != *param_1)) {
    if (*(int *)this == 0) {
      local_14 = FUN_00412c20(0x4a);
      local_8 = 0;
      puVar1 = (undefined4 *)0x0;
      if (local_14 != (undefined4 *)0x0) {
        puVar1 = FUN_0042f8d0(local_14);
      }
      local_8 = 0xffffffff;
      *(undefined4 **)this = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a3538();
      }
      FUN_0042fb50(*(void **)this,8,0,'\0',0);
    }
    puVar1 = (undefined4 *)0x0;
    local_14 = *(undefined4 **)(*(int *)this + 0x26);
    piVar2 = (int *)FUN_00430190(*(int *)this);
    if (0 < (int)local_14) {
      iVar4 = param_1[1];
      piVar3 = piVar2;
      do {
        if (iVar4 < *piVar3) {
          FUN_004301f0(*(int *)this);
          goto LAB_0045b7e5;
        }
        if (*param_1 <= piVar3[1]) {
          local_18 = piVar2 + (int)puVar1 * 2;
          piVar3 = local_18;
          iVar6 = (int)puVar1;
          goto LAB_0045b82c;
        }
        piVar3 = piVar3 + 2;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      } while ((int)puVar1 < (int)local_14);
    }
    FUN_004301f0(*(int *)this);
    puVar1 = local_14;
LAB_0045b7e5:
    FUN_0042ff60(*(void **)this,(int)puVar1 + 1,param_1);
  }
  goto LAB_0045b7ec;
  while (*piVar3 <= iVar4) {
LAB_0045b82c:
    iVar5 = iVar6;
    piVar3 = piVar3 + 2;
    iVar6 = iVar5 + 1;
    if ((int)local_14 <= iVar6) break;
  }
  local_1c = piVar2[iVar6 * 2 + -1];
  if (piVar2[iVar6 * 2 + -1] <= iVar4) {
    local_1c = iVar4;
  }
  local_20 = *param_1;
  if (*local_18 <= *param_1) {
    local_20 = *local_18;
  }
  iVar4 = (int)puVar1 + 1;
  FUN_004301f0(*(int *)this);
  FUN_0042ff10(*(void **)this,iVar4,&local_20);
  while (iVar4 < iVar5) {
    iVar4 = iVar4 + 1;
    FUN_00430090(*(void **)this,iVar4);
  }
LAB_0045b7ec:
  *unaff_FS_OFFSET = local_10;
  return;
}


