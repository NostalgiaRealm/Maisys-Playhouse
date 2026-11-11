
/* ==== FUN_0043d880 @ 0043d880 ==== 
 * signature: int * __cdecl FUN_0043d880(int * param_1, int * param_2, char param_3, undefined4 param_4, short * param_5, char param_6)
 * body: 0043d880-0043da64
 */

int * __cdecl
FUN_0043d880(int *param_1,int *param_2,char param_3,undefined4 param_4,short *param_5,char param_6)

{
  bool bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  undefined4 local_8;
  
  bVar1 = false;
  piVar3 = param_2;
  if (param_3 == '\0') {
    for (; piVar3 != (int *)0x0; piVar3 = (int *)(**(code **)(*piVar3 + 0x16c))()) {
      if (param_1 == piVar3) {
        bVar1 = true;
        break;
      }
    }
  }
  local_8 = FUN_0046ca10((int)param_1);
  if (!bVar1) {
    iVar5 = *param_1;
    (**(code **)(iVar5 + 0x120))(0);
    if (param_3 == '\0') {
      iVar4 = (**(code **)(iVar5 + 0x16c))();
      if (iVar4 != 0) {
        piVar3 = (int *)(**(code **)(iVar5 + 0x16c))();
        (**(code **)(*piVar3 + 0x1c))(1);
      }
      (**(code **)(iVar5 + 0x2c0))();
    }
    else {
      param_1 = (int *)(**(code **)(iVar5 + 0x20c))(param_2[1]);
    }
    if (((((param_6 != '\0') && ((*(uint *)((int)param_1 + 0x1e) & 0x40000000) == 0)) &&
         (((short)param_1[0x18] != 0 || (*(short *)((int)param_1 + 0x22) == 0x43)))) &&
        (iVar5 = FUN_0046ca10((int)param_2), iVar5 != 0)) &&
       ((((local_8 == 0 || (iVar5 = FUN_0046ca10((int)param_2), iVar5 != local_8)) ||
         (param_3 != '\0')) && ((*(byte *)(param_2 + 0x12) & 2) != 0)))) {
      if ((param_5 == (short *)0x0) || (*param_5 == 0)) {
        piVar3 = (int *)FUN_0046ca10((int)param_2);
        iVar5 = FUN_0043d020(piVar3);
        sVar2 = (short)iVar5 + 1;
        piVar3 = param_1;
        piVar6 = (int *)FUN_0046ca10((int)param_2);
        FUN_0043d250(piVar6,piVar3,sVar2);
      }
      else {
        piVar3 = param_1;
        piVar6 = (int *)FUN_0046ca10((int)param_2);
        FUN_0043d210(piVar6,piVar3,param_5);
      }
    }
    (**(code **)(*param_2 + 0x2b0))(param_1,param_4);
    if (((*(byte *)((int)param_1 + 0x1e) & 4) != 0) && ((*(byte *)((int)param_2 + 0x1e) & 4) != 0))
    {
      iVar5 = *param_1;
      (**(code **)(iVar5 + 0x398))(&local_18,1);
      (**(code **)(iVar5 + 0x3a0))(&local_10,1);
      (**(code **)(iVar5 + 0x3e4))();
      (**(code **)(iVar5 + 0x37c))(&local_8);
      if (((short)param_2[0x18] != 0) ||
         (((*(byte *)((int)param_2 + 0x21) & 0x40) != 0 || (*(short *)((int)param_2 + 0x22) == 0x43)
          ))) {
        sVar7 = -local_8._2_2_;
        sVar2 = -(short)local_8;
        local_18 = local_18 + sVar2;
        local_14 = local_14 + sVar2;
        local_16 = local_16 + sVar7;
        local_12 = local_12 + sVar7;
        local_10 = local_10 + sVar2;
        local_c = local_c + sVar2;
        local_e = local_e + sVar7;
        local_a = local_a + sVar7;
      }
      (**(code **)(iVar5 + 0x39c))(&local_18);
      (**(code **)(iVar5 + 0x3a4))(&local_10);
      (**(code **)(iVar5 + 0x400))(*(undefined4 *)((int)param_1 + 0x62));
    }
  }
  return param_1;
}


