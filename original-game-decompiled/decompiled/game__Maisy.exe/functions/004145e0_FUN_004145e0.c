
/* ==== FUN_004145e0 @ 004145e0 ==== 
 * signature: undefined4 * __stdcall FUN_004145e0(int * param_1, HDRVR param_2, uint param_3, uint * param_4, uint param_5)
 * body: 004145e0-00414806
 */

undefined4 * FUN_004145e0(int *param_1,HDRVR param_2,uint param_3,uint *param_4,uint param_5)

{
  undefined4 *puVar1;
  
  if (param_3 < 0x4010) {
    if (param_3 == 0x400f) {
      puVar1 = (undefined4 *)FUN_00414a60(param_1,(byte *)param_4);
      return puVar1;
    }
    switch(param_3) {
    case 1:
    case 6:
      return (undefined4 *)0x1;
    case 2:
    case 5:
      return (undefined4 *)0x1;
    case 3:
      if (param_5 != 0) {
        puVar1 = FUN_00414830(param_5);
        return puVar1;
      }
      return (undefined4 *)0x1;
    case 4:
      puVar1 = (undefined4 *)FUN_004148d0(param_1);
      return puVar1;
    case 7:
      return (undefined4 *)0x1;
    case 8:
      return (undefined4 *)0x0;
    case 9:
    case 10:
      return (undefined4 *)0x1;
    }
  }
  else if (param_3 < 0x4016) {
    if (param_3 == 0x4015) {
      puVar1 = (undefined4 *)FUN_00414d30();
      return puVar1;
    }
    if ((param_3 == 0x4010) && (FUN_00451f80(), *param_1 != 0)) {
      FUN_00451f90();
      puVar1 = (undefined4 *)(*DAT_004e01c8)(*param_1);
      FUN_00451f90();
      return puVar1;
    }
  }
  else if (param_3 < 0x4033) {
    if (param_3 == 0x4032) {
      puVar1 = (undefined4 *)FUN_004149e0(param_1,param_4);
      return puVar1;
    }
    if (param_3 == 0x401f) {
      puVar1 = (undefined4 *)FUN_004149b0(param_1,(int)param_4);
      return puVar1;
    }
    if (param_3 == 0x4021) {
      puVar1 = (undefined4 *)FUN_00414bc0(param_1,param_4);
      return puVar1;
    }
    if (param_3 == 0x4024) {
      return (undefined4 *)0xffffffff;
    }
  }
  else if (param_3 < 0x5002) {
    if (0x4fff < param_3) {
      return (undefined4 *)0x0;
    }
    if (param_3 == 0x4033) {
      puVar1 = (undefined4 *)FUN_00414cb0(param_1,(int *)param_4);
      return puVar1;
    }
  }
  else {
    if (param_3 == 0x5002) {
      puVar1 = (undefined4 *)FUN_00414930(param_4,param_5);
      return puVar1;
    }
    if ((0x5009 < param_3) && (param_3 < 0x500c)) {
      return (undefined4 *)0xffffffff;
    }
  }
  if (0x3fff < param_3) {
    return (undefined4 *)0xffffffff;
  }
  puVar1 = (undefined4 *)DefDriverProc((DWORD_PTR)param_1,param_2,param_3,(LPARAM)param_4,param_5);
  return puVar1;
}


