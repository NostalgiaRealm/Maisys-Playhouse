
/* ==== FUN_1200f050 @ 1200f050 ==== 
 * signature: undefined4 __cdecl FUN_1200f050(undefined4 param_1, int param_2, undefined4 param_3, short param_4, undefined1 * param_5, undefined4 param_6)
 * body: 1200f050-1200f0f1
 */

undefined4 __cdecl
FUN_1200f050(undefined4 param_1,int param_2,undefined4 param_3,short param_4,undefined1 *param_5,
            undefined4 param_6)

{
  code *pcVar1;
  longlong lVar2;
  int local_30;
  undefined1 local_2c [44];
  
  *param_5 = 1;
  if (param_4 == 0xe) {
    pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_30);
    DAT_12039a9c = (*pcVar1)(local_30,0xe,1,local_2c);
    lVar2 = __ftol();
    if (0xff < (int)lVar2) {
      *param_5 = 0;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_30);
      DAT_12039a9c = (*pcVar1)(local_30,param_6,s_The_file_path_cannot_exceed_255_c_120372f8);
    }
  }
  return 0;
}


