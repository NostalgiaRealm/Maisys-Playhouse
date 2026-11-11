
/* ==== FUN_00408a22 @ 00408a22 ==== 
 * signature: undefined __cdecl FUN_00408a22(int param_1)
 * body: 00408a22-00408a38
 */

void __cdecl FUN_00408a22(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x104) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x104));
  }
  return;
}


