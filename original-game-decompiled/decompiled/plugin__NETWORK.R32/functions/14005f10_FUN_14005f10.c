
/* ==== FUN_14005f10 @ 14005f10 ==== 
 * signature: undefined __cdecl FUN_14005f10(int param_1, short param_2, int param_3)
 * body: 14005f10-14005f79
 */

void __cdecl FUN_14005f10(int param_1,short param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  iVar1 = param_1 + 0x4a8 + param_2 * 10;
  if ((*(int *)(param_1 + 0x4ac + param_2 * 10) != param_3) &&
     (*(int *)(iVar1 + 4) = param_3, *(char *)(iVar1 + 8) == '\x01')) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x14),1,3,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,param_1,iVar1,param_3);
  }
  return;
}


