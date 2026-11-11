
/* ==== FUN_120169b0 @ 120169b0 ==== 
 * signature: undefined4 __cdecl FUN_120169b0(undefined4 * param_1, undefined4 * param_2)
 * body: 120169b0-12016ae0
 */

undefined4 __cdecl FUN_120169b0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_120275d0((undefined2 *)((int)param_1 + 0xe),(undefined2 *)((int)param_2 + 0xe));
  if (param_1[4] != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,8,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,(undefined2 *)((int)param_1 + 0xe));
  }
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x2e));
    *(undefined4 *)((int)param_1 + 0x2e) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
  }
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x6a));
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
    *(undefined4 *)((int)param_1 + 0x62) = 0;
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  FUN_120273e0(0,(undefined2 *)(param_1 + 8),(int)(param_2 + 8));
  FUN_120273e0(0,(undefined2 *)(param_1 + 0x17),(int)(param_2 + 0x17));
  *(undefined4 *)((int)param_1 + 0x56) = *(undefined4 *)((int)param_2 + 0x56);
  *(undefined2 *)((int)param_1 + 0x5a) = *(undefined2 *)((int)param_2 + 0x5a);
  return 0;
}


