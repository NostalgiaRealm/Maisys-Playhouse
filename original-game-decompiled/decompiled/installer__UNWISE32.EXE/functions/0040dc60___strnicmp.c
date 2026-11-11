
/* ==== __strnicmp @ 0040dc60 ==== 
 * signature: int __cdecl __strnicmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * body: 0040dc60-0040dd0c
 * note: Library Function - Single Match  __strnicmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __strnicmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    if (DAT_00413448 == 0) {
      do {
        bVar2 = *_Str1;
        cVar1 = *_Str2;
        uVar3 = CONCAT11(bVar2,cVar1);
        if (bVar2 == 0) break;
        uVar3 = CONCAT11(bVar2,cVar1);
        uVar6 = (uint)uVar3;
        if (cVar1 == '\0') break;
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar6 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
        }
        uVar3 = (ushort)uVar6;
        bVar2 = (byte)uVar6;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar3 = (ushort)CONCAT31((int3)(uVar6 >> 8),bVar2 + 0x20);
        }
        bVar2 = (byte)(uVar3 >> 8);
        bVar7 = bVar2 < (byte)uVar3;
        if (bVar2 != (byte)uVar3) goto LAB_0040dcbb;
        _MaxCount = _MaxCount - 1;
      } while (_MaxCount != 0);
      iVar5 = 0;
      bVar2 = (byte)(uVar3 >> 8);
      bVar7 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) {
LAB_0040dcbb:
        iVar5 = -1;
        if (!bVar7) {
          iVar5 = 1;
        }
      }
    }
    else {
      uVar6 = 0;
      uVar4 = 0;
      do {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),*_Str1);
        uVar6 = CONCAT31((int3)(uVar6 >> 8),*_Str2);
        if ((uVar4 == 0) || (uVar6 == 0)) break;
        _Str1 = _Str1 + 1;
        _Str2 = _Str2 + 1;
        uVar6 = FUN_0040dda0(uVar6);
        uVar4 = FUN_0040dda0(uVar4);
        bVar7 = uVar4 < uVar6;
        if (uVar4 != uVar6) goto LAB_0040dcfd;
        _MaxCount = _MaxCount - 1;
      } while (_MaxCount != 0);
      iVar5 = 0;
      bVar7 = uVar4 < uVar6;
      if (uVar4 != uVar6) {
LAB_0040dcfd:
        iVar5 = -1;
        if (!bVar7) {
          iVar5 = 1;
        }
      }
    }
  }
  return iVar5;
}


