
/* ==== FUN_12018810 @ 12018810 ==== 
 * signature: undefined4 __cdecl FUN_12018810(int param_1, undefined1 * param_2)
 * body: 12018810-12018912
 */

undefined4 __cdecl FUN_12018810(int param_1,undefined1 *param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 10);
  if ((((iVar1 != 0) || (*(char **)(param_1 + 0xe) == (char *)0x0)) ||
      (**(char **)(param_1 + 0xe) != '\0')) &&
     ((iVar1 != 1 || ((**(char **)(param_1 + 0xe) != '\r' && (**(char **)(param_1 + 0xe) != '\t'))))
     )) {
    pcVar2 = *(char **)(param_1 + 0xe);
    if (*pcVar2 == '/') {
      if (pcVar2[1] == '<') {
        if (9 < iVar1) {
          pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,5,&local_8);
          DAT_12039a9c = (*pcVar3)(local_8,&local_4,*(int *)(param_1 + 0xe) + 1,s_<project>_12037934
                                   ,9);
          *param_2 = local_4 == 0;
          return 0;
        }
        *param_2 = 0;
        return 0;
      }
    }
    else if ((*pcVar2 != '.') || (((pcVar2[1] != '.' || (pcVar2[2] != '/')) && (pcVar2[1] != '/'))))
    {
      *param_2 = 0;
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
  *param_2 = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  **(undefined1 **)(param_1 + 0xe) = 0;
  return 0;
}


