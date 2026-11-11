
/* ==== FUN_14015cf0 @ 14015cf0 ==== 
 * signature: int __cdecl FUN_14015cf0(char * param_1)
 * body: 14015cf0-14015d38
 */

int __cdecl FUN_14015cf0(char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  iVar2 = 1;
  ppuVar3 = &PTR_s_New_Blank_Window_14026c8c;
  do {
    uVar1 = FUN_14016eb0(param_1,*ppuVar3);
    if (uVar1 == 0) {
      return iVar2;
    }
    ppuVar3 = ppuVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (ppuVar3 < (undefined **)((int)&PTR_s_Topmost_Frame_14026c98 + 1));
  return -1;
}


