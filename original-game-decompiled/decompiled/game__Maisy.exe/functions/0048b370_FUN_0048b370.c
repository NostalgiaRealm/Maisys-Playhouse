
/* ==== FUN_0048b370 @ 0048b370 ==== 
 * signature: undefined __cdecl FUN_0048b370(int param_1, int param_2)
 * body: 0048b370-0048b3a6
 */

void __cdecl FUN_0048b370(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = 0;
  do {
    if (bVar2) {
      *(undefined1 *)(param_1 + iVar1) = 0;
    }
    else {
      *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
      bVar2 = ((undefined1 *)(param_2 + iVar1))[1] == '\0';
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


