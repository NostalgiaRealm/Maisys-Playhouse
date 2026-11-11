
/* ==== CFileException::OsErrorToException @ 004aeb36 ==== 
 * signature: int __stdcall OsErrorToException(long param_1)
 * body: 004aeb36-004aedd6
 * note: Library Function - Single Match  public: static int __stdcall CFileException::OsErrorToException(long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static int __stdcall CFileException::OsErrorToException(long)
   
   Library: Visual Studio 1998 Release */

int CFileException::OsErrorToException(long param_1)

{
  int iVar1;
  
  if ((uint)param_1 < 0x10c) {
    if (param_1 == 0x10b) {
      return 3;
    }
    switch(param_1) {
    case 0:
      iVar1 = 0;
      break;
    default:
      goto switchD_004aeb55_caseD_1;
    case 2:
      iVar1 = 2;
      break;
    case 3:
      iVar1 = 3;
      break;
    case 4:
      iVar1 = 4;
      break;
    case 5:
    case 0xc:
    case 0x13:
    case 0x1d:
    case 0x36:
    case 0x3a:
    case 0x40:
    case 0x41:
    case 0x47:
    case 0x50:
    case 0x52:
    case 0x56:
    case 0xaa:
    case 0xb7:
switchD_004aeb55_caseD_5:
      iVar1 = 5;
      break;
    case 6:
      iVar1 = 2;
      break;
    case 0xb:
      iVar1 = 6;
      break;
    case 0xf:
      iVar1 = 3;
      break;
    case 0x10:
      iVar1 = 7;
      break;
    case 0x11:
      iVar1 = 3;
      break;
    case 0x12:
      iVar1 = 2;
      break;
    case 0x14:
      iVar1 = 10;
      break;
    case 0x15:
      iVar1 = 10;
      break;
    case 0x16:
      iVar1 = 10;
      break;
    case 0x17:
      iVar1 = 10;
      break;
    case 0x18:
      iVar1 = 9;
      break;
    case 0x19:
      iVar1 = 9;
      break;
    case 0x1a:
      iVar1 = 6;
      break;
    case 0x1b:
      iVar1 = 9;
      break;
    case 0x1e:
      iVar1 = 9;
      break;
    case 0x20:
      iVar1 = 0xb;
      break;
    case 0x21:
      iVar1 = 0xc;
      break;
    case 0x22:
      iVar1 = 3;
      break;
    case 0x24:
      iVar1 = 4;
      break;
    case 0x26:
      iVar1 = 0xe;
      break;
    case 0x27:
      iVar1 = 0xd;
      break;
    case 0x34:
      iVar1 = 3;
      break;
    case 0x35:
      iVar1 = 3;
      break;
    case 0x37:
      iVar1 = 3;
      break;
    case 0x39:
switchD_004aeb55_caseD_39:
      iVar1 = 10;
      break;
    case 0x3b:
      iVar1 = 10;
      break;
    case 0x3c:
      iVar1 = 6;
      break;
    case 0x3e:
      iVar1 = 8;
      break;
    case 0x42:
      iVar1 = 6;
      break;
    case 0x43:
      iVar1 = 3;
      break;
    case 0x44:
      iVar1 = 4;
      break;
    case 0x46:
      iVar1 = 3;
      break;
    case 0x55:
      iVar1 = 3;
      break;
    case 0x58:
      iVar1 = 10;
      break;
    case 0x6b:
      iVar1 = 2;
      break;
    case 0x6c:
      iVar1 = 0xc;
      break;
    case 0x6f:
      iVar1 = 3;
      break;
    case 0x70:
      iVar1 = 0xd;
      break;
    case 0x71:
      iVar1 = 4;
      break;
    case 0x72:
      iVar1 = 6;
      break;
    case 0x75:
      iVar1 = 10;
      break;
    case 0x7b:
      iVar1 = 3;
      break;
    case 0x7c:
      iVar1 = 3;
      break;
    case 0x7d:
      iVar1 = 3;
      break;
    case 0x83:
      iVar1 = 9;
      break;
    case 0x84:
      iVar1 = 9;
      break;
    case 0x90:
      iVar1 = 3;
      break;
    case 0x91:
      iVar1 = 7;
      break;
    case 0x9a:
      iVar1 = 3;
      break;
    case 0xa1:
      iVar1 = 3;
      break;
    case 0xa7:
      iVar1 = 0xc;
      break;
    case 0xb6:
      iVar1 = 6;
      break;
    case 0xbf:
      iVar1 = 6;
      break;
    case 0xc1:
      iVar1 = 6;
      break;
    case 0xce:
      iVar1 = 3;
      break;
    case 0xd0:
      iVar1 = 3;
    }
  }
  else {
    if (param_1 == 0x3e3) {
      return 10;
    }
    if (param_1 == 0x3e4) {
      return 10;
    }
    if (param_1 == 0x3e5) goto switchD_004aeb55_caseD_39;
    if (param_1 == 999) goto switchD_004aeb55_caseD_5;
switchD_004aeb55_caseD_1:
    iVar1 = 1;
  }
  return iVar1;
}


