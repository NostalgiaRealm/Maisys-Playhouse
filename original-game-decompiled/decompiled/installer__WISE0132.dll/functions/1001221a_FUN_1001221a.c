
/* ==== FUN_1001221a @ 1001221a ==== 
 * signature: undefined __cdecl FUN_1001221a(int param_1)
 * body: 1001221a-10012239
 */

void __cdecl FUN_1001221a(int param_1)

{
  if ((DAT_100241e8 != 0) && (*(HANDLE *)(param_1 + 0x104) != (HANDLE)0xffffffff)) {
    FindClose(*(HANDLE *)(param_1 + 0x104));
  }
  return;
}


