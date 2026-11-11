
/* ==== FUN_1200f6c0 @ 1200f6c0 ==== 
 * signature: undefined4 __cdecl FUN_1200f6c0(int param_1, int param_2)
 * body: 1200f6c0-1200f73e
 */

undefined4 __cdecl FUN_1200f6c0(int param_1,int param_2)

{
  HBITMAP ho;
  
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    ho = FUN_120109e0(param_1);
    if (ho != (HBITMAP)0x0) {
      FUN_12010bf0(param_1,ho,*(short *)(param_1 + 0xc),*(short *)(param_1 + 0x10));
      DeleteObject(ho);
      if (DAT_12037588 != (HDC)0x0) {
        DeleteDC(DAT_12037588);
      }
    }
    return 0;
  }
  return 0x10000;
}


