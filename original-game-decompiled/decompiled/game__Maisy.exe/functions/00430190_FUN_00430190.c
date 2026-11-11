
/* ==== FUN_00430190 @ 00430190 ==== 
 * signature: undefined4 __fastcall FUN_00430190(int param_1)
 * body: 00430190-004301b7
 */

undefined4 __fastcall FUN_00430190(int param_1)

{
  LPVOID pvVar1;
  
  if (*(HLOCAL *)(param_1 + 0x36) != (HLOCAL)0x0) {
    if (*(short *)(param_1 + 0x46) == 0) {
      pvVar1 = LocalLock(*(HLOCAL *)(param_1 + 0x36));
      *(LPVOID *)(param_1 + 0x3a) = pvVar1;
    }
    *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 1;
    return *(undefined4 *)(param_1 + 0x3a);
  }
  return 0;
}


