
/* ==== ReadStringLength @ 004b3a60 ==== 
 * signature: uint __stdcall ReadStringLength(CArchive * param_1)
 * body: 004b3a60-004b3b00
 * note: Library Function - Single Match  unsigned int __stdcall ReadStringLength(class CArchive &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    unsigned int __stdcall ReadStringLength(class CArchive &)
   
   Library: Visual Studio 1998 Release */

uint ReadStringLength(CArchive *param_1)

{
  CArchive *pCVar1;
  CArchive *pCVar2;
  byte bVar3;
  ushort uVar4;
  byte *pbVar5;
  ushort *puVar6;
  uint uVar7;
  
  pCVar1 = param_1 + 0x24;
  pCVar2 = param_1 + 0x28;
  if (*(uint *)pCVar2 < *(int *)pCVar1 + 1U) {
    FUN_004b4055(param_1,(*(int *)pCVar1 - *(uint *)pCVar2) + 1);
  }
  pbVar5 = *(byte **)pCVar1;
  bVar3 = *pbVar5;
  *(byte **)pCVar1 = pbVar5 + 1;
  if (bVar3 == 0xff) {
    if (*(byte **)pCVar2 < pbVar5 + 3) {
      FUN_004b4055(param_1,(uint)(pbVar5 + 1 + (2 - (int)*(byte **)pCVar2)));
    }
    puVar6 = *(ushort **)pCVar1;
    uVar4 = *puVar6;
    *(ushort **)pCVar1 = puVar6 + 1;
    if (uVar4 == 0xfffe) {
      uVar7 = 0xffffffff;
    }
    else if (uVar4 == 0xffff) {
      if (*(ushort **)pCVar2 < puVar6 + 3) {
        FUN_004b4055(param_1,(int)(puVar6 + 1) + (4 - (int)*(ushort **)pCVar2));
      }
      uVar7 = **(uint **)pCVar1;
      *(uint **)pCVar1 = *(uint **)pCVar1 + 1;
    }
    else {
      uVar7 = (uint)uVar4;
    }
  }
  else {
    uVar7 = (uint)bVar3;
  }
  return uVar7;
}


