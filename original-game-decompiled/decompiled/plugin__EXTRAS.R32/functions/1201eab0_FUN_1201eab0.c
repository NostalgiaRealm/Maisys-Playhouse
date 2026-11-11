
/* ==== FUN_1201eab0 @ 1201eab0 ==== 
 * signature: undefined4 __cdecl FUN_1201eab0(int param_1, int param_2, undefined4 param_3, short param_4, undefined1 * param_5, undefined4 * param_6)
 * body: 1201eab0-1201ebe6
 */

undefined4 __cdecl
FUN_1201eab0(int param_1,int param_2,undefined4 param_3,short param_4,undefined1 *param_5,
            undefined4 *param_6)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 *puVar4;
  int local_34;
  int iStack_30;
  undefined2 local_2c [22];
  
  if (param_4 == 7) {
    local_2c[0] = 0;
    pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_34);
    DAT_12039a9c = (*pcVar1)(local_34,7,local_2c);
    switch(local_2c[0]) {
    case 0:
    case 1:
    case 0xb:
    case 100:
    case 0x6e:
    case 0x73:
      *param_5 = 1;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_34);
      puVar4 = (undefined2 *)(param_1 + 0x62);
      DAT_12039a9c = (*pcVar1)(local_34,0,puVar4);
      *puVar4 = 0;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_30);
      DAT_12039a9c = (*pcVar1)(iStack_30,puVar4,local_2c);
      break;
    default:
      *param_5 = 0;
      pcVar3 = s_Value_in_Range_Cel_popup_is_of_a_12037b18;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        param_6 = param_6 + 1;
      }
      *(undefined2 *)param_6 = *(undefined2 *)pcVar3;
      *(char *)((int)param_6 + 2) = pcVar3[2];
    }
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_34);
    DAT_12039a9c = (*pcVar1)(local_34,0,local_2c);
  }
  return 0;
}


