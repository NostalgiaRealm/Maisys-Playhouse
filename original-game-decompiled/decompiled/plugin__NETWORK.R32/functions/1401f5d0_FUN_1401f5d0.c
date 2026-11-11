
/* ==== FUN_1401f5d0 @ 1401f5d0 ==== 
 * signature: uint __cdecl FUN_1401f5d0(undefined4 * param_1, char * * param_2, char * param_3, int param_4)
 * body: 1401f5d0-1401f618
 */

uint __cdecl FUN_1401f5d0(undefined4 *param_1,char **param_2,char *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  _LDBL12 local_c;
  
  uVar2 = ___strgtold12(&local_c,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_1401c750((ushort *)&local_c,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}


