
/* ==== FUN_00419e80 @ 00419e80 ==== 
 * signature: undefined1 __thiscall FUN_00419e80(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 00419e80-0041a25c
 */

undefined1 __thiscall FUN_00419e80(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  short local_70;
  int local_6e;
  int local_6a;
  short local_40;
  int *local_3e;
  int *local_3a;
  int local_16;
  int *local_10;
  int *local_c;
  void *local_8;
  
  bVar1 = false;
  local_8 = this;
  if (param_1 == 0x6a5) {
    if (*param_3 == 0) goto LAB_0041a22d;
    psVar12 = param_3;
    psVar13 = &local_70;
    for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)psVar13 = *(undefined4 *)psVar12;
      psVar12 = psVar12 + 2;
      psVar13 = psVar13 + 2;
    }
    *psVar13 = *psVar12;
    local_c = FUN_0046da90(local_8,'\x01','\x01');
    iVar11 = FUN_00420aa0(local_c);
    iVar6 = FUN_00414340(local_8,&local_70,1);
    if ((char)iVar6 == '\0') {
      iVar6 = FUN_00414340(local_8,&local_70,0x11);
      if ((char)iVar6 == '\0') {
        iVar11 = FUN_00414340(local_8,&local_70,0x1d);
        if (((char)iVar11 == '\0') ||
           (cVar2 = FUN_00422620(local_c,local_6a,(int *)&local_10,&local_16), cVar2 == '\0'))
        goto LAB_0041a22d;
        sVar4 = FUN_00412fe0((int)local_8);
        FUN_004211b0(local_c,(int)local_10,local_16,sVar4);
      }
      else {
        if (((local_6a < 1) || (iVar11 < local_6e)) || (local_6a < local_6e)) goto LAB_0041a22d;
        iVar6 = iVar11;
        if (local_6e <= iVar11) {
          iVar6 = local_6e;
        }
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        if (local_6a <= iVar11) {
          iVar11 = local_6a;
        }
        if (iVar11 <= iVar6) {
          iVar11 = iVar6;
        }
        sVar4 = FUN_00412fe0((int)local_8);
        FUN_004211b0(local_c,iVar6 + -1,iVar11 + -1,sVar4);
      }
    }
    else {
      if ((local_6e < 1) || (iVar11 < local_6e)) goto LAB_0041a22d;
      sVar4 = FUN_00412fe0((int)local_8);
      FUN_00421230(local_c,local_6e + -1,sVar4);
    }
  }
  else if (param_1 == 0x6a7) {
    if (*param_3 == 0) goto LAB_0041a22d;
    psVar12 = param_3;
    psVar13 = &local_40;
    for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)psVar13 = *(undefined4 *)psVar12;
      psVar12 = psVar12 + 2;
      psVar13 = psVar13 + 2;
    }
    *psVar13 = *psVar12;
    piVar7 = FUN_0046da90(local_8,'\x01','\x01');
    piVar8 = (int *)FUN_00420aa0(piVar7);
    iVar11 = FUN_00414340(local_8,&local_40,1);
    if ((char)iVar11 == '\0') {
      iVar11 = FUN_00414340(local_8,&local_40,0x11);
      if ((char)iVar11 == '\0') {
        iVar11 = FUN_00414340(local_8,&local_40,0x1d);
        if (((char)iVar11 == '\0') ||
           (cVar2 = FUN_00422620(piVar7,(int)local_3a,(int *)&local_c,(int *)&local_10),
           cVar2 == '\0')) goto LAB_0041a22d;
        FUN_004212b0(piVar7,(int)local_c,(int)local_10);
      }
      else {
        if ((((int)local_3a < 1) || ((int)piVar8 < (int)local_3e)) ||
           ((int)local_3a < (int)local_3e)) goto LAB_0041a22d;
        piVar10 = piVar8;
        if ((int)local_3e <= (int)piVar8) {
          piVar10 = local_3e;
        }
        if ((int)piVar10 < 2) {
          piVar10 = (int *)0x1;
        }
        if ((int)local_3a <= (int)piVar8) {
          piVar8 = local_3a;
        }
        if ((int)piVar8 <= (int)piVar10) {
          piVar8 = piVar10;
        }
        FUN_004212b0(piVar7,(int)piVar10 + -1,(int)piVar8 + -1);
      }
    }
    else {
      if (((int)local_3e < 1) || ((int)piVar8 < (int)local_3e)) goto LAB_0041a22d;
      FUN_00421280(piVar7,(int)local_3e + -1);
    }
  }
  else {
    if (param_1 != 0x6a9) goto LAB_0041a22d;
    psVar12 = param_3;
    psVar13 = &local_40;
    for (iVar11 = 0xb; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)psVar13 = *(undefined4 *)psVar12;
      psVar12 = psVar12 + 2;
      psVar13 = psVar13 + 2;
    }
    *psVar13 = *psVar12;
    piVar7 = FUN_0046da90(local_8,'\x01','\x01');
    piVar8 = (int *)FUN_00420aa0(piVar7);
    local_10 = (int *)((int)piVar8 + -1);
    local_c = (int *)0x0;
    if (*param_3 != 0) {
      iVar11 = FUN_00414340(local_8,&local_40,1);
      if ((char)iVar11 == '\0') {
        iVar11 = FUN_00414340(local_8,&local_40,0x11);
        if ((char)iVar11 == '\0') {
          iVar11 = FUN_00414340(local_8,&local_40,0x1d);
          if ((char)iVar11 != '\0') {
            FUN_00422620(piVar7,(int)local_3a,(int *)&local_c,(int *)&local_10);
          }
        }
        else if (((0 < (int)local_3a) && ((int)local_3e <= (int)piVar8)) &&
                ((int)local_3e <= (int)local_3a)) {
          local_c = piVar8;
          if ((int)local_3e <= (int)piVar8) {
            local_c = local_3e;
          }
          if ((int)local_c < 2) {
            local_c = (int *)0x1;
          }
          local_c = (int *)((int)local_c + -1);
          if ((int)local_3a <= (int)piVar8) {
            piVar8 = local_3a;
          }
          if ((int)piVar8 <= (int)local_c) {
            piVar8 = local_c;
          }
          local_10 = (int *)((int)piVar8 + -1);
        }
      }
      else if ((0 < (int)local_3e) && ((int)local_3e <= (int)piVar8)) {
        local_10 = (int *)((int)local_3e + -1);
        local_c = local_10;
      }
    }
    FUN_00421420(piVar7,(int)local_c,(int)local_10);
    uVar5 = FUN_00412fe0((int)local_8);
    if (uVar5 == 0) {
      uVar5 = 0x32;
    }
    uVar14 = (uint)uVar5;
    piVar8 = (int *)FUN_00466a70(*(int *)((int)local_8 + 4));
    iVar11 = *piVar8;
    pvVar9 = FUN_0046da90(local_8,'\x01','\x01');
    (**(code **)(iVar11 + 0xe4))(pvVar9,uVar14);
  }
  bVar1 = true;
LAB_0041a22d:
  if (bVar1) {
    return 1;
  }
  uVar3 = FUN_0044fa80(local_8,param_1,param_2,param_3,param_4);
  return uVar3;
}


