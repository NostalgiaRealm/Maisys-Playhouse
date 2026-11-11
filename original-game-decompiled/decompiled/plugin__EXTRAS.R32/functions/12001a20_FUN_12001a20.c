
/* ==== FUN_12001a20 @ 12001a20 ==== 
 * signature: int __cdecl FUN_12001a20(int param_1, short * param_2)
 * body: 12001a20-12001cd6
 */

int __cdecl FUN_12001a20(int param_1,short *param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  short local_38 [4];
  int local_30;
  short local_2c [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_12023290(param_1);
  }
  sVar1 = *param_2;
  if (sVar1 == 0x69) {
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[0] = 1;
    uVar2 = *(undefined4 *)(param_2 + 1);
    local_2c[0] = 0x32d5;
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[3] = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_30);
    DAT_12039a9c = (*pcVar4)(local_30,uVar2,s_value_120370b8,local_38,local_2c);
    if ((DAT_12039a9c != 0) || (uVar3 = 0, local_2c[0] != 0x32d5)) {
      local_2c[0] = 0x6a;
      pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_30);
      uVar3 = (*pcVar4)(local_30,uVar2,s_value_120370b8,local_38,local_2c);
    }
    DAT_12039a9c = uVar3;
    if (uVar3 == 0) {
      if (local_2c[0] == 0x32d5) {
        local_38[1] = 0;
        local_38[2] = 0;
        local_38[0] = 1;
        uVar3 = FUN_12001ce0(param_1,local_38,(int)local_2c);
      }
      else if ((((local_2c[0] == 1) && (*(short *)(param_1 + 0xe) == 0xf)) ||
               ((local_2c[0] == 0xf && (*(short *)(param_1 + 0xe) == 1)))) ||
              (((local_2c[0] == 0x6d && (*(short *)(param_1 + 0xe) == 0x69)) ||
               (*(short *)(param_1 + 0xe) == local_2c[0])))) {
        if (*(int *)(param_1 + 0x10) != 0) {
          FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                       CONCAT22((short)((uint)(param_1 + 0xe) >> 0x10),
                                *(undefined2 *)(param_1 + 0xe)),0);
        }
        local_38[0] = 1;
        local_38[1] = 1;
        local_38[2] = 0;
        uVar3 = FUN_12001000(param_1,(uint *)s_value_120370b8,local_38,local_2c);
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 3;
        uVar3 = 0x10000;
      }
      if (local_2c[0] == 0x32d5) {
        pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,1,&local_30);
        DAT_12039a9c = (*pcVar4)(local_30,local_24);
      }
      else {
        FUN_12018a40(param_1,local_2c);
      }
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
    return uVar3;
  }
  if ((((sVar1 != 1) || (*(short *)(param_1 + 0xe) != 0xf)) &&
      ((sVar1 != 0xf || (*(short *)(param_1 + 0xe) != 1)))) &&
     (((sVar1 != 0x6d || (*(short *)(param_1 + 0xe) != 0x69)) &&
      (*(short *)(param_1 + 0xe) != sVar1)))) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    return 0x10000;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                 CONCAT22((short)((uint)(param_1 + 0xe) >> 0x10),*(undefined2 *)(param_1 + 0xe)),0);
  }
  local_38[0] = 1;
  local_38[1] = 1;
  local_38[2] = 0;
  uVar3 = FUN_12001000(param_1,(uint *)s_value_120370b8,local_38,param_2);
  return uVar3;
}


