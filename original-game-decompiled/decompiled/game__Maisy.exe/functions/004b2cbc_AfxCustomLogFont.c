
/* ==== AfxCustomLogFont @ 004b2cbc ==== 
 * signature: int __stdcall AfxCustomLogFont(uint param_1, tagLOGFONTA * param_2)
 * body: 004b2cbc-004b2d44
 * note: Library Function - Single Match  int __stdcall AfxCustomLogFont(unsigned int,struct tagLOGFONTA *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxCustomLogFont(unsigned int,struct tagLOGFONTA *)
   
   Library: Visual Studio 1998 Release */

int AfxCustomLogFont(uint param_1,tagLOGFONTA *param_2)

{
  int iVar1;
  uchar *puVar2;
  uchar local_104 [256];
  
  iVar1 = AfxLoadString(param_1,(char *)local_104,0x100);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = __mbschr(local_104,10);
    if (puVar2 != (uchar *)0x0) {
      iVar1 = _atoi((char *)(puVar2 + 1));
      param_2->lfHeight = iVar1;
      iVar1 = MulDiv(param_2->lfHeight,DAT_004e519c,0x48);
      param_2->lfHeight = iVar1;
      *puVar2 = '\0';
    }
    lstrcpynA(param_2->lfFaceName,(LPCSTR)local_104,0x20);
    iVar1 = 1;
  }
  return iVar1;
}


