
/* ==== FUN_0047ad50 @ 0047ad50 ==== 
 * signature: undefined __thiscall FUN_0047ad50(void * this, short * param_1, short * param_2, undefined4 param_3, int * param_4, undefined4 param_5, undefined4 param_6, int * param_7, int * param_8)
 * body: 0047ad50-0047b02d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0047ad50(void *this,short *param_1,short *param_2,undefined4 param_3,int *param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,int *param_8)

{
  bool bVar1;
  short *psVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  
  if (*(int *)((int)this + 0x468) != 0) {
    iVar7 = 0;
    if (param_7 == (int *)0x0) {
      FUN_0047ac70((int)this);
    }
    SelectObject(*(HDC *)((int)this + 0xcdc),DAT_004dcb30);
    if (param_4 != (int *)0x0) {
      iVar7 = *(int *)((int)param_4 + 0x26);
    }
    if ((iVar7 < 1) || (*(int *)((int)this + 0xcec) <= iVar7)) {
      if (param_4 != (int *)0x0) {
        (**(code **)(*param_4 + 0xe4))();
      }
      FUN_0047b4a0(this,param_1,param_2,0,param_5,param_6,param_7,param_8);
    }
    else {
      psVar2 = (short *)FUN_00430190((int)param_4);
      local_c = 0;
      local_10 = 0;
      iVar5 = ((int)param_2[2] - (int)*param_2) * ((int)param_2[3] - (int)param_2[1]);
      psVar6 = psVar2;
      if (0 < iVar7) {
        do {
          sVar3 = *param_2;
          if (*param_2 <= *psVar6) {
            sVar3 = *psVar6;
          }
          *psVar6 = sVar3;
          sVar3 = psVar6[2];
          if (param_2[2] <= psVar6[2]) {
            sVar3 = param_2[2];
          }
          psVar6[2] = sVar3;
          sVar3 = psVar6[1];
          if (psVar6[1] <= param_2[1]) {
            sVar3 = param_2[1];
          }
          psVar6[1] = sVar3;
          sVar3 = psVar6[3];
          if (param_2[3] <= psVar6[3]) {
            sVar3 = param_2[3];
          }
          psVar6[3] = sVar3;
          if ((psVar6[2] <= *psVar6) || (bVar1 = true, sVar3 <= psVar6[1])) {
            bVar1 = false;
          }
          if (bVar1) {
            iVar8 = local_10 + 1;
            if (iVar8 < iVar7) {
              psVar4 = psVar2 + iVar8 * 6 + 1;
              do {
                if ((((*psVar4 <= psVar6[1]) && (sVar3 <= psVar4[2])) && (psVar4[-1] <= *psVar6)) &&
                   (psVar6[2] <= psVar4[1])) {
                  psVar6[1] = 0;
                  psVar6[3] = 0;
                  break;
                }
                psVar4 = psVar4 + 6;
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar7);
            }
            if ((iVar7 == iVar8) && (local_c = local_c + *(int *)(psVar6 + 4), iVar5 <= local_c))
            break;
          }
          else {
            psVar6[1] = 0;
            psVar6[3] = 0;
          }
          local_10 = local_10 + 1;
          psVar6 = psVar6 + 6;
        } while (local_10 < iVar7);
      }
      if (local_c < iVar5) {
        if (0 < iVar7) {
          do {
            if ((psVar2[1] != 0) || (psVar2[3] != 0)) {
              FUN_0047b4a0(this,psVar2,psVar2,0,param_5,param_6,param_7,param_8);
            }
            psVar2 = psVar2 + 6;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        FUN_0047b4a0(this,param_1,param_2,0,param_5,param_6,param_7,param_8);
      }
      FUN_004301f0((int)param_4);
      (**(code **)(*param_4 + 0xe4))();
    }
    DAT_004da398 = *(undefined4 *)((int)this + 0xcdc);
    *(undefined4 *)((int)this + 0xcdc) = 0;
    if (((*(byte *)((int)this + 0x1134) & 4) != 0) && (*(int *)((int)this + 0x468) != 0)) {
      FUN_0047a720((int)this);
      *(undefined4 *)((int)this + 0x468) = 0;
      *(undefined4 *)((int)this + 0x898) = 0;
    }
  }
  *(byte *)((int)this + 0x1134) = *(byte *)((int)this + 0x1134) & 0xfe;
  if (param_4 != (int *)0x0) {
    (**(code **)(*param_4 + 0xe4))();
  }
  _DAT_004e1c48 = 0;
  DAT_004e1c30 = 0;
  DAT_004e1c4a = 0;
  DAT_004e1c34 = 0;
  _DAT_004e1c38 = 0;
  _DAT_004e1c3c = 0;
  _DAT_004e1c4c = 0;
  _DAT_004e1c50 = 0;
  return;
}


