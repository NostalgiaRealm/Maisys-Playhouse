
/* ==== FUN_14015100 @ 14015100 ==== 
 * signature: undefined4 __cdecl FUN_14015100(char * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 14015100-14015665
 */

undefined4 __cdecl FUN_14015100(char *param_1,undefined4 *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char *local_240;
  char *local_23c;
  char *local_238;
  short local_234;
  char *local_232;
  short local_22e;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  short asStack_214 [2];
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int local_200 [64];
  int aiStack_100 [64];
  
  iVar4 = 0;
  local_234 = 0;
  local_238 = (char *)0x0;
  FUN_140150c0(&local_240,param_1);
  FUN_14015050(&local_23c,local_240,0x14026c04,0);
  local_232 = local_240;
  local_22e = (short)local_23c - (short)local_240;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,local_200);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(local_200[0],param_3,&local_238);
  local_240 = local_23c + 1;
  FUN_14015050(&local_23c,local_240,0x14026c04,0);
  local_232 = local_240;
  local_22e = (short)local_23c - (short)local_240;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,aiStack_100);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(aiStack_100[0],param_3,&local_238);
  local_240 = local_23c + 1;
  FUN_14015050(&local_23c,local_240,0x14026228,0);
  FUN_14015050((undefined4 *)asStack_214,local_23c,0x14026b7c,1);
  local_22e = (short)local_23c - asStack_214[0];
  local_232 = local_240;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_228);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_228,param_3,&local_238);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_224);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_224,&iStack_22c,local_240,"mMsg/1.1",8);
  local_240 = local_23c;
  local_22e = 0;
  local_232 = (char *)0x0;
  bVar5 = iStack_22c == 0;
  local_234 = 0;
  local_238 = (char *)0x0;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_220);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_220,param_3,&local_238);
  if ((*local_240 == '\r') && (local_240[1] == '\n')) {
    local_240 = local_240 + 2;
    cVar2 = *local_240;
    while (((cVar2 != '\0' && (*local_240 != '\r')) && (local_240[1] != '\n'))) {
      FUN_14015050(&local_23c,local_240,0x140265e0,0);
      local_238 = local_240;
      pcVar1 = local_23c + 1;
      local_234 = (short)local_23c - (short)local_240;
      local_23c = pcVar1;
      FUN_140150c0(&local_240,pcVar1);
      FUN_14015050(&local_23c,local_240,0x14026228,0);
      local_232 = local_240;
      local_22e = (short)local_23c - (short)local_240;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_228);
      DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_228,param_3,&local_238);
      if (bVar5) {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_224);
        DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_224,&iStack_22c,local_238,&DAT_14026bf0,3);
        if (iStack_22c == 0) {
          iStack_21c = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&iStack_220);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_220,local_200,local_232,(int)local_22e);
          *(undefined1 *)((int)local_200 + (int)local_22e) = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&iStack_210);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_210,&iStack_21c,local_200);
          if (DAT_14028e48 == (undefined4 *)0x0) {
            iVar4 = iStack_21c;
          }
        }
      }
      else {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_20c);
        DAT_14028e48 = (undefined4 *)
                       (*pcVar3)(iStack_20c,&iStack_22c,local_238,s_Content_Length__14026b6c,0xf);
        if (iStack_22c == 0) {
          iStack_218 = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&iStack_208);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_208,aiStack_100,local_232,(int)local_22e);
          *(undefined1 *)((int)aiStack_100 + (int)local_22e) = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&iStack_204);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_204,&iStack_218,aiStack_100);
          if (DAT_14028e48 == (undefined4 *)0x0) {
            iVar4 = iStack_218;
          }
        }
      }
      local_240 = local_23c + 2;
      cVar2 = *local_240;
    }
  }
  local_240 = local_240 + 2;
  *param_2 = local_240 + (iVar4 - (int)param_1);
  if (0 < iVar4) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,local_200);
    DAT_14028e48 = (undefined4 *)(*pcVar3)(local_200[0],param_3,4,&local_238);
    local_22e = (short)iVar4;
    local_232 = local_240;
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,aiStack_100);
    param_2 = (undefined4 *)(*pcVar3)(aiStack_100[0],param_3,4,&local_238);
    DAT_14028e48 = param_2;
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


