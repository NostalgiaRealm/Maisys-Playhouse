
/* ==== FUN_004445b0 @ 004445b0 ==== 
 * signature: undefined __cdecl FUN_004445b0(int param_1, int param_2, int param_3, int param_4)
 * body: 004445b0-0044466e
 */

void __cdecl FUN_004445b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 != DAT_004db84c) {
    if (DAT_004db84c < param_1) {
      *(int *)((int)&DAT_004db5cc + param_4 * 0x3e) = (int)(short)-(short)(param_1 / DAT_004db84c);
    }
    else {
      *(int *)((int)&DAT_004db5cc + param_4 * 0x3e) = (int)(short)(DAT_004db84c / param_1);
    }
  }
  if (param_2 != DAT_004db850) {
    if (DAT_004db850 < param_2) {
      iVar1 = -(param_2 / DAT_004db850);
    }
    else {
      iVar1 = DAT_004db850 / param_2;
    }
    *(int *)((int)&DAT_004db5d0 + param_4 * 0x3e) = iVar1;
  }
  if (DAT_004db854 != param_3) {
    if (DAT_004db854 < param_3) {
      (&DAT_004db5a3)[param_4 * 0x3e] = -(char)(param_3 / DAT_004db854);
      return;
    }
    (&DAT_004db5a3)[param_4 * 0x3e] = (char)(DAT_004db854 / param_3);
  }
  return;
}


