
/* ==== FUN_12023900 @ 12023900 ==== 
 * signature: undefined4 __cdecl FUN_12023900(int param_1, short param_2, char param_3)
 * body: 12023900-12023991
 */

undefined4 __cdecl FUN_12023900(int param_1,short param_2,char param_3)

{
  undefined4 in_EAX;
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  int local_8;
  int local_4;
  
  if (param_1 == 0) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),1);
  }
  local_8 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1,&local_8);
  if (param_2 == 0x69) {
    return CONCAT22((short)((uint)DAT_12039a9c >> 0x10),3);
  }
  pcVar1 = FUN_12023ca0;
  puVar2 = FUN_12023a80(param_2,param_3);
  uVar3 = FUN_12009c00(local_8,puVar2,pcVar1,param_1);
  return uVar3 & 0xffff0000;
}


