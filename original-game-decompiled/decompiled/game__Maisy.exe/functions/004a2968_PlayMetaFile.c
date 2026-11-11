
/* ==== GDI32.DLL::PlayMetaFile @ 004a2968 ==== 
 * signature: BOOL __stdcall PlayMetaFile(HDC hdc, HMETAFILE hmf)
 * body: 004a2968-004a296d
 * thunk to: GDI32.DLL::PlayMetaFile
 */

BOOL PlayMetaFile(HDC hdc,HMETAFILE hmf)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PlayMetaFile(hdc,hmf);
  return BVar1;
}


