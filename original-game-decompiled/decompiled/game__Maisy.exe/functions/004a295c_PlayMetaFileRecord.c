
/* ==== GDI32.DLL::PlayMetaFileRecord @ 004a295c ==== 
 * signature: BOOL __stdcall PlayMetaFileRecord(HDC hdc, LPHANDLETABLE lpHandleTable, LPMETARECORD lpMR, UINT noObjs)
 * body: 004a295c-004a2961
 * thunk to: GDI32.DLL::PlayMetaFileRecord
 */

BOOL PlayMetaFileRecord(HDC hdc,LPHANDLETABLE lpHandleTable,LPMETARECORD lpMR,UINT noObjs)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PlayMetaFileRecord(hdc,lpHandleTable,lpMR,noObjs);
  return BVar1;
}


