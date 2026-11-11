
/* ==== __break @ 00423826 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00423826-00423826
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


