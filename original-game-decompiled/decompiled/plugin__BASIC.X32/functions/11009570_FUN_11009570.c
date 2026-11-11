
/* ==== FUN_11009570 @ 11009570 ==== 
 * signature: undefined __cdecl FUN_11009570(undefined4 param_1, char * param_2, undefined4 param_3, char * param_4, int param_5, uint param_6, int param_7, uint param_8, int param_9, int param_10, ushort * param_11, char param_12)
 * body: 11009570-11009654
 */

void __cdecl
FUN_11009570(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4,int param_5,
            uint param_6,int param_7,uint param_8,int param_9,int param_10,ushort *param_11,
            char param_12)

{
  uint uVar1;
  char *pcVar2;
  uint local_8;
  uint local_4;
  
  if (param_6 == param_8) {
    local_8 = param_6;
    if (param_6 != 0) {
      do {
        FUN_110061e3(param_1,param_2,param_3,param_4,param_5,1,param_7,1,param_9,param_10,param_11,
                     param_12);
        local_8 = local_8 - 1;
        param_4 = param_4 + param_10;
        param_2 = param_2 + param_9;
      } while (local_8 != 0);
      return;
    }
  }
  else {
    local_4 = param_8 >> 1;
    for (uVar1 = param_8; uVar1 != 0; uVar1 = uVar1 - 1) {
      local_4 = local_4 - param_6;
      pcVar2 = param_2;
      if ((int)local_4 < 0) {
        pcVar2 = param_2 + param_9;
        FUN_110061e3(param_1,param_2,param_3,param_4,param_5,1,param_7,1,param_9,param_10,param_11,
                     param_12);
        local_4 = local_4 + param_8;
      }
      param_4 = param_4 + param_10;
      param_2 = pcVar2;
    }
  }
  return;
}


