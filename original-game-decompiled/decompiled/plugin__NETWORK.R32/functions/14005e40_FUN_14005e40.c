
/* ==== FUN_14005e40 @ 14005e40 ==== 
 * signature: undefined __cdecl FUN_14005e40(int param_1, short param_2)
 * body: 14005e40-14005ea6
 */

void __cdecl FUN_14005e40(int param_1,short param_2)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  iVar1 = param_1 + 0x4a8 + param_2 * 10;
  if (*(char *)(iVar1 + 8) == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x14),1,0,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,param_1,iVar1,*(undefined4 *)(iVar1 + 4),1,param_2);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}


