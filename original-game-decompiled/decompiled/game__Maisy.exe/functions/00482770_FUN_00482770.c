
/* ==== FUN_00482770 @ 00482770 ==== 
 * signature: bool __cdecl FUN_00482770(undefined * param_1, undefined4 param_2, short param_3, undefined1 * param_4)
 * body: 00482770-00482aed
 */

bool __cdecl FUN_00482770(undefined *param_1,undefined4 param_2,short param_3,undefined1 *param_4)

{
  int iVar1;
  code *pcVar2;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 != (undefined *)0x0) {
    if (param_3 == 3) {
      local_8 = 0;
      pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xc,&local_10);
      DAT_004e34cc = (*pcVar2)(local_10,&local_8,param_1);
      if (4 < local_8) {
        do {
          iVar1 = local_8;
          local_8 = iVar1 + -1;
          if (local_8 < 0) goto LAB_00482add;
        } while (param_1[local_8] != '.');
        *param_4 = param_1[iVar1];
        param_4[1] = param_1[iVar1 + 1];
        param_4[2] = param_1[iVar1 + 2];
        if (param_1[iVar1 + 3] == '\0') {
          param_4[3] = 0x20;
        }
        param_4[4] = 0;
      }
    }
    else if (param_3 == 0) {
      pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0,&local_10);
      DAT_004e34cc = (*pcVar2)(local_10,param_4,&DAT_004dcd5c);
      pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xb,&local_8);
      DAT_004e34cc = (*pcVar2)(local_8,&local_c,param_1,&DAT_004dcd38);
      if (local_c != 0) {
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,1,&local_8);
        DAT_004e34cc = (*pcVar2)(local_8,param_4,param_1,local_c - (int)param_1);
        param_4[local_c - (int)param_1] = 0;
      }
    }
    else {
      if (param_3 == 1) {
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0,&local_10);
        DAT_004e34cc = (*pcVar2)(local_10,param_4,s_www_mfactory_com_004dcd48);
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xb,&local_8);
        DAT_004e34cc = (*pcVar2)(local_8,&local_c,param_1,&DAT_004dcd38);
        if (local_c != 0) {
          param_1 = (undefined *)(local_c + 3);
        }
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xb,&local_8);
        DAT_004e34cc = (*pcVar2)(local_8,&local_c,param_1,&DAT_004dbc9c);
        if (local_c == 0) {
          pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0,&local_8);
          DAT_004e34cc = (*pcVar2)(local_8,param_4,param_1);
        }
        else {
          pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,1,&local_8);
          DAT_004e34cc = (*pcVar2)(local_8,param_4,param_1,local_c - (int)param_1);
          param_4[local_c - (int)param_1] = 0;
        }
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xb,&local_8);
        DAT_004e34cc = (*pcVar2)(local_8,&local_c,param_4,&DAT_004db560);
        if (local_c != 0) goto LAB_00482add;
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,2,&local_8);
        param_1 = &DAT_004dcd44;
      }
      else {
        if (param_3 != 2) goto LAB_00482add;
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0,&local_10);
        DAT_004e34cc = (*pcVar2)(local_10,param_4,&DAT_004d99e4);
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xb,&local_8);
        DAT_004e34cc = (*pcVar2)(local_8,&local_c,param_1,&DAT_004dcd38);
        if (local_c != 0) {
          param_1 = (undefined *)(local_c + 3);
        }
        pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0,&local_8);
      }
      DAT_004e34cc = (*pcVar2)(local_8,param_4,param_1);
    }
  }
LAB_00482add:
  return DAT_004e34cc == 0;
}


