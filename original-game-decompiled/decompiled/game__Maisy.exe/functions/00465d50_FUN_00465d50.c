
/* ==== FUN_00465d50 @ 00465d50 ==== 
 * signature: undefined __cdecl FUN_00465d50(undefined4 param_1, char * param_2, undefined4 param_3, char * param_4, int param_5, uint param_6, int param_7, uint param_8, int param_9, int param_10, ushort * param_11, char param_12)
 * body: 00465d50-00465e16
 */

void __cdecl
FUN_00465d50(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4,int param_5,
            uint param_6,int param_7,uint param_8,int param_9,int param_10,ushort *param_11,
            char param_12)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  if (param_8 == param_6) {
    local_8 = param_6;
    if (param_6 != 0) {
      do {
        FUN_00423c3f(param_1,param_2,param_3,param_4,param_5,1,param_7,1,param_9,param_10,param_11,
                     param_12);
        param_2 = param_2 + param_9;
        local_8 = local_8 - 1;
        param_4 = param_4 + param_10;
      } while (local_8 != 0);
      return;
    }
  }
  else {
    local_c = param_8 >> 1;
    for (uVar1 = param_8; uVar1 != 0; uVar1 = uVar1 - 1) {
      local_c = local_c - param_6;
      if ((int)local_c < 0) {
        FUN_00423c3f(param_1,param_2,param_3,param_4,param_5,1,param_7,1,param_9,param_10,param_11,
                     param_12);
        param_2 = param_2 + param_9;
        local_c = local_c + param_8;
      }
      param_4 = param_4 + param_10;
    }
  }
  return;
}


