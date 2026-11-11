
/* ==== FUN_00491dd0 @ 00491dd0 ==== 
 * signature: undefined4 __stdcall FUN_00491dd0(DWORD * param_1)
 * body: 00491dd0-00491e40
 */

undefined4 FUN_00491dd0(DWORD *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint _Retval;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_004cd8c0;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &local_14;
  BVar1 = TlsSetValue(DAT_004de440,param_1);
  if (BVar1 == 0) {
    __amsg_exit(0x10);
  }
  DVar2 = GetCurrentThreadId();
  *param_1 = DVar2;
  if (PTR_FUN_004ddedc != (undefined *)0x0) {
    (*(code *)PTR_FUN_004ddedc)();
  }
  local_8 = 0;
  _Retval = (*(code *)param_1[0x12])(param_1[0x13]);
  __endthreadex(_Retval);
  *unaff_FS_OFFSET = local_14;
  return 0;
}


