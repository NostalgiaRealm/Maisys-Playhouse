
/* ==== FUN_110060d9 @ 110060d9 ==== 
 * signature: undefined __cdecl FUN_110060d9(undefined4 param_1, char * param_2, undefined4 param_3, char * param_4, int param_5, uint param_6, int param_7, uint param_8, int param_9, int param_10, ushort * param_11, char param_12)
 * body: 110060d9-11006167
 */

void __cdecl
FUN_110060d9(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4,int param_5,
            uint param_6,int param_7,uint param_8,int param_9,int param_10,ushort *param_11,
            char param_12)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint local_c;
  uint local_8;
  
  if ((((param_6 != 0) && (param_5 != 0)) && (param_7 != 0)) && (param_8 != 0)) {
    local_8 = param_8;
    local_c = param_8 >> 1;
    do {
      bVar5 = local_c < param_6;
      local_c = local_c - param_6;
      if (bVar5) {
        local_c = local_c + param_8;
        puVar1 = param_11;
        iVar4 = param_7;
        do {
          uVar3 = (uint)*puVar1;
          puVar2 = puVar1 + 1;
          iVar4 = iVar4 - uVar3;
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            if (*param_4 != param_12) {
              *param_2 = *param_4;
            }
            param_2 = param_2 + 1;
            param_4 = param_4 + 1;
          }
          puVar1 = puVar1 + 2;
          param_4 = param_4 + *puVar2;
          iVar4 = iVar4 - (uint)*puVar2;
        } while (iVar4 != 0);
        param_2 = param_2 + (param_9 - param_5);
      }
      else {
        param_4 = param_4 + param_7;
      }
      param_4 = param_4 + (param_10 - param_7);
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return;
}


