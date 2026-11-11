
/* ==== __break @ 00447f9c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447f9c-00447f9c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


