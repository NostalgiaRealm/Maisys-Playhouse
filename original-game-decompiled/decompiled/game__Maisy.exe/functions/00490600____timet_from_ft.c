
/* ==== ___timet_from_ft @ 00490600 ==== 
 * signature: int __cdecl ___timet_from_ft(FILETIME * param_1)
 * body: 00490600-00490688
 * note: Library Function - Single Match  ___timet_from_ft  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___timet_from_ft
   
   Library: Visual Studio 1998 Release */

int __cdecl ___timet_from_ft(FILETIME *param_1)

{
  BOOL BVar1;
  int iVar2;
  _SYSTEMTIME local_18;
  _FILETIME local_8;
  
  if ((param_1->dwLowDateTime == 0) && (param_1->dwHighDateTime == 0)) {
    return -1;
  }
  BVar1 = FileTimeToLocalFileTime(param_1,&local_8);
  if (BVar1 != 0) {
    BVar1 = FileTimeToSystemTime(&local_8,&local_18);
    if (BVar1 != 0) {
      iVar2 = FUN_00499d00(local_18._0_4_ & 0xffff,(uint)local_18._0_4_ >> 0x10,(uint)local_18.wDay,
                           local_18._8_4_ & 0xffff,(uint)local_18._8_4_ >> 0x10,
                           local_18._12_4_ & 0xffff,-1);
      return iVar2;
    }
  }
  return -1;
}


