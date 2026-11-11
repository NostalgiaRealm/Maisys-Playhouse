
/* ==== FUN_110148b0 @ 110148b0 ==== 
 * signature: char __cdecl FUN_110148b0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 * param_4)
 * body: 110148b0-11014900
 */

char __cdecl FUN_110148b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  char local_4;
  
  local_10 = 0;
  local_4 = '\0';
  local_c = param_3;
  if (param_2 != 0) {
    FUN_110143e0(param_1,param_2,FUN_11014910,&local_10);
    if (local_4 != '\0') {
      *param_4 = local_8;
    }
  }
  return local_4;
}


