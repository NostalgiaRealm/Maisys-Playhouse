
/* ==== FUN_004bd4c0 @ 004bd4c0 ==== 
 * signature: undefined __stdcall FUN_004bd4c0(void)
 * body: 004bd4c0-004bd503
 */

void FUN_004bd4c0(void)

{
  HANDLE hObject;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *extraout_ECX = &PTR_FUN_004cb0f4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  hObject = (HANDLE)extraout_ECX[10];
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bd50e();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


