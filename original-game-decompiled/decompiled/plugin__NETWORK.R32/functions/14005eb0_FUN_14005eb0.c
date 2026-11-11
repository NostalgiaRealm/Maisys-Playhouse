
/* ==== FUN_14005eb0 @ 14005eb0 ==== 
 * signature: undefined __cdecl FUN_14005eb0(int param_1, short param_2)
 * body: 14005eb0-14005f0a
 */

void __cdecl FUN_14005eb0(int param_1,short param_2)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  iVar1 = param_1 + 0x4a8 + param_2 * 10;
  if (*(char *)(iVar1 + 8) == '\x01') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x14),1,1,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,param_1,iVar1);
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return;
}


