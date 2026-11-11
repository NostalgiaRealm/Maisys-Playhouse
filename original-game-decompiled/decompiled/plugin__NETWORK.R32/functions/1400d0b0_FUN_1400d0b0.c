
/* ==== FUN_1400d0b0 @ 1400d0b0 ==== 
 * signature: undefined4 __cdecl FUN_1400d0b0(undefined1 * param_1, int param_2)
 * body: 1400d0b0-1400d15f
 */

undefined4 __cdecl FUN_1400d0b0(undefined1 *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int local_8;
  HINSTANCE local_4;
  
  if (DAT_14026030 == 0) {
    *param_1 = 0;
    iVar1 = FUN_14009290();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (param_2 != 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1d,&local_8);
      DAT_14028e48 = (*pcVar2)(local_8,s_nProcessSrv_140262e0,&local_4);
      iVar1 = FUN_140095b0(&DAT_14026718,FUN_1400d7e0,param_2,&DAT_1402671c,local_4);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
  }
  DAT_14026030 = DAT_14026030 + 1;
  return 0;
}


