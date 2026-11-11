
/* ==== FUN_00457af0 @ 00457af0 ==== 
 * signature: undefined4 __cdecl FUN_00457af0(int * param_1, int param_2, HLOCAL param_3, int * param_4, SIZE_T * param_5)
 * body: 00457af0-00457c7c
 */

undefined4 __cdecl
FUN_00457af0(int *param_1,int param_2,HLOCAL param_3,int *param_4,SIZE_T *param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char local_438 [1024];
  short local_38;
  int *local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  int local_c;
  int *local_8;
  
  local_8 = (int *)*param_1;
  (**(code **)((int)local_8 + 0x70))(local_438);
  if (0 < param_2) {
    local_c = param_2;
    do {
      FUN_00457c80(param_3,param_4,param_5,&DAT_004dbd18);
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
  }
  FUN_00457c80(param_3,param_4,param_5,local_438);
  FUN_00457c80(param_3,param_4,param_5,&DAT_004dbd14);
  iVar1 = param_2 + 1;
  local_8 = (int *)(**(code **)((int)local_8 + 0x188))();
  while (local_8 != (int *)0x0) {
    if (*(short *)((int)local_8 + 0x22) == 0x51) {
      FUN_00457af0(local_8,iVar1,param_3,param_4,param_5);
    }
    else {
      iVar2 = iVar1;
      if (0 < iVar1) {
        do {
          local_c = iVar2;
          FUN_00457c80(param_3,param_4,param_5,&DAT_004dbd18);
          local_c = local_c + -1;
          iVar2 = local_c;
        } while (local_c != 0);
      }
      pcVar3 = (char *)(**(code **)(*local_8 + 0x114))();
      FUN_00457c80(param_3,param_4,param_5,pcVar3);
      FUN_00457c80(param_3,param_4,param_5,(char *)&DAT_004db560);
      local_32 = 0;
      local_36 = local_8;
      local_2e = 0;
      local_2a = 0;
      local_38 = 0x69;
      FUN_00456560(&local_38,local_438,0x3ff,(int *)0x0);
      FUN_00457c80(param_3,param_4,param_5,local_438);
    }
    local_8 = (int *)(**(code **)(*local_8 + 0x174))();
    if ((iVar1 != 1) || (local_8 != (int *)0x0)) {
      FUN_00457c80(param_3,param_4,param_5,&DAT_004dbb00);
    }
  }
  return 0;
}


