
/* ==== __break @ 00458fff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458fff-00458fff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


