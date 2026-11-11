
/* ==== FUN_00467510 @ 00467510 ==== 
 * signature: undefined4 __cdecl FUN_00467510(undefined4 param_1, int param_2, int * param_3, short * param_4)
 * body: 00467510-004676b4;004676c2-004677b5;004677cd-00467862
 */

undefined4 __cdecl FUN_00467510(undefined4 param_1,int param_2,int *param_3,short *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  short sVar7;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_44 [5];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 *local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004677b6;
  *unaff_FS_OFFSET = &local_10;
  if (param_2 == 0) {
    iVar3 = *(int *)(*param_3 + 2);
    iVar1 = *(int *)(param_3[1] + 2);
    if (*param_4 == 0x17) {
      iVar3 = FUN_00466a60(iVar3);
      FUN_00466a60(iVar1);
      if ((899 < *(int *)(param_4 + 1)) && (*(int *)(param_4 + 1) < 1000)) {
        iVar3 = FUN_00479da0(iVar3,*(undefined4 *)(param_4 + 3));
        if ((iVar3 != -1) && ((*(int *)(param_4 + 1) != 900 || (*(int *)(param_4 + 3) != iVar3)))) {
          param_4[1] = 900;
          param_4[2] = 0;
          *(int *)(param_4 + 3) = iVar3;
          uVar4 = 0;
          goto LAB_00467852;
        }
      }
    }
    else if (*param_4 == 100) {
      if (*(int *)(param_4 + 3) == 3) {
        piVar5 = (int *)FUN_00466a90(iVar3);
        local_14 = (int *)FUN_00466a90(iVar1);
        piVar5 = (int *)(**(code **)(*piVar5 + 0x108))(3);
        local_18 = *local_14;
        piVar6 = (int *)(**(code **)(local_18 + 0x108))(3);
        if (piVar5 != (int *)0x0) {
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
            local_1c = FUN_00412c20(0x56);
            local_8 = 0;
            if (local_1c != (undefined4 *)0x0) {
              piVar6 = FUN_00422bd0(local_1c);
            }
            local_8 = 0xffffffff;
            (**(code **)(local_18 + 0x100))(s_Toon_Ranges_004da084,3,piVar6);
          }
          cVar2 = (**(code **)(*piVar5 + 0x11c))(0,*(undefined4 *)(param_4 + 1),0,local_44,1);
          if (cVar2 != '\0') {
            iVar3 = *piVar6;
            cVar2 = (**(code **)(iVar3 + 0x124))(0,local_44[0],local_30,1,0);
            if (cVar2 == '\0') {
              uVar4 = (**(code **)(local_18 + 0x110))(1,local_30,0);
              (**(code **)(iVar3 + 0x100))(local_44[0],0,uVar4);
            }
            *(undefined4 *)(param_4 + 1) = local_28;
          }
          uVar4 = 0;
          goto LAB_00467852;
        }
      }
      else if (*(int *)(param_4 + 3) == 4) {
        piVar5 = (int *)FUN_00466a90(iVar3);
        local_14 = (int *)FUN_00466a90(iVar1);
        piVar5 = (int *)(**(code **)(*piVar5 + 0x108))(4);
        local_18 = *local_14;
        piVar6 = (int *)(**(code **)(local_18 + 0x108))(4);
        if (piVar5 != (int *)0x0) {
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
            local_1c = FUN_00412c20(0x56);
            local_8 = 1;
            if (local_1c != (undefined4 *)0x0) {
              piVar6 = FUN_00422bd0(local_1c);
            }
            local_8 = 0xffffffff;
            (**(code **)(local_18 + 0x100))(s_Sound_Markers_004dc0c4,4,piVar6);
          }
          cVar2 = (**(code **)(*piVar5 + 0x11c))(0,*(undefined4 *)(param_4 + 1),0,local_44,1);
          if (cVar2 != '\0') {
            iVar3 = *piVar6;
            cVar2 = (**(code **)(iVar3 + 0x124))(0,local_44[0],local_30,1,0);
            if (cVar2 == '\0') {
              uVar4 = (**(code **)(local_18 + 0x110))(1,local_30,0);
              (**(code **)(iVar3 + 0x100))(local_44[0],0,uVar4);
            }
            *(undefined4 *)(param_4 + 1) = local_28;
          }
          uVar4 = 0;
          goto LAB_00467852;
        }
      }
    }
  }
  else if (param_2 == 1) {
    sVar7 = *param_4;
    if (sVar7 != 100) {
      if (sVar7 == 0x73) {
        iVar3 = FUN_0046a8d0(*(int *)(param_4 + 3));
        *(int *)(param_4 + 3) = iVar3;
        uVar4 = 0;
      }
      else {
        if ((sVar7 == 0x6d) && (sVar7 = 0, 0 < param_4[1])) {
          do {
            piVar5 = (int *)(sVar7 * 4 + *(int *)(param_4 + 2));
            sVar7 = sVar7 + 1;
            iVar3 = FUN_0046a8d0(*piVar5);
            *piVar5 = iVar3;
          } while (sVar7 < param_4[1]);
        }
        uVar4 = 0;
      }
      goto LAB_00467852;
    }
    iVar3 = *(int *)(param_4 + 3);
    if (((iVar3 == 6) || (iVar3 == 1)) || (iVar3 == 0xb)) {
      iVar3 = FUN_0046a8d0(*(int *)(param_4 + 1));
      *(int *)(param_4 + 1) = iVar3;
      uVar4 = 0;
      goto LAB_00467852;
    }
  }
  uVar4 = 0x10000;
LAB_00467852:
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}


