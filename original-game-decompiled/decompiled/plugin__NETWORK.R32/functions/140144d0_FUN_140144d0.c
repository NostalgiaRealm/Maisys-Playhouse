
/* ==== FUN_140144d0 @ 140144d0 ==== 
 * signature: bool __cdecl FUN_140144d0(undefined4 param_1, short * param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 140144d0-14014794
 */

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FUN_140144d0(undefined4 param_1,short *param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  bool local_c5;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int aiStack_b8 [3];
  short local_ac [22];
  int local_80 [32];
  
  local_c5 = false;
  if (*param_2 != 0) {
    local_ac[0] = 0x6a;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,local_80);
    DAT_14028e48 = (*pcVar1)(local_80[0],param_1,param_2,local_ac);
    if ((DAT_14028e48 == 0) && (local_ac[0] != 0)) {
      iStack_c0 = 0;
      aiStack_b8[1] = 0;
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,3,local_80);
      DAT_14028e48 = (*pcVar1)(local_80[0],0,0,&iStack_c0,local_ac);
      if ((DAT_14028e48 == 0) && (iStack_c0 != 0)) {
        FUN_14008990(local_80,s__s_u_14026be4);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_c4);
        DAT_14028e48 = (*pcVar1)(iStack_c4,&iStack_bc,local_80);
        uVar2 = FUN_14012ae0(iStack_bc + iStack_c0,param_4,param_5);
        if ((char)uVar2 != '\0') {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&iStack_c4);
          DAT_14028e48 = (*pcVar1)(iStack_c4,*param_4,aiStack_b8);
          if (DAT_14028e48 == 0) {
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_c4);
            DAT_14028e48 = (*pcVar1)(iStack_c4,aiStack_b8[0],local_80);
            *param_3 = *param_3 + iStack_bc;
            *param_5 = *param_5 - iStack_bc;
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,3,aiStack_b8 + 2);
            DAT_14028e48 = (*pcVar1)(aiStack_b8[2],*param_3 + aiStack_b8[0],*param_5,aiStack_b8 + 1,
                                     local_ac);
            local_c5 = DAT_14028e48 == 0;
            if (local_c5) {
              *param_3 = *param_3 + iStack_c0;
              *param_5 = *param_5 - iStack_c0;
            }
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_c4);
            DAT_14028e48 = (*pcVar1)(iStack_c4,*param_4);
          }
        }
      }
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,local_80);
    DAT_14028e48 = (*pcVar1)(local_80[0],param_1,local_ac);
  }
  return local_c5;
}


