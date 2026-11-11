
/* ==== FUN_004206f0 @ 004206f0 ==== 
 * signature: undefined __fastcall FUN_004206f0(int * param_1)
 * body: 004206f0-00420a28;00420a4e-00420a80
 */

void __fastcall FUN_004206f0(int *param_1)

{
  char cVar1;
  HLOCAL hMem;
  HPSTR pcVar2;
  int iVar3;
  LONG LVar4;
  short sVar5;
  HPSTR pcVar6;
  short *psVar7;
  int *piVar8;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined2 local_7c;
  undefined2 local_6c;
  int local_6a;
  int local_62;
  SIZE_T local_5e;
  int local_5a;
  char local_54 [8];
  short local_4c;
  AFX_EXCEPTION_LINK local_44 [12];
  undefined4 *local_38;
  int local_34;
  LONG local_30;
  SIZE_T local_2c;
  int *local_28;
  LONG *local_24;
  int local_20;
  int *local_1c;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00420a3c;
  *unaff_FS_OFFSET = &local_10;
  local_34 = 0;
  local_14 = &stack0xffffff6c;
  local_20 = *param_1;
  local_1c = param_1;
  cVar1 = (**(code **)(local_20 + 0x15c))(0);
  if (cVar1 != '\0') {
    cVar1 = FUN_0040d6d0(local_1c);
    if (cVar1 != '\0') goto LAB_00420a71;
  }
  if (((*(byte *)((int)local_1c + 0x6a) & 0x20) == 0) &&
     ((*(byte *)((int)local_1c + 0x6b) & 2) == 0)) {
    cVar1 = (**(code **)(local_20 + 0xec))();
    if (cVar1 != '\0') {
      pcVar6 = (HPSTR)0x0;
      local_24 = local_1c + 0x1d;
      FUN_0040e0e0(local_1c,*local_24);
      FUN_0040e180(local_1c,local_54,0xe);
      local_15 = local_4c == 3;
      if ((bool)local_15) {
        local_4c = 4;
      }
      FUN_0040e180(local_1c,(HPSTR)&local_88,0x32);
      local_38 = (undefined4 *)((int)local_1c + 0x16a);
      *local_38 = local_88;
      *(int *)((int)local_1c + 0x16e) = local_84;
      *(int *)((int)local_1c + 0x172) = local_80;
      local_1c[0x2e] = local_84;
      piVar8 = local_1c + 0x62;
      *(undefined2 *)((int)local_1c + 0x176) = local_7c;
      psVar7 = (short *)((int)local_1c + 0x176);
      local_1c[0x2f] = local_80;
      *piVar8 = local_6a;
      local_1c[100] = local_5a;
      *(undefined2 *)((int)local_1c + 0x186) = local_6c;
      FUN_0040e110(local_1c,&local_30);
      iVar3 = *piVar8;
      if ((iVar3 == 0) || (iVar3 == 0x2e524c45)) {
        local_28 = local_1c + 99;
        *local_28 = 0;
        if (local_5e != 0) {
          pcVar6 = (HPSTR)FUN_00434920(DAT_004d99ac,0x400,0);
          FUN_0040e0e0(local_1c,*local_24 + local_62);
          FUN_0040e180(local_1c,pcVar6,0x400);
          goto LAB_004208d6;
        }
      }
      else {
        hMem = FUN_0043f6f0(local_5e);
        if (hMem == (HLOCAL)0x0) {
          FUN_004a3538();
        }
        local_2c = local_5e;
        FUN_0040e0e0(local_1c,*local_24 + local_62);
        pcVar2 = LocalLock(hMem);
        FUN_0040e180(local_1c,pcVar2,local_2c);
        LocalUnlock(hMem);
        local_28 = local_1c + 99;
        *local_28 = (int)hMem;
LAB_004208d6:
        FUN_0040e0e0(local_1c,local_30);
      }
      FUN_0040e110(local_1c,&local_30);
      piVar8 = (int *)((int)local_1c + 0x152);
      local_2c = *psVar7 * 0x3a;
      iVar3 = FUN_00434920(DAT_004d99ac,local_2c,0);
      *piVar8 = iVar3;
      *(SIZE_T *)((int)local_1c + 0x156) = local_2c;
      if (iVar3 == 0) {
        FUN_004a3538();
      }
      FUN_00420530(local_1c,(undefined4 *)*piVar8,(int)*psVar7);
      sVar5 = 0;
      if (0 < *psVar7) {
        do {
          iVar3 = sVar5 * 0x3a;
          *(undefined4 *)(*piVar8 + 0x32 + iVar3) = 0;
          *(HPSTR *)(*piVar8 + 0x2c + iVar3) = pcVar6;
          if (local_15 != '\0') {
            *(undefined1 *)(*piVar8 + 0x17 + iVar3) = 0;
          }
          sVar5 = sVar5 + 1;
        } while (sVar5 < *psVar7);
      }
      *(undefined1 *)(*piVar8 + 0x17) = 1;
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_44);
      local_8 = 1;
      if ((*local_28 == 0) && (pcVar6 == (HPSTR)0x0)) {
        iVar3 = *psVar7 * 0x3a + *piVar8;
        LVar4 = *(int *)(iVar3 + -0x28) + *(int *)(iVar3 + -0x2e) + *local_24;
      }
      else {
        LVar4 = *local_24 + local_62 + local_5e;
      }
      FUN_0040e0e0(local_1c,LVar4);
      if ((*(byte *)((int)local_38 + 3) & 0x20) != 0) {
        FUN_00422470(local_1c);
      }
      local_8 = 0xffffffff;
      FUN_00420a46();
      if (local_34 != 0) goto LAB_00420a4e;
      (**(code **)(local_20 + 0x19c))();
    }
    (**(code **)(local_20 + 0x1cc))();
    (**(code **)(local_20 + 0x160))(0,1);
    *(undefined2 *)((int)local_1c + 0x1a6) = 0xffff;
  }
  else {
LAB_00420a4e:
    *(undefined2 *)((int)local_1c + 0x176) = 0;
    (**(code **)(local_20 + 0xfc))();
    *(undefined2 *)((int)local_1c + 0x1a6) = 0xffff;
  }
LAB_00420a71:
  *unaff_FS_OFFSET = local_10;
  return;
}


