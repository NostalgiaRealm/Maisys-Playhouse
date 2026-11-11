
/* ==== AfxStringFromCLSID @ 004ae079 ==== 
 * signature: CString __stdcall AfxStringFromCLSID(_GUID * param_1)
 * body: 004ae079-004ae101
 * note: Library Function - Single Match  class CString __stdcall AfxStringFromCLSID(struct _GUID const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    class CString __stdcall AfxStringFromCLSID(struct _GUID const &)
   
   Library: Visual Studio 1998 Release */

undefined4 AfxStringFromCLSID(_GUID *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  wsprintfA((LPSTR)(unaff_EBP + -0x110),"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",*puVar1
            ,(uint)*(ushort *)(puVar1 + 1),(uint)*(ushort *)((int)puVar1 + 6),
            (uint)*(byte *)(puVar1 + 2),(uint)*(byte *)((int)puVar1 + 9),
            (uint)*(byte *)((int)puVar1 + 10),(uint)*(byte *)((int)puVar1 + 0xb),
            (uint)*(byte *)(puVar1 + 3),(uint)*(byte *)((int)puVar1 + 0xd),
            (uint)*(byte *)((int)puVar1 + 0xe),(uint)*(byte *)((int)puVar1 + 0xf));
  CString::CString(*(CString **)(unaff_EBP + 8),(char *)(unaff_EBP + -0x110));
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}


