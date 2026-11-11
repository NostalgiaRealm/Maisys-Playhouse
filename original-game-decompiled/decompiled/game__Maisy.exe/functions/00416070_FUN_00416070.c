
/* ==== FUN_00416070 @ 00416070 ==== 
 * signature: uint __cdecl FUN_00416070(int * param_1, int * param_2, char * param_3, short * param_4, undefined4 param_5)
 * body: 00416070-00416285
 */

uint __cdecl FUN_00416070(int *param_1,int *param_2,char *param_3,short *param_4,undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  undefined3 extraout_var;
  int iVar4;
  char cVar5;
  short *psVar6;
  short *psVar7;
  short local_fc [22];
  undefined2 local_d0;
  undefined4 local_ce;
  short local_a4 [21];
  int local_7a;
  short local_74 [22];
  short local_48 [2];
  LPVOID local_44;
  int local_18 [4];
  char local_5;
  
  cVar5 = '\0';
  psVar6 = param_4;
  psVar7 = local_48;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)psVar7 = *(undefined4 *)psVar6;
    psVar6 = psVar6 + 2;
    psVar7 = psVar7 + 2;
  }
  *psVar7 = *psVar6;
  piVar2 = (int *)FUN_004374f0(param_3,(char *)local_18);
  if (param_2 == (int *)0x0) goto LAB_0041627d;
  local_74[0] = 0;
  local_5 = FUN_00416290(param_2,local_48);
  local_ce = param_5;
  local_d0 = 1;
  piVar2 = (int *)FUN_004169e0(local_48,local_74,0);
  cVar5 = false;
  if ((char)piVar2 != '\0') {
    if (param_2 == param_1) {
      piVar2 = (int *)(**(code **)(*param_2 + 0x9c))(local_18,&local_d0,local_74);
      if (piVar2 == (int *)0x0) {
        cVar5 = true;
      }
    }
    else {
      local_fc[0] = 0x6a;
      FUN_00415f50(local_74,local_fc,param_1);
      iVar4 = (**(code **)(*param_2 + 0x9c))(local_18,&local_d0,local_fc);
      pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_7a);
      piVar2 = (int *)(*pcVar3)(local_7a,0,local_fc);
      DAT_004e34cc = piVar2;
      cVar5 = iVar4 == 0;
    }
  }
  if ((bool)cVar5 == false) {
    if ((*(byte *)((int)param_2 + 0x1e) & 0x80) == 0) {
      piVar2 = (int *)FUN_00416f70(local_18);
      if ((int)piVar2 < 1) {
        if ((*(byte *)((int)param_2 + 0x1e) & 2) != 0) {
          piVar2 = (int *)FUN_00469f80(param_2);
          piVar2 = FUN_00415ef0(piVar2,param_3);
          if ((piVar2 != (int *)0x0) && ((*(byte *)((int)piVar2 + 0x1e) & 0x80) != 0)) {
            cVar5 = '\x01';
            piVar2 = (int *)FUN_00474c50(piVar2,param_2,local_48);
            goto LAB_0041624a;
          }
        }
        cVar5 = '\0';
      }
      else {
        piVar2 = (int *)(**(code **)(*param_2 + 0x90))(piVar2,param_4);
        cVar5 = (char)piVar2;
      }
    }
    else {
      bVar1 = FUN_00437430(local_18,(int *)s_value_004d9e70);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        FUN_00474bd0(param_2,0,local_a4,0x17);
        piVar2 = (int *)FUN_004164e0(local_a4,local_18,local_48);
        cVar5 = (char)piVar2;
        if (cVar5 != '\0') {
          piVar2 = (int *)FUN_00474c50(param_2,0,local_a4);
        }
      }
      else {
        cVar5 = '\x01';
        piVar2 = (int *)FUN_00474c50(param_2,0,local_48);
      }
    }
  }
LAB_0041624a:
  if (local_74[0] == 0x32d5) {
    piVar2 = (int *)FUN_00417410((int)local_74);
  }
  if (((local_5 != '\0') && (local_48[0] == 0xd)) && (local_44 != (LPVOID)0x0)) {
    piVar2 = (int *)FUN_0043ba20(local_44);
  }
LAB_0041627d:
  return CONCAT31((int3)((uint)piVar2 >> 8),cVar5);
}


