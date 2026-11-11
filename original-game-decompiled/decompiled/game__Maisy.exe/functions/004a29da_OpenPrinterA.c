
/* ==== WINSPOOL.DRV::OpenPrinterA @ 004a29da ==== 
 * signature: BOOL __stdcall OpenPrinterA(LPSTR pPrinterName, LPHANDLE phPrinter, LPPRINTER_DEFAULTSA pDefault)
 * body: 004a29da-004a29df
 * thunk to: WINSPOOL.DRV::OpenPrinterA
 */

BOOL OpenPrinterA(LPSTR pPrinterName,LPHANDLE phPrinter,LPPRINTER_DEFAULTSA pDefault)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a29da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenPrinterA(pPrinterName,phPrinter,pDefault);
  return BVar1;
}


