
/* ==== GDI32.DLL::EnumMetaFile @ 004a2962 ==== 
 * signature: BOOL __stdcall EnumMetaFile(HDC hdc, HMETAFILE hmf, MFENUMPROC proc, LPARAM param)
 * body: 004a2962-004a2967
 * thunk to: GDI32.DLL::EnumMetaFile
 */

BOOL EnumMetaFile(HDC hdc,HMETAFILE hmf,MFENUMPROC proc,LPARAM param)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumMetaFile(hdc,hmf,proc,param);
  return BVar1;
}


