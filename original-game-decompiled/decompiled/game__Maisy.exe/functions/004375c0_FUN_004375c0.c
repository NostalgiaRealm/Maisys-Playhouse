
/* ==== FUN_004375c0 @ 004375c0 ==== 
 * signature: uint __cdecl FUN_004375c0(undefined4 param_1, int param_2, char * param_3, undefined1 * param_4)
 * body: 004375c0-00437749;00437761-0043777c
 */

uint __cdecl FUN_004375c0(undefined4 param_1,int param_2,char *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *unaff_FS_OFFSET;
  char local_430 [256];
  char local_330 [256];
  char local_230 [260];
  DWORD local_12c [5];
  char local_118 [260];
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043774a;
  *unaff_FS_OFFSET = &local_10;
  if (param_3 == (char *)0x0) {
    param_3 = local_430;
  }
  if (*(int *)(DAT_004dae3c + 0x7254) == 0) {
    local_14 = FUN_00412c20(0x4a);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (local_14 != (undefined4 *)0x0) {
      puVar2 = FUN_0042f970(local_14,0x118,0,'\0',0,'\0');
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(DAT_004dae3c + 0x7254) = puVar2;
    FUN_0043f550(local_330);
    __makepath(local_230,(char *)0x0,local_330,(char *)&DAT_004dafd4,&DAT_004dafd8);
    pvVar3 = __findfirst(local_230,local_12c);
    if (pvVar3 != (HANDLE)0xffffffff) {
      (**(code **)(**(int **)(DAT_004dae3c + 0x7254) + 0xe8))(local_12c);
      iVar4 = __findnext(pvVar3,local_12c);
      while (iVar4 != -1) {
        (**(code **)(**(int **)(DAT_004dae3c + 0x7254) + 0xe8))(local_12c);
        iVar4 = __findnext(pvVar3,local_12c);
      }
      FUN_004905d0(pvVar3);
    }
  }
  if (*(int *)((int)*(void **)(DAT_004dae3c + 0x7254) + 0x26) < param_2) {
    *param_3 = '\0';
    *param_4 = 0;
    uVar5 = (uint)param_4 & 0xffffff00;
  }
  else {
    FUN_00430370(*(void **)(DAT_004dae3c + 0x7254),param_2,local_12c);
    uVar5 = 0xffffffff;
    pcVar7 = local_118;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      param_3 = param_3 + 1;
    }
    uVar5 = CONCAT31((int3)(uVar5 >> 8),1);
    *param_4 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar5;
}


