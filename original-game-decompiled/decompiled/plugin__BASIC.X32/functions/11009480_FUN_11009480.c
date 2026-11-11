
/* ==== FUN_11009480 @ 11009480 ==== 
 * signature: undefined __cdecl FUN_11009480(undefined4 param_1, char * param_2, undefined4 param_3, char * param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, ushort * param_11, char param_12)
 * body: 11009480-11009563
 */

void __cdecl
FUN_11009480(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4,int param_5,
            int param_6,int param_7,int param_8,int param_9,int param_10,ushort *param_11,
            char param_12)

{
  int iVar1;
  uint uVar2;
  int local_4;
  
  if (param_8 == param_6) {
    local_4 = param_6;
    if (param_6 != 0) {
      do {
        FUN_110060d9(param_1,param_2,param_3,param_4,param_5,1,param_7,1,param_9,param_10,param_11,
                     param_12);
        local_4 = local_4 + -1;
        param_4 = param_4 + param_10;
        param_2 = param_2 + param_9;
      } while (local_4 != 0);
      return;
    }
  }
  else {
    uVar2 = param_6 - 1U >> 1;
    for (iVar1 = param_6; iVar1 != 0; iVar1 = iVar1 + -1) {
      FUN_110060d9(param_1,param_2,param_3,param_4,param_5,1,param_7,1,param_9,param_10,param_11,
                   param_12);
      uVar2 = (uVar2 - param_8) + 1;
      if ((int)uVar2 < 0) {
        param_4 = param_4 + param_10;
        uVar2 = param_6 + -1 + uVar2;
      }
      param_2 = param_2 + param_9;
    }
  }
  return;
}


