
/* ==== FUN_00448390 @ 00448390 ==== 
 * signature: undefined4 __cdecl FUN_00448390(int param_1, int param_2, void * param_3)
 * body: 00448390-00448453
 */

undefined4 __cdecl FUN_00448390(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 local_74 [22];
  short local_48;
  int local_46;
  int *local_1c [3];
  int *local_10 [3];
  
  local_48 = 1;
  iVar4 = 0;
  local_74[0] = 0;
  FUN_00430370(param_3,param_2 + 1,local_1c);
  FUN_00430370(param_3,param_1 + 1,local_10);
  if (local_1c[0] != (int *)0x0) {
    iVar1 = (**(code **)(*local_1c[0] + 0x98))(s_purgesize_004d9908,local_74,&local_48);
    if ((iVar1 == 0) && (local_48 == 1)) {
      iVar4 = local_46;
    }
  }
  iVar1 = 0;
  if (local_10[0] != (int *)0x0) {
    iVar1 = (**(code **)(*local_10[0] + 0x84))();
    iVar2 = (**(code **)(*local_10[0] + 0x98))(s_purgesize_004d9908,local_74,&local_48);
    if ((iVar2 == 0) && (local_48 == 1)) {
      iVar1 = local_46;
    }
  }
  if (iVar1 < iVar4) {
    return 1;
  }
  uVar3 = 0xffffffff;
  if (iVar1 <= iVar4) {
    uVar3 = 0;
  }
  return uVar3;
}


