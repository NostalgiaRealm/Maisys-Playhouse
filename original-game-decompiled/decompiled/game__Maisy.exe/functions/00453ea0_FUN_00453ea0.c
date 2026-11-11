
/* ==== FUN_00453ea0 @ 00453ea0 ==== 
 * signature: bool __cdecl FUN_00453ea0(int param_1, char * param_2, undefined4 param_3)
 * body: 00453ea0-00453ecd
 */

bool __cdecl FUN_00453ea0(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00482390(param_2,param_3,param_1);
    return iVar1 == 0;
  }
  return false;
}


