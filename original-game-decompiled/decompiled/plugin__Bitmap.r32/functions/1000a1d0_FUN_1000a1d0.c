
/* ==== FUN_1000a1d0 @ 1000a1d0 ==== 
 * signature: undefined __cdecl FUN_1000a1d0(undefined4 * param_1, char * param_2, int param_3, uint param_4, int param_5)
 * body: 1000a1d0-1000a234
 */

void __cdecl FUN_1000a1d0(undefined4 *param_1,char *param_2,int param_3,uint param_4,int param_5)

{
  if ((param_3 != 0x65) && (param_3 != 0x45)) {
    if (param_3 == 0x66) {
      FUN_10009fe0(param_1,param_2,param_4);
      return;
    }
    FUN_1000a110(param_1,param_2,param_4,param_5);
    return;
  }
  FUN_10009e60(param_1,param_2,param_4,param_5);
  return;
}


