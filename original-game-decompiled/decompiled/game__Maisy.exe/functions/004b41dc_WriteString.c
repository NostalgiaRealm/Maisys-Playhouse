
/* ==== CArchive::WriteString @ 004b41dc ==== 
 * signature: void __thiscall WriteString(CArchive * this, char * param_1)
 * body: 004b41dc-004b41f8
 * note: Library Function - Single Match  public: void __thiscall CArchive::WriteString(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CArchive::WriteString(char const *)
   
   Library: Visual Studio 1998 Release */

void __thiscall CArchive::WriteString(CArchive *this,char *param_1)

{
  uint uVar1;
  
  uVar1 = lstrlenA(param_1);
  Write(this,param_1,uVar1);
  return;
}


