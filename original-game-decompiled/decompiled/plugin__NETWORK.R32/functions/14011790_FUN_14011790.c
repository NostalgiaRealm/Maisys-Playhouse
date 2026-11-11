
/* ==== FUN_14011790 @ 14011790 ==== 
 * signature: int __cdecl FUN_14011790(undefined4 param_1, int param_2, undefined2 * param_3, int * param_4, short param_5)
 * body: 14011790-1401199b
 */

int __cdecl
FUN_14011790(undefined4 param_1,int param_2,undefined2 *param_3,int *param_4,short param_5)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  undefined1 uStack_b1;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  short asStack_a4 [3];
  undefined1 *puStack_9e;
  undefined4 uStack_98;
  int local_94;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined4 uStack_8a;
  undefined2 uStack_84;
  undefined4 uStack_82;
  undefined2 uStack_58;
  int iStack_56;
  undefined2 auStack_2c [22];
  
  local_94 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_b0);
  sVar3 = 1;
  DAT_14028e48 = (*pcVar1)(local_b0,param_1,0x2c7,&local_a8);
  if (0 < param_5) {
    do {
      iStack_56 = (int)sVar3;
      uStack_58 = 1;
      FUN_140103b0(param_1,param_2,param_4,asStack_a4);
      if (asStack_a4[0] == 0x3a) {
        iVar2 = FUN_14011230(param_1,param_2,&uStack_84,&local_94,param_4,
                             CONCAT11(*puStack_9e,puStack_9e[1]),
                             CONCAT11(puStack_9e[2],puStack_9e[3]));
        if (iVar2 != 0) {
          return iVar2;
        }
        uStack_ac = uStack_82;
      }
      else if (asStack_a4[0] == 0x3d) {
        iVar2 = FUN_14011790(param_1,param_2,&uStack_84,param_4,CONCAT11(*puStack_9e,puStack_9e[1]))
        ;
        if (iVar2 != 0) {
          return iVar2;
        }
        uStack_ac = uStack_82;
      }
      else {
        iVar2 = FUN_14010a70(param_1,param_2,auStack_2c,asStack_a4,&uStack_b1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_14011a90(param_1,auStack_2c,&uStack_ac);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      sVar3 = sVar3 + 1;
      uStack_8e = uStack_98;
      uStack_8a = uStack_ac;
      uStack_90 = 0x75;
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,6,&local_b0);
      DAT_14028e48 = (*pcVar1)(local_b0,local_a8,s_value_14026664,&uStack_58,&uStack_90);
    } while (sVar3 <= param_5);
  }
  *param_3 = 0x69;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined4 *)(param_3 + 5) = 0;
  *(undefined4 *)(param_3 + 1) = local_a8;
  *(undefined4 *)(param_3 + 7) = 0;
  return 0;
}


