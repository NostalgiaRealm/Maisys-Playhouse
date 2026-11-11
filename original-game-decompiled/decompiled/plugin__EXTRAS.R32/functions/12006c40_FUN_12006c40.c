
/* ==== FUN_12006c40 @ 12006c40 ==== 
 * signature: char __cdecl FUN_12006c40(short param_1, int param_2, int param_3)
 * body: 12006c40-12006cb4
 */

char __cdecl FUN_12006c40(short param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = FUN_12006d40(param_2);
  if (0 < iVar1) {
    do {
      if (param_1 == 0) {
        if (*(char *)(param_2 + iVar2) == ':') {
          if ((iVar2 < iVar1) && (*(char *)(param_2 + -1 + iVar2) == ':')) {
            *(undefined1 *)(param_3 + iVar3) = 0x2e;
            *(undefined1 *)(param_3 + -1 + iVar3 + 2) = 0x2e;
            *(undefined1 *)(param_3 + iVar3 + 2) = 0x5c;
            iVar3 = iVar3 + 3;
          }
          break;
        }
        *(char *)(param_3 + iVar3) = *(char *)(param_2 + iVar2);
        iVar3 = iVar3 + 1;
      }
      else if (*(char *)(param_2 + iVar2) == ':') {
        param_1 = param_1 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined1 *)(param_3 + iVar3) = 0;
  return '\x01' - (iVar3 == 0);
}


