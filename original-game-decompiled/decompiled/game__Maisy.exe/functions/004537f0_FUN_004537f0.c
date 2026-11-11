
/* ==== FUN_004537f0 @ 004537f0 ==== 
 * signature: bool __cdecl FUN_004537f0(int param_1, char * param_2, undefined4 param_3, undefined4 param_4)
 * body: 004537f0-0045383d
 */

bool __cdecl FUN_004537f0(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_30;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  
  if (param_1 != 0) {
    local_2e = 0;
    local_2a = param_4;
    local_26 = 0;
    local_30 = 0x66;
    local_22 = param_3;
    iVar1 = FUN_00482390(param_2,&local_30,param_1);
    return iVar1 == 0;
  }
  return false;
}


