
/* ==== FUN_14011a90 @ 14011a90 ==== 
 * signature: int __cdecl FUN_14011a90(undefined4 param_1, undefined2 * param_2, undefined4 * param_3)
 * body: 14011a90-14011cf2
 */

int __cdecl FUN_14011a90(undefined4 param_1,undefined2 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_30;
  undefined2 local_2c;
  undefined4 local_2a;
  
  local_2c = 1;
  local_2a = 1;
  switch(*param_2) {
  case 1:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x322;
    break;
  default:
    return 0x10000;
  case 10:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x326;
    break;
  case 0xb:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x324;
    break;
  case 0xf:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x328;
    break;
  case 0x10:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x327;
    break;
  case 0x14:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x321;
    break;
  case 0x66:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x329;
    break;
  case 0x69:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x323;
  }
  DAT_14028e48 = (*pcVar1)(local_30,param_1,uVar2,param_3);
  if (DAT_14028e48 != 0) {
    return DAT_14028e48;
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,6,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,*param_3,s_value_14026664,&local_2c,param_2);
  return DAT_14028e48;
}


