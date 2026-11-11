
/* ==== CMapStringToPtr::LookupKey @ 004a5e5a ==== 
 * signature: int __thiscall LookupKey(CMapStringToPtr * this, char * param_1, char * * param_2)
 * body: 004a5e5a-004a5e86
 * note: Library Function - Single Match  public: int __thiscall CMapStringToPtr::LookupKey(char const *,char const * &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CMapStringToPtr::LookupKey(char const *,char const * &)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CMapStringToPtr::LookupKey(CMapStringToPtr *this,char *param_1,char **param_2)

{
  undefined4 *puVar1;
  uint local_4;
  
  puVar1 = GetAssocAt(this,(uchar *)param_1,&local_4);
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = (char *)puVar1[2];
  }
  return (uint)(puVar1 != (undefined4 *)0x0);
}


