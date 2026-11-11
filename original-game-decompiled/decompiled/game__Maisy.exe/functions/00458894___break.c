
/* ==== __break @ 00458894 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458894-00458894
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


