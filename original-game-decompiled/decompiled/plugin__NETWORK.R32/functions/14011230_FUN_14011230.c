
/* ==== FUN_14011230 @ 14011230 ==== 
 * signature: int __cdecl FUN_14011230(undefined4 param_1, int param_2, undefined2 * param_3, int * param_4, int * param_5, short param_6, short param_7)
 * body: 14011230-140113b1
 */

int __cdecl
FUN_14011230(undefined4 param_1,int param_2,undefined2 *param_3,int *param_4,int *param_5,
            short param_6,short param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_99;
  int local_98;
  short asStack_94 [8];
  undefined2 uStack_84;
  int iStack_82;
  undefined2 uStack_58;
  int iStack_56;
  undefined2 auStack_2c [22];
  
  local_99 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0xe,&local_98);
  iVar3 = (*pcVar2)(local_98,param_1,s_ListMod_14026808,param_4);
  DAT_14028e48 = iVar3;
  if (iVar3 == 0) {
    iStack_82 = (int)param_6;
    uStack_84 = 1;
    pcVar2 = (code *)FUN_14008ab0(*param_4,0,0x17,&local_98);
    iVar3 = (*pcVar2)(local_98,s_listtype_140267f0,0,&uStack_84);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      iVar3 = 1;
      if (0 < param_7) {
        do {
          DAT_14028e48 = 0;
          uStack_58 = 1;
          iStack_56 = iVar3;
          FUN_140103b0(param_1,param_2,param_5,asStack_94);
          iVar4 = FUN_14010a70(param_1,param_2,auStack_2c,asStack_94,&local_99);
          if (iVar4 != 0) {
            return iVar4;
          }
          pcVar2 = (code *)FUN_14008ab0(*param_4,0,0x17,&local_98);
          DAT_14028e48 = (*pcVar2)(local_98,s_insert_14026798,&uStack_58,auStack_2c);
          if (DAT_14028e48 != 0) {
            return DAT_14028e48;
          }
          iVar3 = iVar3 + 1;
          DAT_14028e48 = 0;
        } while (iVar3 <= param_7);
      }
      puVar5 = (undefined4 *)FUN_14008a90(0,*param_4);
      uVar1 = *puVar5;
      *param_3 = 0x69;
      *(undefined4 *)(param_3 + 3) = 0;
      iVar3 = 0;
      *(undefined4 *)(param_3 + 5) = 0;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *(undefined4 *)(param_3 + 7) = 0;
    }
  }
  return iVar3;
}


