
/* ==== FUN_0049ea60 @ 0049ea60 ==== 
 * signature: undefined4 __cdecl FUN_0049ea60(int param_1, int param_2, int param_3, int param_4, undefined4 * param_5, undefined4 param_6, double * param_7)
 * body: 0049ea60-0049eca7
 */

undefined4 __cdecl
FUN_0049ea60(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,undefined4 param_6,
            double *param_7)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  
  dVar1 = ABS((double)CONCAT44(param_2,param_1));
  if ((param_4 == 0x7ff00000) && (param_3 == 0)) {
    if (1.0 < dVar1) {
      param_5[1] = DAT_004decbc;
      *param_5 = DAT_004decb8;
      return 0;
    }
    if (dVar1 < 1.0) {
      *param_5 = 0;
      param_5[1] = 0;
      return 0;
    }
    param_5[1] = DAT_004decc4;
    *param_5 = DAT_004decc0;
    return 1;
  }
  if ((param_4 == -0x100000) && (param_3 == 0)) {
    if (1.0 < dVar1) {
      *param_5 = 0;
      param_5[1] = 0;
      return 0;
    }
    if (dVar1 < 1.0) {
      param_5[1] = DAT_004decbc;
      *param_5 = DAT_004decb8;
      return 0;
    }
    param_5[1] = DAT_004decc4;
    *param_5 = DAT_004decc0;
    return 1;
  }
  if ((param_2 != 0x7ff00000) || (param_1 != 0)) {
    if ((param_2 == -0x100000) && (param_1 == 0)) {
      iVar2 = FUN_0049ecb0(param_3,param_4);
      if (0.0 < (double)CONCAT44(param_6,param_5)) {
        if (iVar2 == 1) {
          dVar1 = -(double)CONCAT44(DAT_004decbc,DAT_004decb8);
        }
        else {
          dVar1 = (double)CONCAT44(DAT_004decbc,DAT_004decb8);
        }
        *param_7 = dVar1;
        return 0;
      }
      if ((double)CONCAT44(param_6,param_5) < 0.0) {
        if (iVar2 == 1) {
          param_1 = DAT_004decdc;
          uVar3 = DAT_004decd8;
        }
        else {
          uVar3 = 0;
          param_1 = 0;
        }
        *(int *)((int)param_7 + 4) = param_1;
        *(undefined4 *)param_7 = uVar3;
        return 0;
      }
      *(undefined4 *)param_7 = 0;
      *(undefined4 *)((int)param_7 + 4) = 0x3ff00000;
    }
    return 0;
  }
  if (0.0 < (double)CONCAT44(param_4,param_3)) {
    param_5[1] = DAT_004decbc;
    *param_5 = DAT_004decb8;
    return 0;
  }
  *param_5 = 0;
  if ((double)CONCAT44(param_4,param_3) < 0.0) {
    param_5[1] = 0;
    return 0;
  }
  param_5[1] = 0x3ff00000;
  return 0;
}


