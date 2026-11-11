
/* ==== FUN_12016880 @ 12016880 ==== 
 * signature: undefined4 __cdecl FUN_12016880(undefined4 * param_1, undefined4 * param_2)
 * body: 12016880-120169a1
 */

undefined4 __cdecl FUN_12016880(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  short sVar5;
  int local_4;
  
  *(undefined2 *)param_1 = 0x17;
  sVar5 = 0;
  *(undefined2 *)((int)param_1 + 0x56) = 1;
  *(undefined4 *)((int)param_1 + 6) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 2) = 1;
  puVar1 = (undefined2 *)((int)param_1 + 0xe);
  *(undefined2 *)(param_1 + 0x17) = 0x66;
  *(undefined2 *)(param_1 + 8) = 0x66;
  uVar2 = FUN_12027340((int)param_1);
  *puVar1 = 0x69;
  *(undefined4 *)((int)param_1 + 10) = uVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[7] = (undefined4 *)((int)param_1 + 0x32);
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  do {
    iVar4 = (int)sVar5;
    sVar5 = sVar5 + 1;
    *(undefined4 *)((int)param_1 + iVar4 * 4 + 0x36) = 0;
  } while (sVar5 < 8);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_120275d0(puVar1,(undefined2 *)((int)param_2 + 0xe));
  if (param_1[4] != 0) {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,8,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,puVar1);
  }
  FUN_120273e0(0,(undefined2 *)(param_1 + 8),(int)(param_2 + 8));
  FUN_120273e0(0,(undefined2 *)(param_1 + 0x17),(int)(param_2 + 0x17));
  *(undefined4 *)((int)param_1 + 0x56) = *(undefined4 *)((int)param_2 + 0x56);
  *(undefined2 *)((int)param_1 + 0x5a) = *(undefined2 *)((int)param_2 + 0x5a);
  return 0;
}


