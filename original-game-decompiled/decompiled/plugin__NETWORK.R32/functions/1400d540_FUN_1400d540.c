
/* ==== FUN_1400d540 @ 1400d540 ==== 
 * signature: int __cdecl FUN_1400d540(undefined4 param_1, undefined4 param_2, undefined4 * param_3, int * param_4)
 * body: 1400d540-1400d5c5
 */

int __cdecl FUN_1400d540(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,0x400,&local_8);
  if (DAT_14028e48 != 0) {
    return -1;
  }
  *param_3 = local_8;
  iVar2 = FUN_14009a40(DAT_14026718,0x401,param_2,local_8,0x400);
  *param_4 = iVar2;
  return -(uint)(iVar2 == 0);
}


