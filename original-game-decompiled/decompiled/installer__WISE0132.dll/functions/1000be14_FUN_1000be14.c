
/* ==== FUN_1000be14 @ 1000be14 ==== 
 * signature: bool __cdecl FUN_1000be14(HWND param_1)
 * body: 1000be14-1000be4f
 */

bool __cdecl FUN_1000be14(HWND param_1)

{
  char *pcVar1;
  INT_PTR IVar2;
  
  pcVar1 = *(char **)(DAT_100240b8 + 0x7c);
  if ((*pcVar1 != '\0') && ((*pcVar1 != ' ' || (pcVar1[1] != '\0')))) {
    IVar2 = FUN_1001277f(param_1,pcVar1,*(undefined4 *)(DAT_100240b8 + 0x48),399);
    return (bool)('\x01' - (IVar2 != 3));
  }
  return true;
}


