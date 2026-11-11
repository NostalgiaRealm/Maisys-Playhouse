
/* ==== __break @ 00447e1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447e1c-00447e1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


